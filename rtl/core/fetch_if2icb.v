`include "defines.v"

module fetch_if2icb(
    // IF REQ CHANNEL
    input                     if_req_valid_i,
    output                    if_req_ready_o,
    input [`PC_WIDTH-1:0]     if_req_pc_i,
    // IF RESP CHANNEL
    output                    if_resp_valid_o,    
    input                     if_resp_ready_i,
    output                    if_resp_misalign_o,
    output                    if_resp_bus_err_o,
    output [`INSTR_WIDTH-1:0] if_resp_instr_o
);

    assign if_req_ready_o  = 1'b1;
    assign if_resp_valid_o = 1'b1;

    // 取指异常
    // 所有指令都为4字节对齐 最低2位一定为0
    assign if_resp_misalign_o = (if_req_pc_i[1:0] == 2'b00); 
    assign if_resp_bus_err_o  = 1'b0;

    assign if_resp_instr_o = instr;

    reg [`INSTR_WIDTH-1:0] instr;

    // 模拟指令存储
    reg [`BYTE_WIDTH-1:0] instr_mem [0:1023];

    wire [`PC_WIDTH-1:0] pc = if_req_pc_i;
    
    // 小端法 低位在低地址
    always @(*) begin
        instr[`INSTR_WIDTH-1:0] = {instr_mem[pc+3], instr_mem[pc+2], instr_mem[pc+1], instr_mem[pc]};
    end
     
    initial begin
        $readmemh("./code.txt", instr_mem);
    end

endmodule