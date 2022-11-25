
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// INSTRUCTION FETCH
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

// 1. 对取回的指令进行简单译码
// 2. 简单的分支预测
// 3. PC生成
// 4. 根据PC访问ITCM/BUI


module fetch(
    input [`PC_WIDTH-1:0] pc_i,
    output [`INSTR_WIDTH-1:0] fet_instr_o,
    output [`PC_WIDTH-1:0] fet_pc_o
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
        .instr_i(instr),
        .dec_bjp_o(dec_bjp),
        .dec_bxx_o(dec_bxx),
        .dec_jal_o(dec_jal),
        .dec_jalr_o(dec_jalr),
        .dec_jalr_rs1_idx_o(dec_jalr_rs1_idx),
        .dec_bjp_imm_o(dec_bjp_imm)
    );

    // 分支预测
    


endmodule