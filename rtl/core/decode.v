`include "defines.v"

// INSTRUCTION FETCH

module decode(
    // from if_id_reg
    input  [`INSTR_WIDTH-1:0] instr_i,
    input  [`PC_WIDTH-1:o]    pc_i,

    // to REG FILE
    output reg [`REG_IDX_WIDTH-1:0] dec_rs1_idx_o,
    output reg [`REG_IDX_WIDTH-1:0] dec_rs2_idx_o, 
    output reg                      dec_rs1_en_o, // 是否读rs1
    output reg                      dec_rs2_en_o, // 是否读rs2

    // from REG FILE
    input [`XLEN-1:0]               rs1_rdata_i,
    input [`XLEN-1:0]               rs2_rdata_i,
    
    // to ID_EX
    output reg [`REG_IDX_WIDTH-1:0] dec_rd_idx_o,
    output reg                      dec_rd_en_o,  // 是否写rd

    // to ALU UNIT
    output     [`PC_WIDTH-1:0] dec_pc_o,
    output reg [`XLEN-1:0]     dec_alu_op1_o,
    output reg [`XLEN-1:0]     dec_alu_op2_o,
    output reg [3:0]           dec_alu_fun_o,
    
    // to MEM UNIT
    output reg                 dec_mem_rena, // 读使能
    output reg                 dec_mem_wena  // 写使能

);


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  指令分解
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    wire [6:0] opcode = instr_i[6:0];
    wire [4:0] rd     = instr_i[11:7];
    wire [2:0] fun3   = instr_i[14:12];
    wire [4:0] rs1    = instr_i[19:15];
    wire [4:0] rs2    = instr_i[24:20];
    wire [6:0] fun7   = instr_i[31:25];

    assign dec_rs1_idx_o = rs1;
    assign dec_rs2_idx_o = rs2;
    assign dec_rd_idx_o  = rd;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  指令解析
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    reg [`XLEN-1:0]          dec_imm_o,
    
    // 所有立即数都是符号扩展的
    // rs1 rs2 rd 读写使能 && imm解析
    always @(*) begin
        case(opcode)
            `INSTR_I_TYPE: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {20{instr_i[31]}}, instr_i[31:20] };
            end
            `INSTR_R_TYPE: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = `XLEN'b0;               
            end
            `INSTR_SB_TYPE: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b1;
                dec_rd_en_o  = 1'b0;
                dec_imm_o = { {19{instr_i[31]}}, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0 };
            end
            `INSTR_JAL: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {11{instr_i[31]}}, instr_i[31],   instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
            end
            `INSTR_JALR: begin
                dec_rs1_en_o = 1'b1;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { {20{instr_i[31]}}, instr_i[31:20] };
            end
            `INSTR_LUI: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { instr_i[31:12], 12'b0 };
            end
            `INSTR_AUIPC: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b1;
                dec_imm_o = { instr_i[31:12], 12'b0 };
            end
            `INSTR_CSR: begin
                if(fun3[2]) begin // CSRI
                    dec_rs1_en_o = 1'b0;
                    dec_rs2_en_o = 1'b0;
                    dec_rd_en_o  = 1'b1;
                end esle if begin // CSR
                    dec_rs1_en_o = 1'b1;
                    dec_rs2_en_o = 1'b0;
                    dec_rd_en_o  = 1'b1;
                end
            end
            default: begin
                dec_rs1_en_o = 1'b0;
                dec_rs2_en_o = 1'b0;
                dec_rd_en_o  = 1'b0;
                dec_imm_o = `XLEN'b0;  
            end
        endcase
    end

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  ALU_FUN 解析
//  ALU_OP  解析
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    always @(*) begin
        case(opcode)
            `INSTR_I_TYPE: begin
                dec_alu_op1_o = rs1_rdata_i;
                dec_alu_op2_o = dec_imm_o;
                case(fun3)
                    3'b000: begin // ADDI
                        dec_alu_fun_o = `ALU_FUN_ADD;
                    end
                    3'b001: begin // SLLI
                        dec_alu_fun_o = `ALU_FUN_SLL;
                    end
                    3'b010: begin // SLTI
                        dec_alu_fun_o = `ALU_FUN_SUB;
                    end
                    3'b011: begin // SLTIU
                        dec_alu_fun_o = `ALU_FUN_SUB_U;
                    end
                    3'b100: begin // XORI
                        dec_alu_fun_o = `ALU_FUN_XOR;
                    end
                    3'b101: begin // SRLI or SRAI
                        dec_alu_fun_o = dec_imm_o[10] ? `ALU_FUN_SRA : `ALU_FUN_SRL;
                    end
                    3'b110: begin // ORI
                        dec_alu_fun_o = `ALU_FUN_OR;
                    end
                    3'b111: begin // ANDI
                        dec_alu_fun_o = `ALU_FUN_AND;
                    end
                    default: begin
                        dec_alu_fun_o = `ALU_FUN_ADD;
                    end
                endcase
            end
            `INSTR_R_TYPE: begin
                dec_alu_op1_o = rs1_rdata_i;
                dec_alu_op2_o = rs2_rdata_i;
                case(fun3)
                    3'b000: begin // ADD
                        dec_alu_fun_o = fun7[5] ? `ALU_FUN_SUB : `ALU_FUN_ADD;
                    end
                    3'b001: begin // SLL
                        dec_alu_fun_o = `ALU_FUN_SLL;
                    end
                    3'b010: begin // SLT
                        dec_alu_fun_o = `ALU_FUN_SUB;
                    end
                    3'b011: begin // SLTU
                        dec_alu_fun_o = `ALU_FUN_SUB_U;
                    end
                    3'b100: begin // XOR
                        dec_alu_fun_o = `ALU_FUN_XOR;
                    end
                    3'b101: begin // SRL or SRA
                        dec_alu_fun_o = fun7[5] ? `ALU_FUN_SRA : `ALU_FUN_SRL;
                    end
                    3'b110: begin // OR
                        dec_alu_fun_o = `ALU_FUN_OR;
                    end
                    3'b111: begin // AND
                        dec_alu_fun_o = `ALU_FUN_AND;
                    end
                    default: begin 
                        dec_alu_fun_o = `ALU_FUN_ADD;
                    end
                endcase           
            end
            `INSTR_SB_TYPE: begin
                dec_alu_op1_o = rs1_rdata_i;
                dec_alu_op2_o = rs2_rdata_i;
                case(fun3)
                3'b000: begin // BEQ
                    dec_alu_fun_o = `ALU_FUN_XOR;
                end
                3'b001: begin // BNE
                    dec_alu_fun_o = `ALU_FUN_XOR;
                end
                3'b100: begin // BLT
                    dec_alu_fun_o = `ALU_FUN_SUB;
                end
                3'b101: begin // BGE
                    dec_alu_fun_o = `ALU_FUN_SUB;
                end
                3'b110: begin
                    dec_alu_fun_o = `ALU_FUN_SUB_U;
                end
                3'b111: begin
                    dec_alu_fun_o = `ALU_FUN_SUB_U;
                end
                endcase
            end
            `INSTR_JAL: begin // 取指阶段就需要知道
                dec_alu_op1_o = pc_i;
                dec_alu_op2_o = dec_imm_o;
                dec_alu_fun_o = `ALU_FUN_ADD;
            end
            `INSTR_JALR: begin // 取指阶段就需要知道
                dec_alu_op1_o = rs1_rdata_i;
                dec_alu_op2_o = dec_imm_o;
                dec_alu_fun_o = `ALU_FUN_ADD;
            end
            `INSTR_LUI: begin
                dec_alu_op1_o = `XLEN'b0;
                dec_alu_op2_o = dec_imm_o;
                dec_alu_fun_o = `ALU_FUN_ADD;
            end
            `INSTR_AUIPC: begin
                dec_alu_op1_o = pc_i;
                dec_alu_op2_o = dec_imm_o;
                dec_alu_fun_o = `ALU_FUN_ADD;
            end
            `INSTR_CSR: begin
                if(fun3[2]) begin // CSRI
                     
                end else begin // CSR
                
                end
                case(fun3)
                    3'b001: begin // CSRRW
                    end
                    3'b010: begin // CSRRS
                    end
                    3'b011: begin // CSRRC
                    end 
                    3'b101: begin // CSRRWI
                    end
                    3'b110: begin // CSRRSI
                    end
                    3'b111: begin // CSRRCI
                    end
                endcase
            end
            default: begin
                dec_alu_op1_o = `XLEN'b0;
                dec_alu_op2_o = `XLEN'b0;
                dec_alu_fun_o = `ALU_FUN_ADD;
            end
        endcase
    end

endmodule