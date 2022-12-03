//
// 
// 1. 如果是条件分支，计算是否需要跳转
// 2. 根据alu_op计算结果


`include "defines.v"

module ex(
    input if_prdt_taken,
    input  [6:0] opcode_i,
    input  [3:0] fun3_i,
    input  [6:0] fun7_i,
    input  signed [`XLEN-1:0]  alu_op1_i,
    input  signed [`XLEN-1:0]  alu_op2_i,
    input  signed [3:0]        alu_fun_i,
    output signed [`XLEN-1:0]  alu_ret_o,
    output                     bxx_cmp_ret_o
    

);


    // BRANCH COMPARE
    if(opcode_i == `INSTR_BXX) begin // 分支指令
        case(fun3)

        endcase
    end else begin //非分支指令
        cmp_ret_o = 1'b0;
    end
    
    // ALU
    reg [`XLEN] alu_ret;

    assign alu_ret_o = alu_ret;

    always @(*) begin
        case(alu_fun_i)
        `ALU_FUN_ADD: begin
            alu_ret = alu_op1_i + alu_op2_i;
        end
        `ALU_FUN_SUB: begin
            alu_ret = alu_op1_i + ~alu_op2_i + 1;
        end
        `ALU_FUN_SUB_U: begin
            alu_ret = alu_op1_i - alu_op2_i;
        end
        `ALU_FUN_SLL: begin
            alu_ret = alu_op1_i << alu_op2_i;
        end
        `ALU_FUN_SRL: begin
            alu_ret = alu_op1_i >> alu_op2_i;
        end
        `ALU_FUN_SRA: begin
            alu_ret = alu_op1_i >>> alu_op2_i;
        end
        `ALU_FUN_AND: begin
            alu_ret = alu_op1_i & alu_op2_i;
        end
        `ALU_FUN_OR: begin
            alu_ret = alu_op1_i | alu_op2_i;
        end
        `ALU_FUN_XOR: begin
            alu_ret = alu_op1_i ^ alu_op2_i;
        end
        default: begin
            alu_ret = alu_op1_i + alu_op2_i;
        end
        endcase
    end
    

endmodule