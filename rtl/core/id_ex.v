`include "defines.v"

module id_ex(
    input                       clk,
    input                       rst_n,
    
    input                       stall_i,
    
    // from if_id
    input  [`PC_WIDTH-1:0]      if_id_pc_i,
    input  [`INSTR_WIDTH-1:0]   if_id_instr_i,
    input                       if_id_prdt_taken_i,
    input                       if_id_if_excp_misalign_i,
    input                       if_id_if_excp_bus_err_i,
    // from id
    input  [`XLEN-1:0]          id_rs1_rdata_i,
    input  [`XLEN-1:0]          id_rs2_rdata_i,
    input  [`XLEN-1:0]          id_imm_i,
    
    input  [`REG_IDX_WIDTH-1:0] id_rd_idx_i,
    input                       id_rd_en_i,
    // id excp
    input                       id_excp_ilegl_instr_i,
    input                       id_excp_ecall_i,
    input                       id_excp_ebreak_i,
    input                       id_excp_mret_i,

    // to id_ex
    output [`PC_WIDTH-1:0]      id_ex_pc_o,
    output [`INSTR_WIDTH-1:0]   id_ex_instr_o,
    output                      id_ex_prdt_taken_o,

    output [`XLEN-1:0]          id_ex_rs1_rdata_o,
    output [`XLEN-1:0]          id_ex_rs2_rdata_o,
    output [`XLEN-1:0]          id_ex_imm_o,

    output [`REG_IDX_WIDTH-1:0] id_ex_rd_idx_o,
    output                      id_ex_rd_en_o,
    // if excp
    output                      id_ex_if_excp_misalign_o,
    output                      id_ex_if_excp_bus_err_o,
    // id excp
    output                      id_ex_id_excp_ilegl_instr_o,
    output                      id_ex_id_excp_ecall_o,
    output                      id_ex_id_excp_ebreak_o,
    output                      id_ex_id_excp_mret_o,


);

    wire wen = ~stall_i;

    dff #(`PC_WIDTH     , 0) pc_dff        (clk, rst_n, wen, id_pc_i,              id_ex_pc_o);
    dff #(`INSTR_WIDTH  , 0) instr_dff     (clk, rst_n, wen, id_instr_i,           id_ex_instr_o);
    
    dff #(`XLEN         , 0) alu_op1_dff   (clk, rst_n, wen, id_rs1_rdata_i,       id_ex_rs1_rdata_o);
    dff #(`XLEN         , 0) alu_op2_dff   (clk, rst_n, wen, id_rs2_rdata_i,       id_ex_rs2_rdata_o);
    dff #(`XLEN         , 0) alu_fun_dff   (clk, rst_n, wen, id_imm_i,             id_ex_imm_o);
   
    dff #(`REG_IDX_WIDTH, 0) rd_idx_dff    (clk, rst_n, wen, id_rd_idx_i,           id_ex_rd_idx_o);
    dff #(1             , 0) rd_en_dff     (clk, rst_n, wen, id_rd_en_i,            id_ex_rd_en_o);
    
    dff #(1             , 0) prdt_taken_dff(clk, rst_n, wen, if_id_prdt_taken_i,     id_ex_prdt_taken_o);
    
    dff #(1             , 0) if_excp_misalign_dff   (clk, rst_n, wen, if_id_if_excp_misalign_i, id_ex_if_excp_misalign_o);
    dff #(1             , 0) if_excp_bus_err_dff    (clk, rst_n, wen, if_id_if_excp_bus_err_i,  id_ex_if_excp_bus_err_o);
    dff #(1             , 0) id_excp_ilegl_instr_dff(clk, rst_n, wen, id_excp_ilegl_instr_i,    id_ex_id_excp_ilegl_instr_o);
    dff #(1             , 0) id_excp_ecall_dff      (clk, rst_n, wen, id_excp_ecall_i,          id_ex_id_excp_ecall_o);
    dff #(1             , 0) id_excp_ebreak_dff     (clk, rst_n, wen, id_excp_ebreak_i,         id_ex_id_excp_ebreak_o);
    dff #(1             , 0) id_excp_mret_dff       (clk, rst_n, wen, id_excp_mret_i,           id_ex_id_excp_mret_o);



endmodule