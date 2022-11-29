//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 通用寄存器模块
// author: xia dong
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

`include "defines.v"

module regfile
#(
    parameter reg_num = 32;
)
(

    input clk,
    input rst_n,

    // from write back
    input                    rd_en_i,
    input [`REG_IDX_WIDTH:0] rd_idx_i,
    input [`XLEN-1:0]        rd_wdata_i,
    
    // from decode 
    input [`REG_IDX_WIDTH-1:0] rs1_idx_i,
    input [`REG_IDX_WIDTH-1:0] rs2_idx_i,
    // to decode
    output [`XLEN-1:0]         rs1_rdata_o,
    output [`XLEN-1:0]         rs2_rdata_o,

    // to fetch 
    output [`XLEN-1:0]         rs1_x1_rdata_o
);

    // REG FILE
    reg [`XLEN-1:0] reg_data [1:reg_num-1];

    // WRITE
    integer i;
    always @(posedge clk or negedge rst_n) begin
        if(~rst_n) begin: reset
            for(i = 0; i < reg_num; i++) begin
                reg_data[rd_idx_i] <= `XLEN'b0;
            end
        end else if(rd_en_i) begin
            reg_data[rd_idx_i] <= rd_wdata_i;
        end
    end

    // READ RS1
    always @(*) begin: rs1_read
        if(rs1_idx_i == `REG_IDX_WIDTH'b0) begin
            rs1_rdata_o = `XLEN'b0;
        end else begin
            rs1_rdata_o = reg_data[rs1_idx_i];
        end
    end


    // READ RS2
    always @(*) begin: rs2_read
        if(rs2_idx_i == `REG_IDX_WIDTH'b0) begin
            rs2_rdata_o = `XLEN'b0;
        end else begin
            rs2_rdata_o = reg_data[rs2_idx_i];
        end
    end

endmodule