`include "defines.v"

// INSTRUCTION FETCH

module decode(
    // from if_id_reg
    input  [`INSTR_WIDTH-1:0]    instr_i,
    input  [`PC_WIDTH-1:o] pc_i,

    // to REG FILE
    output reg [`REG_IDX_WIDTH-1:0] dec_rs1_idx_o,
    output reg [`REG_IDX_WIDTH-1:0] dec_rs2_idx_o, 
    output reg                      dec_rs1_en_o, // 是否读rs1
    output reg                      dec_rs2_en_o, // 是否读rs2

    // from REG FILE
    input [`XLEN-1:0]               dec_rs1_i,
    input [`XLEN-1:0]               dec_rs2_i
    
    // to ID_EX
    output reg [`REG_IDX_WIDTH-1:0] dec_rd_idx_o,
    output reg                      dec_rd_en_o,  // 是否写rd

    // to ALU UNIT
    output [`PC_WIDTH-1:0] dec_pc_o,
    output reg [`XLEN-1:0] dec_alu_op1,
    output reg [`XLEN-1:0] dec_alu_op2,
    output reg [3:0]       dec_alu_fun
    
    

);


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
//  OPCODE 解析
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    reg [`XLEN-1:0]          dec_imm_o,

    // 操作数解析
    always @(*) begin
        case(opcode)
            `INSTR_I_TYPE: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {20{instr_i[31]}}, instr_i[31:20] };
            end
            `INSTR_R_TYPE: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = `XLEN'b0;               
            end
            `INSTR_SB_TYPE: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {19{instr_i[31]}}, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0 };
            end
            `INSTR_JAL: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b0;
                dec_imm_o = { {11{instr_i[31]}}, instr_i[31],   instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
            end
            `INSTR_JALR: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {20{instr_i[31]}}, instr_i[31:20] };
            end
            `INSTR_LUI: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { instr_i[31:12], 12'b0 };
            end
            `INSTR_AUIPC: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { instr_i[31:12], 12'b0 };
            end
            default: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b0;
                dec_imm_o = `XLEN'b0;  
            end
        endcase
    end

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  ALU_FUN 解析
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    always @(*) begin
        case(opcode)
            `INSTR_I_TYPE: begin
                
            end
            `INSTR_R_TYPE: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = `XLEN'b0;               
            end
            `INSTR_SB_TYPE: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {19{instr_i[31]}}, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0 };
            end
            `INSTR_JAL: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b0;
                dec_imm_o = { {11{instr_i[31]}}, instr_i[31],   instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
            end
            `INSTR_JALR: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {20{instr_i[31]}}, instr_i[31:20] };
            end
            `INSTR_LUI: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { instr_i[31:12], 12'b0 };
            end
            `INSTR_AUIPC: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { instr_i[31:12], 12'b0 };
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
