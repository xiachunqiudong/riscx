`include "defines.v"

module id_ex(
    input                       clk,
    input                       rst_n,
    
    input                       stall_i,
    
    // from id
    input  [`PC_WIDTH-1:0]      dec_pc_i,
    input  [`INSTR_WIDTH-1:0]   dec_instr_i,
    
    input  [`XLEN-1:0]          dec_rs1_rdata_i,
    input  [`XLEN-1:0]          dec_rs2_rdata_i,
    input  [`XLEN-1:0]          dec_imm_i,
    
    input  [`REG_IDX_WIDTH-1:0] dec_rd_idx_i,
    input                       dec_rd_en_i,

    input                       if_id_prdt_taken_i,

    // to ex
    output [`PC_WIDTH-1:0]      id_ex_pc_o,
    output [`INSTR_WIDTH-1:0]   id_ex_instr_o,

    output [`XLEN-1:0]          id_ex_rs1_rdata_o,
    output [`XLEN-1:0]          id_ex_rs2_rdata_o,
    output [`XLEN-1:0]          id_ex_imm_o,

    output [`REG_IDX_WIDTH-1:0] id_ex_rd_idx_o,
    output                      id_ex_rd_en_o,

    output                      id_ex_prdt_taken_o
);

    wire wen = ~stall_i;

    dff #(`PC_WIDTH     , 0) pc_dff        (clk, rst_n, wen, dec_pc_i,              id_ex_pc_o);
    dff #(`INSTR_WIDTH  , 0) instr_dff     (clk, rst_n, wen, dec_instr_i,           id_ex_instr_o);
    
    dff #(`XLEN         , 0) alu_op1_dff   (clk, rst_n, wen, dec_rs1_rdata_i,       id_ex_rs1_rdata_o);
    dff #(`XLEN         , 0) alu_op2_dff   (clk, rst_n, wen, dec_rs2_rdata_i,       id_ex_rs2_rdata_o);
    dff #(`XLEN         , 0) alu_fun_dff   (clk, rst_n, wen, dec_imm_i,             id_ex_imm_o);
   
    dff #(`REG_IDX_WIDTH, 0) rd_idx_dff    (clk, rst_n, wen, dec_rd_idx_i,           id_ex_rd_idx_o);
    dff #(1             , 0) rd_en_dff     (clk, rst_n, wen, dec_rd_en_i,            id_ex_rd_en_o);
    
    dff #(1             , 0) prdt_taken_dff(clk, rst_n, wen, if_id_prdt_taken_i,     id_ex_prdt_taken_o);

endmodule