

`define DISABLE 1'b0
`define ENABLE  1'b1

// REG FILE
`define REG_IDX_WIDTH 5
`define XLEN 32
`define REG_X0        5'd0
`define REG_X1        5'd1

`define BYTE_WIDTH 8

`define INSTR_WIDTH 32
`define PC_WIDTH 32

`define ITCM_ADDR_WIDTH 32
`define ITCM_DATA_WIDTH 32


// OPCODE
`define INSTR_ALI    7'b00_100_11
`define INSTR_AL     7'b01_100_11

`define INSTR_LD     7'b00_000_11
`define INSTR_ST     7'b01_000_11

`define INSTR_BXX    7'b11_000_11
`define INSTR_JAL    7'b11_011_11
`define INSTR_JALR   7'b11_001_11

`define INSTR_LUI    7'b01_101_11
`define INSTR_AUIPC  7'b00_101_11

`define INSTR_CSR    7'b11_100_11

// BRANCH
`define BEQ  3'b000
`define BNE  3'b001
`define BLT  3'b100
`define BGE  3'b101
`define BLTU 3'b110
`define BGEU 3'b111


// AL and ALI
`define AL_FUN_ADD_SUB 3'b000
// 逻辑左移
`define AL_FUN_SLL     3'b001
`define AL_FUN_SLT     3'b010
`define AL_FUN_SLTU    3'b011
`define AL_FUN_XOR     3'b100
// 右移
`define AL_FUN_SR      3'b101
`define AL_FUN_OR      3'b110
`define AL_FUN_AND     3'b111

