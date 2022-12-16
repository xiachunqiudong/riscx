
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// INSTRUCTION FETCH
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

// 1. 对取回的指令进行简单译码
// 2. 简单的分支预测
// 3. PC生成
// 4. 根据PC访问ITCM/BUI

`include "defines.v"

module if(
    // from PC REG
    input  [`PC_WIDTH-1:0]    pc_i,
    // ot PC REG
    output [`PC_WIDTH-1:0]    if_pc_next_o,

    // to IF_ID
    output                    if_prdt_taken_o,
    output [`INSTR_WIDTH-1:0] if_instr_o,
    output [`PC_WIDTH-1:0]    if_pc_o,
    output                    if_excp_misalign_o,
    output                    if_excp_bus_err_o
);

    assign if_pc_o    = pc_i;
    assign if_instr_o = instr;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 根据PC中取指令
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    // REQ CHANNEL
    wire                     if_req_valid;
    wire                     if_req_ready;
    wire  [`PC_WIDTH-1:0]    if_req_pc;
    // RESP CHANNEL
    wire                     if_resp_valid;
    wire                     if_resp_ready;
    wire                     if_resp_misalign;
    wire                     if_resp_bus_err;
    wire  [`INSTR_WIDTH-1:0] if_resp_instr;

    assign if_req_valid  = 1;
    assign if_req_pc     = pc_i;

    assign if_resp_ready = 1;
    
    fetch_if2icb fetch_if2icb_u(
        .if_req_valid_i  (if_req_valid),
        .if_req_ready_o  (if_req_ready),
        .if_req_pc_i     (if_req_pc),

        .if_resp_valid_o (if_resp_valid),
        .if_resp_ready_i (if_resp_ready),
        .if_resp_err_o   (if_resp_err),
        .if_resp_instr_o (if_resp_instr)
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 部分译码        
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    wire [`INSTR_WIDTH-1:0] instr = if_resp_instr;

    wire                      dec_bjp;
    wire                      dec_bxx;
    wire                      dec_jal;
    wire                      dec_jalr;
    wire [`REG_IDX_WIDTH-1:0] dec_jalr_rs1_idx;
    wire [`XLEN-1:0]          dec_bjp_imm;

    fetch_mini_dec mini_dec_u(
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
    wire   prdt_taken = ((dec_jal | dec_jalr) | (dec_bxx & dec_bjp_imm[31]));
    assign if_prdt_taken_o = prdt_taken;
   
    // X0直接返回0
    // X1用于函数调用返回 需要特殊优化
    wire jalr_rs1_x0 = (dec_jalr_rs1_idx == `REG_X0);
    wire jalr_rs1_x1 = (dec_jalr_rs1_idx == `REG_X1);
    // jalr rs1中的值
    wire [`XLEN-1:0] jalr_rs1_rdata;
    // TODO
    // 如果rs1与后续指令存在数据相关性 需要暂停流水线
    assign jalr_rs1_rdata = jalr_rs1_x0 ? `XLEN'b0
                          : jalr_rs1_x1 ? `XLEN'b0
                          : `XLEN'b0;

    wire [`XLEN-1:0] prdt_pc_add_op1;
    wire [`XLEN-1:0] prdt_pc_add_op2;
    
    assign prdt_pc_add_op1 = dec_jalr ? jalr_rs1_rdata : pc_i;
    assign prdt_pc_add_op2 = dec_bjp_imm;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  PC生成 产生下一周期的PC
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    wire [`PC_WIDTH-1:0] pc_next_add_op1;
    wire [`PC_WIDTH-1:0] pc_next_add_op2;
    
    assign pc_next_add_op1 = (dec_bjp & prdt_taken) ? prdt_pc_add_op1 : pc_i;
    assign pc_next_add_op2 = (dec_bjp & prdt_taken) ? prdt_pc_add_op2 : `PC_WIDTH'd4;

    // 下一条PC
    assign if_pc_next_o = pc_add_op1 + pc_add_op2;

endmodule
