`include "defines.v"

// 只有ld/st指令才需要访存
// 计算指令不访存 访存指令不计算

module mem(
    input                       clk,
    input                       rst_n,
    input  [`INSTR_WIDTH-1:0]   ex_mem_instr_i,
    input  [`XLEN-1:0]          ex_mem_rs2_rdata_i,
    // ALU 计算结果作为访存地址
    input  [`XLEN-1:0]          ex_mem_alu_res_i,
    
    output [`REG_IDX_WIDTH-1:0] mem_rd_idx_o,
    output                      mem_rd_en_o,
    output [`XLEN-1:0]          mem_rd_wdata_o
);

    wire [6:0] opcode       = ex_mem_instr_i[6:0];
    assign mem_rd_idx_o = ex_mem_instr_i[11:7];

    wire ld = (opcode == `INSTR_LD);
    wire st = (opcode == `INSTR_ST);

    // load rd = MEM[rs1 + imm]
    assign mem_rd_en_o = ld;
    
    // load
    // lb lbu
    // lh hu
    // lw


    // store
    // sb
    // sh
    // sw


    // 读写使能
    wire             mem_ren   = ld;
    wire             mem_wen   = st;
    wire [`XLEN-1:0] mem_addr  = ex_mem_alu_res_i;
    wire [`XLEN-1:0] mem_wdata = ex_mem_rs2_rdata_i;

    reg [7:0] memory [0:1023];

    // store
    integer i;
    always @(posedge clk or negedge rst_n) begin
        if(~rst_n) begin
            for(i = 0; i < 1024; i = i + 1) begin
                memory[i] = 0;
            end
        end else if(mem_wen) begin
            memory[mem_addr    ] <= mem_wdata[7 :0];
            memory[mem_addr + 1] <= mem_wdata[15:8];
            memory[mem_addr + 2] <= mem_wdata[23:16];
            memory[mem_addr + 3] <= mem_wdata[31:24];
        end
    end

    // load
    assign mem_rd_wdata_o = mem_rd_en_o ? {memory[mem_addr + 3], memory[mem_addr + 2], memory[mem_addr + 1], memory[mem_addr]}
                                        : `XLEN'b0;

endmodule
