//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 通用寄存器模块
// author: xia dong
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

`include "defines.v"

module regfile(
    input clk,
    input rst_n,

    // from write back
    input rd_en_i,
    input [`REG_IDX_WIDTH:0] rd_idx_i,
    input [`XLEN-1:0] wdata_i,
    
    // from decode 
    input rs1_en_i,
    input rs2_en_i,
    input [`REG_IDX_WIDTH-1:0] rs1_idx_i,
    input [`REG_IDX_WIDTH-1:0] rs2_idx_i,
    // to decode
    output [`XLEN-1:0] rs1_o,
    output [`XLEN-1:0] rs2_o,

    // to fetch 
    output [`XLEN-1:0] rs1_x1
);


endmodule