`include "defines.v"

module riscx(
    input clk,
    input rst_n
);

    wire [`PC_WIDTH-1:0] if2pr_pc_next;
    wire [`PC_WIDTH-1:0] pr2if_pc;

    wire [`INSTR_WIDTH-1:0] if2if_id_reg_instr;
    wire [`PC_WIDTH-1:0] if2if_id_reg_pc;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 取指阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    pc_reg pru(
        .clk       (clk),
        .rst_n     (rst_n),
        .pc_next_i (if2pr_pc_next),
        .stall_i   (1'b0),
        .pc_o      (pr2if_pc)
    );

    instr_fetch ifu(
        .pc_i(pr2if_pc),
        .if_pc_next_o(if2pr_pc_next),
        .if_instr_o(if2if_id_reg_instr),
        .if_pc_o(if2if_id_reg_pc)
    );

endmodule