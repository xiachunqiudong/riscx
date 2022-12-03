`include "defines.v"

module id_ex(
    input                       clk,
    input                       rst_n,
    
    input                       stall_i,
    
    // from id
    input  [`PC_WIDTH-1:0]      dec_pc_i,
    input  [`INSTR_WIDTH-1:0]   dec_instr_i,
    
    input  [`XLEN-1:0]          dec_alu_op1_i,
    input  [`XLEN-1:0]          dec_alu_op2_i,
    input  [3:0]                dec_alu_fun_i,
    
    input  [`REG_IDX_WIDTH-1:0] dec_rd_idx_i,
    input                       dec_rd_en_i,

    // to ex
    output [`PC_WIDTH-1:0]      id_ex_pc_o,
    output [`INSTR_WIDTH-1:0]   id_ex_instr_o,
    output [`XLEN-1:0]          id_ex_alu_op1_o,
    output [`XLEN-1:0]          id_ex_alu_op2_o,
    output [3:0]                id_ex_alu_fun_o,
    output [`REG_IDX_WIDTH-1:0] id_ex_rd_idx_o,
    output                      id_ex_rd_en_o
);

    wire wen = ~stall_i;

    dff #(`PC_WIDTH     , 0) pc_dff(   clk, rst_n, wen, dec_pc_i,      id_ex_pc_o);
    dff #(`INSTR_WIDTH  , 0) instr_dff(clk, rst_n, wen, dec_instr_i,   id_ex_pc_o);
    dff #(`XLEN         , 0) alu_op1(  clk, rst_n, wen, dec_alu_op1_i, id_ex_alu_op1_o);
    dff #(`XLEN         , 0) alu_op2(  clk, rst_n, wen, dec_alu_op2_i, id_ex_alu_op2_o);
    dff #(4             , 0) alu_fun(  clk, rst_n, wen, dec_alu_fun_i, id_ex_alu_fun_o);
    dff #(`REG_IDX_WIDTH, 0) rd_idx(   clk, rst_n, wen, dec_rd_idx_i,  id_ex_rd_idx_o);
    dff #(1             , 0) rd_en(    clk, rst_n, wen, dec_rd_en_i,   id_ex_rd_en_o);
endmodule