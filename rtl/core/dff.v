
// D触发器
// 带加载使能以及复位信号
// 复位值为0
module dff
#(
    parameter DW        = 32,
    parameter RESET_VAL = 0
)
(
    input           clk,
    input           rst_n,
    input           wen,
    input  [DW-1:0] din,
    output [DW-1:0] qout
);

    reg [DW-1:0] qout_r;

    assign qout = qout_r;

    always @(posedge clk or negedge rst_n) begin
        if(~rst_n)
            qout_r <= RESET_VAL;
        else if(wen)
            qout_r <= din;
    end
    
endmodule