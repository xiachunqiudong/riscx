`include "defines.v"

module mem_wb(
    input                       clk,
    input                       rst_n,
    input [`PC_WIDTH-1:0]       ex_mem_pc_i,
    input [`REG_IDX_WIDTH-1:0]  ex_mem_ex_rd_idx_i,
    input                       ex_mem_ex_rd_en_i,
    input [`XLEN-1:0]           ex_mem_ex_rd_wdata_i,

    input [`REG_IDX_WIDTH-1:0]  mem_rd_idx_i,
    input                       mem_rd_en_i,
    input [`XLEN-1:0]           mem_rd_wdata_i,


    output [`PC_WIDTH-1:0]      mem_wb_pc_o,
    output [`REG_IDX_WIDTH-1:0] mem_wb_ex_rd_idx_o,
    output                      mem_wb_ex_rd_en_o,
    output [`XLEN-1:0]          mem_wb_ex_rd_wdata_o,
    
    output [`REG_IDX_WIDTH-1:0] mem_wb_mem_rd_idx_o,
    output                      mem_wb_mem_rd_en_o,
    output [`XLEN-1:0]          mem_wb_mem_rd_wdata_o
);

    wire wen = 1'b1;

    // from ex_mem
    dff #(.DW(`PC_WIDTH),      .RESET_VAL(0)) pc_dff         (clk, rst_n, wen, ex_mem_pc_i,          mem_wb_pc_o);
    dff #(.DW(`REG_IDX_WIDTH), .RESET_VAL(0)) ex_rd_idx_dff  (clk, rst_n, wen, ex_mem_ex_rd_idx_i,   mem_wb_ex_rd_idx_o);
    dff #(.DW(1),              .RESET_VAL(0)) ex_rd_en_dff   (clk, rst_n, wen, ex_mem_ex_rd_en_i,    mem_wb_ex_rd_en_o);
    dff #(.DW(`XLEN),          .RESET_VAL(0)) ex_rd_wdata_dff(clk, rst_n, wen, ex_mem_ex_rd_wdata_i, mem_wb_ex_rd_wdata_o);

    // from mem
    dff #(.DW(`REG_IDX_WIDTH), .RESET_VAL(0)) mem_rd_idx_dff  (clk, rst_n, wen, mem_rd_idx_i,   mem_wb_mem_rd_idx_o);
    dff #(.DW(1),              .RESET_VAL(0)) mem_rd_en_dff   (clk, rst_n, wen, mem_rd_en_i,    mem_wb_mem_rd_en_o);
    dff #(.DW(`XLEN),          .RESET_VAL(0)) mem_rd_wdata_dff(clk, rst_n, wen, mem_rd_wdata_i, mem_wb_mem_rd_wdata_o);

endmodule