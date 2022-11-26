`include "defines.v"

module pc_reg(
    input                  clk,
    input                  rst_n,
    input  [`PC_WIDTH-1:0] pc_next_i,
    input                  stall_i,
    output [`PC_WIDTH-1:0] pc_o
);

    reg [`PC_WIDTH-1:0] pc_r;

    always @(posedge clk or negedge rst_n) begin
        if(~rst_n) // 复位
            pc_r <= `PC_WIDTH'b0;
        else if(stall_i) // 暂停信号
            pc_r <= pc_r;
        else
            pc_r <= pc_next_i;
    end

    assign pc_o = pc_r;

endmodule