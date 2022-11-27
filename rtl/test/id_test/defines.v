
// REGS
`define REG_IDX_WIDTH 5
`define XLEN          32
`define REG_X0        5'b0 

// INSTR
`define INSTR_WIDTH 32
`define PC_WIDTH   32


// ITCM
`define ITCM_ADDR_WIDTH 32
`define ITCM_DATA_WIDTH 32


// OPCODE
`define INSTR_I_TYPE 7'b00_100_11
`define INSTR_R_TYPE 7'b01_100_11
`define INSTR_SB_TYPE 7'b11_000_11
`define INSTR_S_TYPE 7'b01_000_11
`define INSTR_JAL    7'b11_011_11
`define INSTR_JALR   7'b11_001_11
`define INSTR_LUI    7'b01_101_11
`define INSTR_AUIPC  7'b00_101_11

// ALU FUN
`define ALU_FUN_ADD