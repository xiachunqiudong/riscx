
// 取指单元 简单译码
module fetch_mini_dec(
    input [`INSTR_WIDTH-1:0]    instr_i,
    output                      dec_bjp_o, // branch and jump
    output                      dec_bxx_o,
    output                      dec_jal_o,
    output                      dec_jalr_o,
    output [`REG_IDX_WIDTH-1:0] dec_jalr_rs1_idx_o,
    output [`XLEN-1:0]          dec_bjp_imm_o
);

    wire [6:0] opcode = instr_i[6:0];
   
    assign dec_bxx_o  = (opcode == 7'b1100011);
    assign dec_jal_o  = (opcode == 7'b1101111);
    assign dec_jalr_o = (opcode == 7'b1100111);
    
    assign dec_bjp_o = dec_bxx_o | dec_jal_o | dec_jal_o;

    assign dec_jalr_rs1_idx_o = instr_i[19:15];

    // imm 符号扩展到XLEN位
    // bxx和jal需要将立即数左移一位
    wire [`XLEN-1:0] bjp_imm_bxx  = { {19{instr_i[31]}}, instr_i[31],   instr_i[7],     instr_i[30:25], instr_i[11:8],  1'b0 };
    wire [`XLEN-1:0] bjp_imm_jal  = { {11{instr_i[31]}}, instr_i[31],   instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
    wire [`XLEN-1:0] bjp_imm_jalr = { {20{instr_i[31]}}, instr_i[31:20]};

    // 并行多路选择器
    assign dec_bjp_imm_o = ({`XLEN{dec_bxx_o}}  & bjp_imm_bxx) 
                         | ({`XLEN{dec_jal_o}}  & bjp_imm_jal)
                         | ({`XLEN{dec_jalr_o}} & bjp_imm_jalr);

endmodule