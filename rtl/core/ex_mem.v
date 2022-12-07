`include "defines.v"

module ex_mem(
    input                       clk,
    input                       rst_n,
    
    // from id_ex
    input  [`PC_WIDTH-1:0]      ex_pc_i,
    input  [`INSTR_WIDTH-1:0]   ex_instr_i,
    input  [`XLEN-1:0]          ex_rs2_rdata_i,
    // from ex
    input  [`XLEN-1:0]          ex_alu_res_i,
    input  [`REG_IDX_WIDTH-1:0] ex_rd_idx_i,
    input                       ex_rd_en_i,
    input  [`XLEN-1:0]          ex_rd_wdata_i,

    // to mem
    output [`PC_WIDTH-1:0]      ex_mem_pc_o,
    output [`INSTR_WIDTH-1:0]   ex_mem_instr_o,
    output [`XLEN-1:0]          ex_mem_rs2_rdata_o,

    output [`XLEN-1:0]          ex_mem_alu_res_o,
    // forward to id
    output [`REG_IDX_WIDTH-1:0] ex_mem_ex_rd_idx_o,
    output                      ex_mem_ex_rd_en_o,
    output [`XLEN-1:0]          ex_mem_ex_rd_wdata_o
);

    wire wen = `ENABLE;

    dff #(.DW(`PC_WIDTH),      .RESET_VAL(0)) pc_dff         (clk, rst_n, wen, ex_pc_i,        ex_mem_pc_o);
    dff #(.DW(`INSTR_WIDTH),   .RESET_VAL(0)) instr_dff      (clk, rst_n, wen, ex_instr_i,     ex_mem_instr_o);
    dff #(.DW(`XLEN),          .RESET_VAL(0)) rs2_rdata_dff  (clk, rst_n, wen, ex_rs2_rdata_i, ex_mem_rs2_rdata_o);
    dff #(.DW(`XLEN),          .RESET_VAL(0)) alu_res_dff    (clk, rst_n, wen, ex_alu_res_i,   ex_mem_alu_res_o);
    dff #(.DW(`REG_IDX_WIDTH), .RESET_VAL(0)) ex_rd_idx_dff  (clk, rst_n, wen, ex_rd_idx_i,    ex_mem_ex_rd_idx_o);
    dff #(.DW(1),              .RESET_VAL(0)) ex_rd_en_dff   (clk, rst_n, wen, ex_rd_en_i,     ex_mem_ex_rd_en_o);
    dff #(.DW(`XLEN),          .RESET_VAL(0)) ex_rd_wdata_dff(clk, rst_n, wen, ex_rd_wdata_i,  ex_mem_ex_rd_wdata_o);

endmodule