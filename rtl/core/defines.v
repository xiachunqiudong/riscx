

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


// ALU FUN
`define ALU_FUN_ADD     4'd0
`define ALU_FUN_SUB     4'd1
`define ALU_FUN_SUB_U   4'd2
`define ALU_FUN_SLL     4'd3
`define ALU_FUN_SRL     4'd4
`define ALU_FUN_SRA     4'd5
`define ALU_FUN_AND     4'd6
`define ALU_FUN_OR      4'd7
`define ALU_FUN_XOR     4'd8


