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

    dff_lr #(PC_WIDTH)    pc_dff_lr(   clk, rst_n, ~stall_i, if_pc_i,    if_id_pc_o);
    
    dff_lr #(INSTR_WIDTH) instr_dff_lr(clk, rst_n, ~stall_i, if_instr_i, if_id_instr_o);
    
endmodule