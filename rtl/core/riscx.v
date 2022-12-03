`include "defines.v"

module riscx(
    input clk,
    input rst_n
);
    // from if to pc_reg
    wire [`PC_WIDTH-1:0]    if_pc_next;
    // from pc_reg to if
    wire [`PC_WIDTH-1:0]    pr_pc;

    // from if to if_id
    wire [`PC_WIDTH-1:0]    if_pc;
    wire [`INSTR_WIDTH-1:0] if_instr;

    // from if_if to id
    wire [`PC_WIDTH-1:0]    if_id_pc;
    wire [`INSTR_WIDTH-1:0] if_id_instr;

    // from id to regfile
    wire                      dec_rs1_en;
    wire                      dec_rs2_en;
    wire [`REG_IDX_WIDTH-1:0] dec_rs1_idx;
    wire [`REG_IDX_WIDTH-1:0] dec_rs2_idx;
    
    // from regfile to id
    wire [`XLEN-1:0]          rf_rs1_rdata;
    wire [`XLEN-1:0]          rf_rs2_rdata;

    // from id to id_ex
    wire [`PC_WIDTH-1:0]      dec_pc;
    wire [`INSTR_WIDTH-1:0]   dec_instr;
    
    wire [`XLEN-1:0]          dec_alu_op1;
    wire [`XLEN-1:0]          dec_alu_op2;
    wire [3:0]                dec_alu_fun;

    wire [`REG_IDX_WIDTH-1:0] dec_rd_idx;
    wire                      dec_rd_en;

    // from id_ex to ex
    wire [`PC_WIDTH-1:0]      id_ex_pc;
    wire [`INSTR_WIDTH-1:0]   id_ex_instr;
    
    wire [`XLEN-1:0]          id_ex_alu_op1;
    wire [`XLEN-1:0]          id_ex_alu_op2;
    wire [3:0]                id_ex_alu_fun;

    wire [`REG_IDX_WIDTH-1:0] id_ex_rd_idx;
    wire                      id_ex_rd_en;   


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 取指阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    pc_reg pc_reg_u(
        .clk       (clk),
        .rst_n     (rst_n),
        .stall_i   (1'b0),
        
        .pc_next_i (if_pc_next),
        .pc_o      (pr_pc)
    );

    instr_fetch if_u(
        // PC REG
        .pc_i            (pr_pc),
        .if_pc_next_o    (if_pc_next),
        
        // IF_ID
        .if_instr_o      (if_instr),
        .if_pc_o         (if_pc)
    );

    
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 译码阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    if_id if_id_u(
        .clk           (clk),
        .rst_n         (rst_n),
        .stall_i       (1'b0),

        .if_pc_i       (if_pc),
        .if_instr_i    (if_instr),

        .if_id_pc_o    (if_id_pc),
        .if_id_instr_o (if_id_instr)
    );

    // ID 
    decode id_u(
        .pc_i          (if_id_pc),
        .instr_i       (if_id_instr),
        
        // REG FILE
        .dec_rs1_idx_o (dec_rs1_idx),
        .dec_rs2_idx_o (dec_rs2_idx),
        .dec_rs1_en_o  (dec_rs1_en),
        .dec_rs2_en_o  (dec_rs2_en),
        .rs1_rdata_i   (rf_rs1_rdata),
        .rs2_rdata_i   (rf_rs1_rdata),

        // ID_EX
        .dec_pc_o      (dec_pc),
        .dec_instr_o   (dec_instr),

        .dec_alu_op1_o (dec_alu_op1),
        .dec_alu_op2_o (dec_alu_op2),
        .dec_alu_fun_o (dec_alu_fun),

        .dec_rd_idx_o  (dec_rd_idx),
        .dec_rd_en_o   (dec_rd_en)
    );
    
    // REG FILE
    regfile regfile_u(
        .clk            (clk),
        .rst_n          (rst_n),

        .rd_en_i        (),
        .rd_idx_i       (),
        .rd_wdata_i     (),

        .rs1_en_i       (dec_rs1_en),
        .rs2_en_i       (dec_rs2_en),
        .rs1_idx_i      (dec_rs1_idx),
        .rs2_idx_i      (dec_rs2_idx),

        .rs1_rdata_o    (rf_rs1_rdata),
        .rs2_rdata_o    (rf_rs2_rdata),
        
        .rs1_x1_rdata_o ()
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 执行阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    id_ex id_ex_u(
        // from id
        .clk             (clk),
        .rst_n           (rst_n),

        .stall_i         (1'b0),
        
        .dec_pc_i        (dec_pc),
        .dec_instr_i     (dec_instr),
        
        .dec_alu_op1_i   (dec_alu_op1),
        .dec_alu_op2_i   (dec_alu_op2),
        .dec_alu_fun_i   (dec_alu_fun),
        
        .dec_rd_idx_i    (dec_rd_idx),
        .dec_rd_en_i     (dec_rd_en),

        // to ex
        .id_ex_pc_o      (id_ex_pc),
        .id_ex_instr_o   (id_ex_instr),
        
        .id_ex_alu_op1_o (id_ex_alu_op1),
        .id_ex_alu_op2_o (id_ex_alu_op2),
        .id_ex_alu_fun_o (id_ex_alu_fun),

        .id_ex_rd_idx_o  (id_ex_rd_idx),
        .id_ex_rd_en_o   (id_ex_rd_en)
    );

endmodule