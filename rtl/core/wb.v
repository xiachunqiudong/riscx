`include "defines.v"

module wb(
    input [`PC_WIDTH-1:0]       mem_wb_pc_i,
    
    input [`REG_IDX_WIDTH-1:0]  mem_wb_ex_rd_idx_i,
    input                       mem_wb_ex_rd_en_i,
    input [`XLEN-1:0]           mem_wb_ex_rd_wdata_i,
    
    input [`REG_IDX_WIDTH-1:0]  mem_wb_mem_rd_idx_i,
    input                       mem_wb_mem_rd_en_i,
    input [`XLEN-1:0]           mem_wb_mem_rd_wdata_i,

    output                      wb_rd_en_o,
    output [`REG_IDX_WIDTH-1:0] wb_rd_idx_o,
    output [`XLEN-1:0]          wb_rd_wdata_o
);

    assign wb_rd_en_o = mem_wb_ex_rd_en_i | mem_wb_mem_rd_en_i;

    assign wb_rd_idx_o = ({`REG_IDX_WIDTH{mem_wb_ex_rd_en_i}}  & mem_wb_ex_rd_idx_i)
                       | ({`REG_IDX_WIDTH{mem_wb_mem_rd_en_i}} & mem_wb_mem_rd_idx_i);

    assign wb_rd_wdata_o = ({`XLEN{mem_wb_ex_rd_en_i}}  & mem_wb_ex_rd_wdata_i)
                         | ({`XLEN{mem_wb_mem_rd_en_i}} & mem_wb_mem_rd_wdata_i);

endmodule