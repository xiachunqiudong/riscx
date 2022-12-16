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
    
    output [`XLEN-1:0]          ex_alu_res_o, // 内存地址 = rs1 + imm
    
    output                      ex_pipe_flush_o,
    output [`PC_WIDTH-1:0]      ex_pipe_flush_pc_o,

    // forward to id or go to wb
    output [`REG_IDX_WIDTH-1:0] ex_rd_idx_o,  // 写回目的寄存器索引
    output                      ex_rd_en_o,   // 是否写回alu的值
    output [`XLEN-1:0]          ex_rd_wdata_o // 写回rd
);

    wire [6:0] opcode = instr_i[6:0];
    wire [4:0] rd     = instr_i[11:7];
    wire [2:0] fun3   = instr_i[14:12];
    wire [6:0] fun7   = instr_i[31:25];

    assign ex_rd_idx_o   = rd;
    assign ex_rd_en_o    = (al_ali | lui | auipc| jal | jalr);
    assign ex_rd_wdata_o = ex_alu_res_o;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  ALU
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//


    // al means algorithm and logic
    wire al    = (opcode == `INSTR_AL);
    wire ali   = (opcode == `INSTR_ALI);
    wire ld_st = (opcode == `INSTR_LD | opcode == `INSTR_ST);
    wire bxx   = (opcode == `INSTR_BXX);
    wire jal   = (opcode == `INSTR_JAL);
    wire jalr  = (opcode == `INSTR_JALR);
    wire lui   = (opcode == `INSTR_LUI);
    wire auipc = (opcode == `INSTR_AUIPC);
    
    wire al_ali = al | ali;

    // 具体的算数逻辑运算
    wire fun_add     = (fun3 == 3'b000);
    wire fun_sll     = (fun3 == 3'b001);
    wire fun_slt     = (fun3 == 3'b010);
    wire fun_sltu    = (fun3 == 3'b011);
    wire fun_xor     = (fun3 == 3'b100);
    wire fun_srl     = (fun3 == 3'b101 & ~fun7[5]);
    wire fun_sra     = (fun3 == 3'b101 &  fun7[5]);
    wire fun_or      = (fun3 == 3'b110);
    wire fun_and     = (fun3 == 3'b111);
    
    // op_xx 控制ALU输出结果
    // 需要加法结果的指令:
    // 1. add
    // 2. addi
    // 3. load/store
    // 4. lui
    // 5. auipc
    wire op_add  = ((al_ali & fun_add) | ld_st | lui | auipc);
    // 只有r-r类型才有减法
    wire op_sub  = (al      & fun_add & fun7[5]);
    wire op_sll  = (al_ali  & fun_sll);
    wire op_srl  = (al_ali  & fun_srl);
    wire op_sra  = (al_ali  & fun_sra);
    wire op_and  = (al_ali  & fun_and);
    wire op_or   = (al_ali  & fun_or);
    wire op_xor  = (al_ali  & fun_xor);
    wire op_slt  = (al_ali  & fun_slt);
    wire op_sltu = (al_ali  & fun_sltu);

    // al:    res = rs1 op rs2
    // ali:   res = rs1 op imm
    // bxx:   res = rs1 -  rs2
    // ld/st: res = rs1 +  imm
    // lui:   res = 0   +  imm
    // auipc: res = pc  +  imm
    // jal:   res = pc  +  4  
    // jalr:  res = pc  +  4  

    // 操作数计算
    wire [`XLEN-1:0] alu_op1;
    wire [`XLEN-1:0] alu_op2;
    
    assign alu_op1 = lui                  ? `XLEN'b0 
                   : (auipc | jal | jalr) ? pc_i
                   : rs1_rdata_i;
    
    assign alu_op2 = (al | bxx)   ? rs2_rdata_i
                   : (jal | jalr) ? `XLEN'd4
                   : imm_i;

    // ALU
    // 加法
    wire [`XLEN-1:0] add_res;  
    assign add_res = alu_op1 + alu_op2;
    
    // 减法
    wire [`XLEN-1:0] sub_res;
    assign sub_res = alu_op1 + ~alu_op2 + 1;
    
    // 逻辑左移
    wire [`XLEN-1:0] sll_res;
    // 逻辑右移
    wire [`XLEN-1:0] srl_res; 
    // 算数右移
    wire [`XLEN-1:0] sra_res; 
    // 与
    wire [`XLEN-1:0] and_res;
    assign and_res = alu_op1 & alu_op2;
    
    // 或
    wire [`XLEN-1:0] or_res;
    assign or_res = alu_op1 | alu_op2;

    // 异或
    wire [`XLEN-1:0] xor_res;
    assign xor_res = alu_op1 ^ alu_op2;

    // set less than 
    // res = op1 < op2 ? 1 : 0;
    wire [`XLEN-1:0] slt_res;
    assign slt_res = { {(`XLEN-1){1'b0}}, lt };

    // set less than unsigned
    wire [`XLEN-1:0] sltu_res;
    assign sltu_res = { {(`XLEN-1){1'b0}}, lt };

    // alu结果并行多路选择器
    assign ex_alu_res_o = ({`XLEN{op_add}}  & add_res) 
                        | ({`XLEN{op_sub}}  & sub_res) 
                        | ({`XLEN{op_sll}}  & sll_res) 
                        | ({`XLEN{op_srl}}  & srl_res) 
                        | ({`XLEN{op_sra}}  & sra_res) 
                        | ({`XLEN{op_and}}  & and_res) 
                        | ({`XLEN{op_or}}   & or_res) 
                        | ({`XLEN{op_xor}}  & xor_res)
                        | ({`XLEN{op_slt}}  & slt_res)
                        | ({`XLEN{op_sltu}} & sltu_res);

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
    wire neq = (|xor_res);
    wire lt  = sub_res[`XLEN-1];
    
    wire beq_res  =  (beq  & ~neq);
    wire bne_res  =  (bne  &  neq);
    wire blt_res  =  (blt  &  lt );
    wire bge_res  =  (bge  & ~lt );
    wire bltu_res =  (bltu &  lt );
    wire bgeu_res =  (bgeu & ~lt );

    // 分支指令结果
    wire branch_res = beq_res
                    | bne_res
                    | blt_res
                    | bge_res
                    | bltu_res
                    | bgeu_res;

    // 和分支预测对比 如果预测错误需要冲刷流水线
    wire pipe_flush = (branch & (branch_res ^ prdt_taken));

    wire[`PC_WIDTH-1:0] pipe_flush_pc_op1 = pc_i;
    wire[`PC_WIDTH-1:0] pipe_flush_pc_op2 = prdt_taken ? `PC_WIDTH'd4 : imm_i;
    // 并行计算
    assign ex_pipe_flush_pc_o = pipe_flush_pc_op1 + pipe_flush_pc_op2;
    
endmodule