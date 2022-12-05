//
// 1. 根据alu_op计算结果
// 2. 如果是条件分支，计算预测是否正确，如果错误需要冲刷流水线
// 
//

`include "defines.v"

module ex(
    input  [`PC_WIDTH-1:0]      pc_i,
    input  [`INSTR_WIDTH-1:0]   instr_i,
    input                       prdt_taken,
    
    input  [`REG_IDX_WIDTH-1:0] rd_idx_i,
    input                       rd_en_i,
    input  [`XLEN-1:0]          rs1_rdata_i,
    input  [`XLEN-1:0]          rs2_rdata_i,
    input  [`XLEN-1:0]          imm_i,
    
    output [`XLEN-1:0]          ex_alu_ret_o,
    
    output                      ex_pipe_flush_o,
    output [`PC_WIDTH-1:0]      ex_pipe_flush_pc_o
);

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  ALU
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    wire [6:0] opcode = instr_i[6:0];
    wire [2:0] fun3   = instr_i[14:12];
    wire [6:0] fun7   = instr_i[31:25];
    
    // ALU
    reg [`XLEN] alu_ret;

    assign alu_ret_o = alu_ret;

    // al means algorithm and logic
    wire al    = (opcode == `INSTR_AL);
    wire ali   = (opcode == `INSTR_ALI);
    wire ld_st = (opcode == `INSTR_LD | opcode == `INSTR_ST);
    wire bxx   = (opcode == `INSTR_BXX);
    wire lui   = (opcode == `INSTR_LUI);
    wire auipc = (opcode == `INSTR_AUIPC);

    wire op_add;
    wire op_sub;
    wire op_sll;
    wire op_srl;
    wire op_sra;
    wire op_and;
    wire op_or;
    wire op_xor;

    





//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  BRANCH CALCULATE
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    wire branch = (opcode == `INSTR_BXX);
    
    wire beq  = branch & (fun3 == `BEQ);
    wire bne  = branch & (fun3 == `BNE);
    wire blt  = branch & (fun3 == `BLT);
    wire bge  = branch & (fun3 == `BGE);
    wire bltu = branch & (fun3 == `BLTU);
    wire bgeu = branch & (fun3 == `BGEU);


    // 如果异或结果有一位为1就说明操作数不相等
    wire neq = (|xor_ret);
    wire lt  = add_res[`XLEN-1];
    
    wire beq_ret  =  (beq  & ~neq);
    wire bne_ret  =  (bne  &  neq);
    wire blt_ret  =  (blt  &  lt );
    wire bge_ret  =  (bge  & ~lt );
    wire bltu_ret =  (bltu &  lt );
    wire bgeu_ret =  (bgeu & ~lt );

    // 分支指令结果
    assign branch_ret = beq_ret
                      | bne_ret
                      | blt_ret
                      | bge_ret
                      | bltu_ret
                      | bgeu_ret;

    // 和分支预测对比 如果预测错误需要冲刷流水线
    wire pipe_flush = (branch & (branch_ret ^ prdt_taken));
    assign ex_pipe_flush_pc_op1 = pc_i;
    assign ex_pipe_flush_pc_op2 = prdt_taken ? `PC_WIDTH'd4 : imm_i;
    // 并行计算
    assign ex_pipe_flush_pc_o = ex_pipe_flush_pc_op1 + ex_pipe_flush_pc_op2;
    
endmodule