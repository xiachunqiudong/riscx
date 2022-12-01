
// D触发器
// 带加载使能以及复位信号
// 复位值为0
module dff_lr
#(
    parameter DW = 32
)
(
    input          clk,
    input          rst_n,
    input          ld_en,
    input [DW-1:0] din,
    input [DW-1:0] qout
)

    reg [DW-1:0] qout_r;

    assign qout = qout_r;

    always @(posedge clk or negedge rst_n) begin
        if(rst_n)
            qout_r <= DW'b0;
        else if(ld_en)
            qout_r <= din;
    end
    
endmodule