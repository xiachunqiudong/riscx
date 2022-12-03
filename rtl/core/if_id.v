`include "defines.v"

module if_id(
    input                     clk,
    input                     rst_n,
    input                     stall_i, // 暂停流水线
    // from instruction fetch
    input [`PC_WIDTH-1:0]     if_pc_i,
    input [`INSTR_WIDTH-1:0]  if_instr_i,
    // to instruction decode
    output [`PC_WIDTH-1:0]    if_id_pc_o,
    output [`INSTR_WIDTH-1:0] if_id_instr_o
);

    wire wen = ~stall_i;

    dff #(.DW(`PC_WIDTH),    .RESET_VAL(0)) pc_dff(   clk, rst_n, wen, if_pc_i,    if_id_pc_o);
    
    dff #(.DW(`INSTR_WIDTH), .RESET_VAL(0)) instr_dff(clk, rst_n, wen, if_instr_i, if_id_instr_o);
    
endmodule