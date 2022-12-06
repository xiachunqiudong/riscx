`include "defines.v"

// INSTRUCTION FETCH
// 1. 译码出 rs1_idx, rs2_idx, rd_idx, opcode, fun3, fun7
// 2. 根据opcode, fun3, fun7 得出 rs1_en, rs2_en, rd_en, imm
// 3. 从寄存器文件中取出 源操作数
//

module decode(
    // from if_id_reg
    input      [`PC_WIDTH-1:0]      pc_i,
    input      [`INSTR_WIDTH-1:0]   instr_i,

    // 读取源操作数
    // to REG FILE
    output reg [`REG_IDX_WIDTH-1:0] dec_rs1_idx_o,
    output reg [`REG_IDX_WIDTH-1:0] dec_rs2_idx_o, 
    output reg                      dec_rs1_en_o, // 是否读rs1
    output reg                      dec_rs2_en_o, // 是否读rs2

    // from REG FILE
    input      [`XLEN-1:0]          rs1_rdata_i,
    input      [`XLEN-1:0]          rs2_rdata_i,

    // from EX 前递
    input [`REG_IDX_WIDTH-1:0]      ex_rd_idx_i,  
    input                           ex_rd_en_i,   
    input [`XLEN-1:0]               ex_rd_wdata_i,

    // from MEM 前递
    // 1. MEM_ex_rd_wdata 
    input [`REG_IDX_WIDTH-1:0] ex_mem_ex_rd_idx_i,
    input                      ex_mem_ex_rd_en_i,
    input [`XLEN-1:0]          ex_mem_ex_rd_wdata_i,

    // 2. MEM_mem_rd_wdata
    
    // to ID_EX
    output     [`PC_WIDTH-1:0]      dec_pc_o,
    output     [`INSTR_WIDTH-1:0]   dec_instr_o,

    output     [`XLEN-1:0]          dec_rs1_rdata_o,
    output     [`XLEN-1:0]          dec_rs2_rdata_o,
    output reg [`XLEN-1:0]          dec_imm_o,

    output reg [`REG_IDX_WIDTH-1:0] dec_rd_idx_o,
    output reg                      dec_rd_en_o  // 是否写rd
);

    assign dec_instr_o = instr_i;
    assign dec_pc_o    = pc_i;


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  前递操作
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

// 优先级: 
// 1. ex_rd_wdata
// 2. mem_rd_wdata
// 3. reg_file

    wire rs1_not_x0 = (dec_rs1_idx_o != `REG_X0);
    wire rs2_not_x0 = (dec_rs2_idx_o != `REG_X0);
    
    // ex阶段写rd & 译码阶段读rs1 & rs1 != x0 & rs1 == rd
    wire rs1_ex_fwd     = ((ex_rd_en_i        & dec_rs1_en_o & rs1_not_x0) & (dec_rs1_idx_o == ex_rd_idx_i));
    wire rs1_mem_ex_fwd = ((ex_mem_ex_rd_en_i & dec_rs1_en_o & rs1_not_x0) & (dec_rs1_idx_o == ex_mem_ex_rd_idx_i));
    wire rs1_mem_fwd;

    assign dec_rs1_rdata_o = rs1_ex_fwd     ? ex_rd_wdata_i 
                           : rs1_mem_ex_fwd ? ex_mem_ex_rd_wdata_i
                           : rs1_rdata_i;
    
    // ex阶段写rd & 译码阶段读rs2 & rs2 != x0 & rs2 == rd
    wire rs2_ex_fwd     = ((ex_rd_en_i        & dec_rs2_en_o & rs2_not_x0) & (dec_rs2_idx_o == ex_rd_idx_i));
    wire rs2_mem_ex_fwd = ((ex_mem_ex_rd_en_i & dec_rs2_en_o & rs2_not_x0) & (dec_rs2_idx_o == ex_mem_ex_rd_idx_i));
    wire rs2_mem_fwd;

    assign dec_rs2_rdata_o = rs2_ex_fwd     ? ex_rd_wdata_i
                           : rs2_mem_ex_fwd ? ex_mem_ex_rd_wdata_i
                           : rs2_rdata_i;
    

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  指令分解
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire [6:0] opcode = instr_i[6:0];
    wire [4:0] rd     = instr_i[11:7];
    wire [2:0] fun3   = instr_i[14:12];
    wire [4:0] rs1    = instr_i[19:15];
    wire [4:0] rs2    = instr_i[24:20];
    wire [6:0] fun7   = instr_i[31:25];

    assign dec_rs1_idx_o = rs1;
    assign dec_rs2_idx_o = rs2;
    assign dec_rd_idx_o  = rd;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  rs1_en rs2_en rd_en imm
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    // 所有立即数都是符号扩展的
    // rs1 rs2 rd 读写使能 && imm解析
    always @(*) begin
        case(opcode)
            `INSTR_ALI, `INSTR_LD, `INSTR_JALR: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o    = { {20{instr_i[31]}}, instr_i[31:20] };
            end
            `INSTR_AL: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b1;
                dec_imm_o    = `XLEN'b0;               
            end
            `INSTR_BXX: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b0;
                dec_imm_o    = { {19{instr_i[31]}}, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0 };
            end
            `INSTR_JAL: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o    = { {11{instr_i[31]}}, instr_i[31],   instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
            end
            `INSTR_ST: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b0;
                dec_imm_o    = { {20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]};      
            end
            `INSTR_LUI, `INSTR_AUIPC: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o    = { instr_i[31:12], 12'b0 };
            end
            `INSTR_CSR: begin
                if(fun3[2]) begin // CSRI
                    dec_rs1_en_o = 1'b0;
                    dec_rs2_en_o = 1'b0;
                    dec_rd_en_o  = 1'b1;
                    dec_imm_o = `XLEN'b0;  
                end else begin // CSR
                    dec_rs1_en_o = 1'b1;
                    dec_rs2_en_o = 1'b0;
                    dec_rd_en_o  = 1'b1;
                    dec_imm_o = `XLEN'b0;  
                end
            end
            default: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b0;
                dec_imm_o = `XLEN'b0;  
            end
        endcase
    end

endmodule