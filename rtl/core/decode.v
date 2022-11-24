`include "defines.v"

module decode(
    input  [`INSTR_SIZE-1:0] instr_i,
    output [`REG_IDX_WIDTH-1:0] dec_rs1_idx_o, 
    output [`REG_IDX_WIDTH-1:0] dec_rs1_idx_o, 
    output [`REG_IDX_WIDTH-1:0] dec_rd_idx_o,
    output dec_rs1_en,
    output dec_rs2_en,
    output dec_rd_en
);


endmodule