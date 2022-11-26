
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// INSTRUCTION FETCH
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

// 1. 对取回的指令进行简单译码
// 2. 简单的分支预测
// 3. PC生成
// 4. 根据PC访问ITCM/BUI

`include "defines.v"

module instr_fetch(
    // PC REG
    input  [`PC_WIDTH-1:0]    pc_i,
    output [`PC_WIDTH-1:0]    if_pc_next_o,
    
    // IF_ID REG
    output [`INSTR_WIDTH-1:0] if_instr_o,
    output [`PC_WIDTH-1:0]    if_pc_o
);

    reg [`INSTR_WIDTH-1:0] instr;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 部分译码
// 用于分支预测          
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    wire dec_bjp;
    wire dec_bxx;
    wire dec_jal;
    wire dec_jalr;
    wire [`REG_IDX_WIDTH-1:0] dec_jalr_rs1_idx;
    wire [`XLEN-1:0] dec_bjp_imm;

    fetch_mini_dec fmd_1(
        .instr_i            (instr),
        .dec_bjp_o          (dec_bjp),
        .dec_bxx_o          (dec_bxx),
        .dec_jal_o          (dec_jal),
        .dec_jalr_o         (dec_jalr),
        .dec_jalr_rs1_idx_o (dec_jalr_rs1_idx),
        .dec_bjp_imm_o      (dec_bjp_imm)
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  分支预测
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    // 1. jal and jalr 直接跳转
    // 2. bxx 向后预测为跳转
    wire prdt_taken = ((dec_jal | dec_jalr) | (dec_bxx & dec_bjp_imm[31]));
   
    wire jalr_rs1_x0 = (dec_jalr_rs1_idx == `REG_IDX_WIDTH'd0);
    wire jalr_rs1_x1 = (dec_jalr_rs1_idx == `REG_IDX_WIDTH'd1);

    reg [`XLEN-1:0] prdt_pc_add_op1;
    
    always @(*) begin
        if(dec_jalr) begin // jalr
            if(jalr_rs1_x0) 
                prdt_pc_add_op1 = `XLEN'd0;
            else if(jalr_rs1_x1)
                prdt_pc_add_op1 = `XLEN'd1;
            else
                prdt_pc_add_op1 = `XLEN'd2;
        end else begin // jal && bxx
            prdt_pc_add_op1 = pc_i;
        end
    end
    
    wire [`XLEN-1:0] prdt_pc_add_op2 = dec_bjp_imm;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  PC生成 产生下一周期的PC
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    
    reg [`PC_WIDTH-1:0] pc_add_op1;
    reg [`PC_WIDTH-1:0] pc_add_op2;
    
    always @(*) begin
        if(dec_bjp & prdt_taken) // 预测跳转
            pc_add_op1 = prdt_pc_add_op1;
        else
            pc_add_op1 = pc_i;
    end

    always @(*) begin
        if(dec_bjp & prdt_taken) // 预测跳转
            pc_add_op2 = prdt_pc_add_op2;
        else
            pc_add_op2 = `PC_WIDTH'd4;
    end

    // 下一条PC
    assign if_pc_next_o = pc_add_op1 + pc_add_op2;


endmodule
