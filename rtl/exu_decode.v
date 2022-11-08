module exu_decode(
    input wire  [31:0] instr_i,
    input wire  [31:0] pc_i,

    output wire        dec_rs1x0_o,
    output wire        dec_rs2x0_o,
    output wire        dec_rs1en_o,
    output wire        dec_rs2en_o,
    output wire        dec_rdwen_o,
    output wire [4:0]  dec_rs1_idx_o,
    output wire [4:0]  dec_rs2_idx_o,
    output wire [4:0]  dec_rd_idx_o

);

    wire [31:0] rv32_instr = instr_i;
    wire [15:0] rv16_instr = instr_i[15:0];

    wire [6:0] opcode = instr_i[6:0];

    // opcode[1:0]
    wire opcode_1_0_00 = (opcode[1:0] == 2'b00);
    wire opcode_1_0_01 = (opcode[1:0] == 2'b01);
    wire opcode_1_0_10 = (opcode[1:0] == 2'b10);
    wire opcode_1_0_11 = (opcode[1:0] == 2'b11);

    // 是否为32位指令
    wire rv32 = (~(opcode[4:2] == 3'b111)) & opcode_1_0_11;
    // 取出32位编码字段
    wire [4:0] rv32_rd    = rv32_instr[11:7];
    wire [2:0] rv32_fun3  = rv32_instr[14:12];
    wire [4:0] rv32_rs1   = rv32_instr[19:15];
    wire [4:0] rv32_rs2   = rv32_instr[24:20];
    wire [6:0] rv32_func7 = rv32_instr[31:25];

    // opcode[4:2]
    wire opcode_4_2_000 = (opcode[4:2] == 3'b000);
    wire opcode_4_2_001 = (opcode[4:2] == 3'b001);
    wire opcode_4_2_010 = (opcode[4:2] == 3'b010);
    wire opcode_4_2_011 = (opcode[4:2] == 3'b011);
    wire opcode_4_2_100 = (opcode[4:2] == 3'b100);
    wire opcode_4_2_101 = (opcode[4:2] == 3'b101);
    wire opcode_4_2_110 = (opcode[4:2] == 3'b110);
    wire opcode_4_2_111 = (opcode[4:2] == 3'b111);

    // opcode[6:5]
    wire opcode_6_5_00 = (opcode[6:5] == 2'b00);
    wire opcode_6_5_01 = (opcode[6:5] == 2'b01);
    wire opcode_6_5_10 = (opcode[6:5] == 2'b10);
    wire opcode_6_5_11 = (opcode[6:5] == 2'b11);

endmodule