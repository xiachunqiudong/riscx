`include "defines.v"

module riscx(
    input clk,
    input rst_n
);

    wire [`PC_WIDTH-1:0]    if_pc_next;
    wire [`PC_WIDTH-1:0]    pr_pc;

    // from if to if_id
    wire [`PC_WIDTH-1:0]    if_pc;
    wire [`INSTR_WIDTH-1:0] if_instr;

    // from if_if to id
    wire [`PC_WIDTH-1:0]    if_id_pc;
    wire [`INSTR_WIDTH-1:0] if_id_instr;
    

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 取指阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    pc_reg pru(
        .clk       (clk),
        .rst_n     (rst_n),
        .pc_next_i (if_pc_next),
        .stall_i   (1'b0),
        .pc_o      (pr_pc)
    );

    instr_fetch ifu(
        .pc_i         (pr_pc),
        .if_pc_next_o (if_pc_next),
        // to if_id
        .if_instr_o   (if_instr),
        .if_pc_o      (if_pc)
    );

    if_id if_idu(
        .clk           (clk),
        .rst_n         (rst_n),
        .stall_i       (1'b0),
        .if_pc_i       (if_pc),
        .if_instr_i    (if_instr),
        .if_id_pc_o    (if_id_pc),
        .if_id_instr_o (if_id_instr)
    );

endmodule