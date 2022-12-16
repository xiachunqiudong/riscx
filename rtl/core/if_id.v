`include "defines.v"

module if_id(
    input                     clk,
    input                     rst_n,
    input                     stall_i, // 暂停流水线
    // from if
    input [`PC_WIDTH-1:0]     if_pc_i,
    input [`INSTR_WIDTH-1:0]  if_instr_i,
    input                     if_prdt_taken_i,
    // excp
    input                     if_excp_misalign_i,
    input                     if_excp_bus_err_i,
    
    // to instruction decode
    output [`PC_WIDTH-1:0]    if_id_pc_o,
    output [`INSTR_WIDTH-1:0] if_id_instr_o,
    output                    if_id_prdt_taken_o,
    // excp
    output                    if_id_if_excp_misalign_o,
    output                    if_id_if_excp_bus_err_o
);

    wire wen = ~stall_i;

    dff #(.DW(`PC_WIDTH),    .RESET_VAL(0)) pc_dff               (clk, rst_n, wen, if_pc_i,            if_id_pc_o);
    dff #(.DW(`INSTR_WIDTH), .RESET_VAL(0)) instr_dff            (clk, rst_n, wen, if_instr_i,         if_id_instr_o);
    dff #(.DW(1),            .RESET_VAL(0)) prdt_taken_dff       (clk, rst_n, wen, if_prdt_taken_i,    if_id_prdt_taken_o);
    dff #(.DW(1),            .RESET_VAL(0)) if_excp_misalign_dff (clk, rst_n, wen, if_excp_misalign_i, if_id_if_excp_misalign_o);
    dff #(.DW(1),            .RESET_VAL(0)) if_excp_bus_err_dff  (clk, rst_n, wen, if_excp_bus_err_i,  if_id_if_excp_bus_err_o);

    
endmodule