`include "defines.v"

// INSTRUCTION FETCH
// 1. 译码出 rs1_idx, rs2_idx, rd_idx, opcode, fun3, fun7
// 2. 根据opcode, fun3, fun7 得出 rs1_en, rs2_en, rd_en, imm
// 3. 从寄存器文件中取出 源操作数
//

module id(
    // from if_id_reg
    input      [`PC_WIDTH-1:0]      pc_i,
    input      [`INSTR_WIDTH-1:0]   instr_i,

    // 读取源操作数
    // to REG FILE
    output reg [`REG_IDX_WIDTH-1:0] id_rs1_idx_o,
    output reg [`REG_IDX_WIDTH-1:0] id_rs2_idx_o, 
    output reg                      id_rs1_en_o, // 是否读rs1
    output reg                      id_rs2_en_o, // 是否读rs2
    // from REG FILE
    input      [`XLEN-1:0]          rs1_rdata_i,
    input      [`XLEN-1:0]          rs2_rdata_i,

    // from EX 前递
    input [`REG_IDX_WIDTH-1:0]      ex_rd_idx_i,  
    input                           ex_rd_en_i,   
    input [`XLEN-1:0]               ex_rd_wdata_i,

    // from MEM 前递
    // 1. MEM_ex_rd_wdata 
    input [`REG_IDX_WIDTH-1:0]      ex_mem_ex_rd_idx_i,
    input                           ex_mem_ex_rd_en_i,
    input [`XLEN-1:0]               ex_mem_ex_rd_wdata_i,
    // 2. MEM_mem_rd_wdata
    input [`REG_IDX_WIDTH-1:0]      mem_rd_idx_i,
    input                           mem_rd_en_i,
    input [`XLEN-1:0]               mem_rd_wdata_i,
    
    // to ID_EX
    output     [`XLEN-1:0]          id_rs1_rdata_o,
    output     [`XLEN-1:0]          id_rs2_rdata_o,
    output reg [`XLEN-1:0]          id_imm_o,

    output reg [`REG_IDX_WIDTH-1:0] id_rd_idx_o,
    output reg                      id_rd_en_o,  // 是否写rd

    output                          id_excp_ilegl_instr_o,
    output                          id_excp_ecall_o,
    output                          id_excp_ebreak_o,
    output                          id_excp_mret_o
);


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  前递操作
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

// 优先级: 
// 1. ex_rd_wdata
// 2. mem_rd_wdata
// 3. reg_file

    wire rs1_not_x0 = (id_rs1_idx_o != `REG_X0);
    wire rs2_not_x0 = (id_rs2_idx_o != `REG_X0);
    
    // ex阶段写rd & 译码阶段读rs1 & rs1 != x0 & rs1 == rd
    wire rs1_ex_fwd     = ((ex_rd_en_i        & id_rs1_en_o & rs1_not_x0) & (id_rs1_idx_o == ex_rd_idx_i));
    wire rs1_mem_ex_fwd = ((ex_mem_ex_rd_en_i & id_rs1_en_o & rs1_not_x0) & (id_rs1_idx_o == ex_mem_ex_rd_idx_i));
    wire rs1_mem_fwd    = ((mem_rd_en_i       & id_rs1_en_o & rs1_not_x0) & (id_rs1_idx_o == mem_rd_idx_i));

    assign id_rs1_rdata_o = rs1_ex_fwd     ? ex_rd_wdata_i 
                          : rs1_mem_ex_fwd ? ex_mem_ex_rd_wdata_i
                          : rs1_mem_fwd    ? mem_rd_wdata_i
                          : rs1_rdata_i;
    
    // ex阶段写rd & 译码阶段读rs2 & rs2 != x0 & rs2 == rd
    wire rs2_ex_fwd     = ((ex_rd_en_i        & id_rs2_en_o & rs2_not_x0) & (id_rs2_idx_o == ex_rd_idx_i));
    wire rs2_mem_ex_fwd = ((ex_mem_ex_rd_en_i & id_rs2_en_o & rs2_not_x0) & (id_rs2_idx_o == ex_mem_ex_rd_idx_i));
    wire rs2_mem_fwd    = ((mem_rd_en_i       & id_rs2_en_o & rs2_not_x0) & (id_rs2_idx_o == mem_rd_idx_i));

    assign id_rs2_rdata_o = rs2_ex_fwd     ? ex_rd_wdata_i
                          : rs2_mem_ex_fwd ? ex_mem_ex_rd_wdata_i
                          : rs2_mem_fwd    ? mem_rd_wdata_i
                          : rs2_rdata_i;
    

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  指令分解
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire [6:0] opcode = instr_i[6:0];
    wire [4:0] rd     = instr_i[11:7];
    wire [2:0] fun3   = instr_i[14:12];
    wire [4:0] rs1    = instr_i[19:15];
    wire [4:0] rs2    = instr_i[24:20];
    wire [6:0] fun7   = instr_i[31:25];

    assign id_rs1_idx_o = rs1;
    assign id_rs2_idx_o = rs2;
    assign id_rd_idx_o  = rd;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  译码阶段异常解析
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    assign id_excp_ilegl_instr_o = 1'b0;
    assign id_excp_ecall_o       = rv32_ecall;
    assign id_excp_ebreak_o      = rv32_ebreak;
    assign id_excp_mret_o        = rv32_mret;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// RV32I译码部分
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    // OPCODE
    wire rv32_op_imm = (opcode == 7'b00_100_11);
    wire rv32_op     = (opcode == 7'b01_100_11);
    wire rv32_branch = (opcode == 7'b11_000_11);
    wire rv32_jal    = (opcode == 7'b11_011_11);
    wire rv32_jalr   = (opcode == 7'b11_001_11);
    wire rv32_load   = (opcode == 7'b00_000_11);
    wire rv32_store  = (opcode == 7'b01_000_11);
    wire rv32_lui    = (opcode == 7'b01_101_11);
    wire rv32_auipc  = (opcode == 7'b00_101_11);
    wire rv32_system = (opcode == 7'b11_100_11);

    // ALU INSTRUCTIONS
    // 1.reg-imm
    wire rv32_addi  = rv32_op_imm & (fun3 == 3'b000);
    wire rv32_slli  = rv32_op_imm & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv32_slti  = rv32_op_imm & (fun3 == 3'b010);
    wire rv32_sltui = rv32_op_imm & (fun3 == 3'b011);
    wire rv32_xori  = rv32_op_imm & (fun3 == 3'b100);
    wire rv32_srli  = rv32_op_imm & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv32_srai  = rv32_op_imm & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv32_ori   = rv32_op_imm & (fun3 == 3'b110);
    wire rv32_andi  = rv32_op_imm & (fun3 == 3'b111);
    // 2.reg-reg
    wire rv32_add  = rv32_op & (fun3 == 3'b000) & (fun7 == 7'b00_000_00);
    wire rv32_sub  = rv32_op & (fun3 == 3'b000) & (fun7 == 7'b01_000_00);
    wire rv32_sll  = rv32_op & (fun3 == 3'b001) & (fun7 == 7'b00_000_00);
    wire rv32_slt  = rv32_op & (fun3 == 3'b010) & (fun7 == 7'b00_000_00);
    wire rv32_sltu = rv32_op & (fun3 == 3'b011) & (fun7 == 7'b00_000_00);
    wire rv32_xor  = rv32_op & (fun3 == 3'b100) & (fun7 == 7'b00_000_00);
    wire rv32_srl  = rv32_op & (fun3 == 3'b101) & (fun7 == 7'b00_000_00);
    wire rv32_sra  = rv32_op & (fun3 == 3'b101) & (fun7 == 7'b01_000_00);
    wire rv32_or   = rv32_op & (fun3 == 3'b110) & (fun7 == 7'b00_000_00);
    wire rv32_and  = rv32_op & (fun3 == 3'b111) & (fun7 == 7'b00_000_00);

    // BRANCH INSTRUCTIONS
    wire rv32_beq  = rv32_branch & (fun3 == 3'000);
    wire rv32_bne  = rv32_branch & (fun3 == 3'001);
    wire rv32_blt  = rv32_branch & (fun3 == 3'100);
    wire rv32_bgt  = rv32_branch & (fun3 == 3'101);
    wire rv32_bltu = rv32_branch & (fun3 == 3'110);
    wire rv32_bgtu = rv32_branch & (fun3 == 3'111);

    // LOAD INSTRUCTIONS
    wire rv32_lb  = rv32_load & (fun3 == 3'b000);
    wire rv32_lbu = rv32_load & (fun3 == 3'b100);
    wire rv32_lh  = rv32_load & (fun3 == 3'b001);
    wire rv32_lhu = rv32_load & (fun3 == 3'b101);
    wire rv32_lw  = rv32_load & (fun3 == 3'b010);

    // STORE INSTRUCTIONS
    wire rv32_sb = rv32_store & (fun3 == 3'b000);
    wire rv32_sh = rv32_store & (fun3 == 3'b001);
    wire rv32_sw = rv32_store & (fun3 == 3'b010);

    // SYSTEM INSTRUCTIONS
    wire rv32_ecall  = rv32_system & (fun3 == 3'b000) & (instr_i[31:20] == 12'b0000_0000_0000);
    wire rv32_ebreak = rv32_system & (fun3 == 3'b000) & (instr_i[31:20] == 12'b0000_0000_0001);
    wire rv32_mret   = rv32_system & (fun3 == 3'b000) & (instr_i[31:20] == 12'b0011_0000_0010);

    // CSR INSTRUCTIONS
    wire rv32_csrrw  = rv32_system & (fun3 == 3'b001);
    wire rv32_csrrs  = rv32_system & (fun3 == 3'b010);
    wire rv32_csrrc  = rv32_system & (fun3 == 3'b011);
    wire rv32_csrrwi = rv32_system & (fun3 == 3'b101);
    wire rv32_csrrsi = rv32_system & (fun3 == 3'b110);
    wire rv32_csrrci = rv32_system & (fun3 == 3'b111);

    assign id_rs1_en_o = rv32_need_rs1;
    assign id_rs2_en_o = rv32_need_rs2;
    assign id_imm_o    = rv32_imm;


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  rs1_en rs2_en rd_en imm
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    // RV32I不需要rs1的有:
    // 1. lui/auipc
    // 2. jal
    // 3. csrrwi/csrrsi/csrrci
    // 4. ecall/ebreak
    // 5. fence/fence_i
    wire rv32_need_rs1 = (~rv32_lui) & (~rv32_auipc) & (~jal)
                       & (~csrrwi)   & (~csrrsi)     & (~csrrci)
                       & (~ecall)    & (~ebreak)

    // RV32I需要rs2的有
    // 1. rv32_op
    // 2. branch
    // 3. store
    wire rv32_need_rs2 = rv32_op & rv32_branch & rv32_store;

    // RV32I不需要rd的有
    // 1. ecall/ebreak
    // 2. fence/fence_i
    // 3. branch
    // 4. store
    wire rv32_need_rd = (~rv32_ecall) & (~rv32_ebreak) & (~rv32_branch) & (~rv32_store);  


    // imm解析
    wire [`XLEN-1:0] rv32_i_imm = { {20{instr_i[31]}}, instr_i[31:20] };
    wire [`XLEN-1:0] rv32_s_imm = { {20{instr_i[31]}}, instr_i[31:25], instr_i[11:7 ]}; 
    wire [`XLEN-1:0] rv32_b_imm = { {19{instr_i[31]}}, instr_i[31],    instr_i[7],     instr_i[30:25], instr_i[11:8 ], 1'b0 };
    wire [`XLEN-1:0] rv32_j_imm = { {11{instr_i[31]}}, instr_i[31],    instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
    wire [`XLEN-1:0] rv32_u_imm = { instr_i[31:12],    12'b0 };

    // imm选择
    wire rv32_imm_sel_i = rv32_op_imm | rv32_load | rv32_jalr;
    wire rv32_imm_sel_s = rv32_store;
    wire rv32_imm_sel_b = rv32_branch;
    wire rv32_imm_sel_j = rv32_jal;
    wire rv32_imm_sel_u = rv32_lui & rv32_auipc;

    wire [`XLEN-1:0] rv32_imm = ({`XLEN{rv32_imm_sel_i}} & rv32_i_imm)
                              | ({`XLEN{rv32_imm_sel_s}} & rv32_s_imm)
                              | ({`XLEN{rv32_imm_sel_b}} & rv32_b_imm)
                              | ({`XLEN{rv32_imm_sel_j}} & rv32_j_imm)
                              | ({`XLEN{rv32_imm_sel_u}} & rv32_u_imm);

    wire rv32_need_imm = rv32_imm_sel_i | rv32_imm_sel_s | rv32_imm_sel_b | rv32_imm_sel_j | rv32_imm_sel_u;

endmodule