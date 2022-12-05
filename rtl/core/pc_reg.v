`include "defines.v"

module pc_reg(
    input                  clk,
    input                  rst_n,
    // 暂停时钟寄存器
    input                  stall_i,
    // 冲刷流水线
    input                  pipe_flush_i,
    input  [`PC_WIDTH-1:0] pipe_flush_pc_i,
    
    input  [`PC_WIDTH-1:0] pc_next_i,
    output [`PC_WIDTH-1:0] pc_o
);


    wire [`PC_WIDTH-1:0] pc_din = pipe_flush_i ? pipe_flush_pc_i : pc_next_i;

    wire wen = ~stall_i;

    dff #(.DW(`PC_WIDTH), .RESET_VAL(0)) pc_dff(.clk(clk), .rst_n(rst_n), .wen(wen), .din(pc_din), .qout(pc_o));

endmodule