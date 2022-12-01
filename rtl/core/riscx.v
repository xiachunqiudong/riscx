`include "defines.v"

module riscx(
    input clk,
    input rst_n
);

    wire [`PC_WIDTH-1:0]    if_pc_next;
    wire [`PC_WIDTH-1:0]    pr_pc;

    // from if to if_id
    wire [`PC_WIDTH-1:0]    if_pc;
    wire [`INSTR_WIDTH-1:0] if_instr;

    // from if_if to id
    wire [`PC_WIDTH-1:0]    if_id_pc;
    wire [`INSTR_WIDTH-1:0] if_id_instr;

    // from id to regfile


    // from id to id_ex
    
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 取指阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    pc_reg pru(
        .clk       (clk),
        .rst_n     (rst_n),
        .stall_i   (1'b0),
        
        .pc_next_i (if_pc_next),
        .pc_o      (pr_pc)
    );

    instr_fetch ifu(
        // PC REG
        .pc_i            (pr_pc),
        .if_pc_next_o    (if_pc_next),
        
        // MEM BUS
        .if_req_valid_o  (),
        .if_req_ready_i  (),
        .if_req_pc_o     (),

        .if_resp_valid_i (),
        .if_resp_ready_o (),
        .if_resp_err_i   (),
        .if_resp_instr_i (),

        // IF_ID
        .if_instr_o      (if_instr),
        .if_pc_o         (if_pc)
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 译码阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    if_id if_idu(
        .clk           (clk),
        .rst_n         (rst_n),
        .stall_i       (1'b0),

        .if_pc_i       (if_pc),
        .if_instr_i    (if_instr),

        .if_id_pc_o    (if_id_pc),
        .if_id_instr_o (if_id_instr)
    );

    // ID
    
    decode idu(
        .pc_i(if_id_pc),
        .instr_i(if_id_instr),
        
        // REG FILE
        .dec_rs1_idx_o(),
        .dec_rs2_idx_o(),
        .dec_rs1_en_o(),
        .dec_rs2_en_o(),
        .rs1_rdata_i(),
        .rs2_rdata_i(),

        // ID_EX
        .dec_rd_idx_o(),
        .dec_rd_en_o(),

        .dec_pc_o(),
        .dec_instr_o(),

        .dec_alu_op1_o(),
        .dec_alu_op2_o(),
        .dec_alu_fun_o()
    );
    // REG FILE


endmodule