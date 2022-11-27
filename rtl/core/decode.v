`include "defines.v"

// INSTRUCTION FETCH

module decode(
    input  [`INSTR_SIZE-1:0]    instr_i,

    output [`REG_IDX_WIDTH-1:0] dec_rs1_idx_o,
    output [`REG_IDX_WIDTH-1:0] dec_rs2_idx_o, 
    output [`REG_IDX_WIDTH-1:0] dec_rd_idx_o,
    output                      dec_rs1_en_o, // 是否读rs1
    output                      dec_rs2_en_o, // 是否读rs2
    output                      dec_rd_en_o,  // 是否写rd
    output [`XLEN-1:0]          dec_imm_o,
    
    input [`XLEN-1:0]           dec_rs1_i,
    input [`XLEN-1:0]           dec_rs2_i
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


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  OPCODE 解析
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    always @(*) begin
        case(opcode)
            `INSTR_I_TYPE: begin
                dec_rs1_idx_o = rs1;
                dec_rs1_idx_o = ;
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {20{instr_i[31]}}, instr_i[31:20] };
            end
            `INSTR_R_TYPE: begin
                dec_rs1_idx_o = rs1;
                dec_rs1_idx_o = rs2;
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = `XLEN'b0;               
            end
            `INSTR_SB_TYPE: begin
                dec_rs1_idx_o = rs1;
                dec_rs1_idx_o = rs2;
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {19{instr_i[31]}}, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0 };
            end
            `INSTR_JAL: begin
                dec_rs1_idx_o = rs1;
                dec_rs1_idx_o = rs2;
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b0;
                dec_imm_o = { {11{instr_i[31]}}, instr_i[31],   instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
            end
            `INSTR_JALR: begin
                dec_rs1_idx_o = rs1;
                dec_rs1_idx_o = ;
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {20{instr_i[31]}}, instr_i[31:20] };
            end
            `INSTR_LUI: begin
                dec_rs1_idx_o = ;
                dec_rs1_idx_o = ;
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { instr_i[31:12], 12'b0 };
            end
            `INSTR_AUIPC: begin
                dec_rs1_idx_o = ;
                dec_rs1_idx_o = ;
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { instr_i[31:12], 12'b0 };
            end
            default: begin
                dec_rs1_idx_o = rs1;
                dec_rs1_idx_o = rs2;
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b0;
                dec_imm_o = `XLEN'b0;  
            end
        endcase
    end


endmodule
