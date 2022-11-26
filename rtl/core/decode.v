`include "defines.v"

// INSTRUCTION FETCH

module decode(
    input  [`INSTR_SIZE-1:0]    instr_i,

    output [`REG_IDX_WIDTH-1:0] dec_rs1_idx_o,
    output [`REG_IDX_WIDTH-1:0] dec_rs2_idx_o, 
    output [`REG_IDX_WIDTH-1:0] dec_rd_idx_o,
    output                      dec_rs1_en,
    output                      dec_rs2_en,
    output                      dec_rd_en,
    
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




endmodule