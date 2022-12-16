//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 通用寄存器模块
// author: xia dong
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

`include "defines.v"

module regfile
#(
    parameter reg_num = 32
)
(

    input                      clk,
    input                      rst_n,

    // from write back
    input                      wb_rd_en_i,
    input [`REG_IDX_WIDTH-1:0] wb_rd_idx_i,
    input [`XLEN-1:0]          wb_rd_wdata_i,
    
    // from decode 
    input                      id_rs1_en_i,
    input                      id_rs2_en_i,
    input [`REG_IDX_WIDTH-1:0] id_rs1_idx_i,
    input [`REG_IDX_WIDTH-1:0] id_rs2_idx_i,
    // to decode
    output reg [`XLEN-1:0]     rf_rs1_rdata_o,
    output reg [`XLEN-1:0]     rf_rs2_rdata_o,

    // to fetch 
    output reg [`XLEN-1:0]     rf_rs1_x1_rdata_o
);

  
    // REG FILE
    reg [`XLEN-1:0] reg_data [1:reg_num-1];

    // WRITE
    integer i;
    always @(posedge clk or negedge rst_n) begin
        if(~rst_n) begin: reset
            for(i = 0; i < reg_num; i++) begin
                reg_data[i] <= `XLEN'b0;
            end
            // 写使能有效并且写入index != x0
        end else if(wb_rd_en_i & (wb_rd_idx_i != `REG_X0)) begin
            reg_data[wb_rd_idx_i] <= wb_rd_wdata_i;
        end
    end

    assign rf_rs1_x1_rdata_o = reg_data[1];

    assign rf_rs1_rdata_o = ((id_rs1_idx_i == `REG_X0) | ~id_rs1_en_i)   ? `XLEN'b0
                          : ((id_rs1_idx_i == wb_rd_idx_i) & wb_rd_en_i) ? wb_rd_wdata_i
                          : reg_data[id_rs1_idx_i];

    assign rf_rs2_rdata_o = ((id_rs2_idx_i == `REG_X0) | ~id_rs2_en_i)   ? `XLEN'b0
                          : ((id_rs2_idx_i == wb_rd_idx_i) & wb_rd_en_i) ? wb_rd_wdata_i
                          : reg_data[id_rs2_idx_i];

endmodule