module sel(
    input  sel_a,
    input  sel_b,
    input  sel_c,
    input  [3:0] a,
    input  [3:0] b,
    input  [3:0] c,
    output [3:0] out
);

    assign out = 
        ({4{sel_a}} & a) 
      | ({4{sel_b}} & b) 
      | ({4{sel_c}} & c);

endmodule

module top;

    wire [3:0] a = 2, b = 4, c = 8;
    reg sel_a, sel_b, sel_c;
    wire [3:0] out;
    
    sel s(sel_a, sel_b, sel_c, a, b, c, out);

    initial begin
        sel_a = 1;
        sel_b = 0;
        sel_c = 0;
        # 10
        sel_a = 0;
        sel_b = 1;
        sel_c = 0;
        #10
        sel_a = 0;
        sel_b = 0;
        sel_c = 1;
        #10 
        $stop;
    end

endmodule