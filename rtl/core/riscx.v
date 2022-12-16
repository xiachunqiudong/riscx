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
    wire                    if_prdt_taken;
    wire                    if_excp_misalign;
    wire                    if_excp_bus_err;

    // from if_id to id
    wire [`PC_WIDTH-1:0]    if_id_pc;
    wire [`INSTR_WIDTH-1:0] if_id_instr;
    wire                    if_id_prdt_taken;
    wire                    if_id_if_excp_misalign;
    wire                    if_id_if_excp_bus_err;


    // from id to regfile
    wire                      id_rs1_en;
    wire                      id_rs2_en;
    wire [`REG_IDX_WIDTH-1:0] id_rs1_idx;
    wire [`REG_IDX_WIDTH-1:0] id_rs2_idx;
    
    // from regfile to id
    wire [`XLEN-1:0]          rf_rs1_rdata;
    wire [`XLEN-1:0]          rf_rs2_rdata;

    // from id to id_ex
    wire [`XLEN-1:0]          id_rs1_rdata;
    wire [`XLEN-1:0]          id_rs2_rdata;
    wire [`XLEN-1:0]          id_imm;

    wire [`REG_IDX_WIDTH-1:0] id_rd_idx;
    wire                      id_rd_en;

    wire                      id_excp_ilegl_instr;
    wire                      id_excp_ecall;
    wire                      id_excp_ebreak;
    wire                      id_excp_mret;

    // from id_ex to ex
    wire [`PC_WIDTH-1:0]      id_ex_pc;
    wire [`INSTR_WIDTH-1:0]   id_ex_instr;
    wire                      id_ex_prdt_taken;
    
    wire [`XLEN-1:0]          id_ex_rs1_rdata;
    wire [`XLEN-1:0]          id_ex_rs2_rdata;
    wire [`XLEN-1:0]          id_ex_imm;

    wire [`REG_IDX_WIDTH-1:0] id_ex_rd_idx;
    wire                      id_ex_rd_en; 

    wire                      id_ex_if_excp_misalign;
    wire                      id_ex_if_excp_bus_err;
    wire                      id_ex_id_excp_ilegl_instr;
    wire                      id_ex_id_excp_ecall;
    wire                      id_ex_id_excp_ebreak;
    wire                      id_ex_id_excp_mret;
    
    // from ex to pc_reg
    wire                      ex_pipe_flush;
    wire [`PC_WIDTH-1:0]      ex_pipe_flush_pc;

    // from ex to ex_mem
    wire [`XLEN-1:0]          ex_alu_res;
    wire [`REG_IDX_WIDTH-1:0] ex_rd_idx;
    wire                      ex_rd_en;
    wire [`XLEN-1:0]          ex_rd_wdata;

    // from ex_mem
    wire [`PC_WIDTH-1:0]      ex_mem_pc;
    wire [`INSTR_WIDTH-1:0]   ex_mem_instr;
    wire [`XLEN-1:0]          ex_mem_rs2_rdata;
    wire [`XLEN-1:0]          ex_mem_alu_res;
    wire [`REG_IDX_WIDTH-1:0] ex_mem_ex_rd_idx;
    wire                      ex_mem_ex_rd_en;
    wire [`XLEN-1:0]          ex_mem_ex_rd_wdata;
    wire                      ex_mem_if_excp_misalign;
    wire                      ex_mem_if_excp_bus_err;
    wire                      ex_mem_id_excp_ilegl_instr;
    wire                      ex_mem_id_excp_ecall;
    wire                      ex_mem_id_excp_ebreak;
    wire                      ex_mem_id_excp_mret;

    // from mem
    wire [`REG_IDX_WIDTH-1:0] mem_rd_idx;
    wire                      mem_rd_en;
    wire [`XLEN-1:0]          mem_rd_wdata;

    // from mem_wb
    wire [`PC_WIDTH-1:0]      mem_wb_pc;
    wire [`REG_IDX_WIDTH-1:0] mem_wb_ex_rd_idx;
    wire                      mem_wb_ex_rd_en;      
    wire [`XLEN-1:0]          mem_wb_ex_rd_wdata;

    wire [`REG_IDX_WIDTH-1:0] mem_wb_mem_rd_idx;
    wire                      mem_wb_mem_rd_en;      
    wire [`XLEN-1:0]          mem_wb_mem_rd_wdata;

    wire                      mem_wb_if_excp_misalign;
    wire                      mem_wb_if_excp_bus_err;
    wire                      mem_wb_id_excp_ilegl_instr;
    wire                      mem_wb_id_excp_ecall;
    wire                      mem_wb_id_excp_ebreak;
    wire                      mem_wb_id_excp_mret;

    // from wb
    wire [`REG_IDX_WIDTH-1:0] wb_rd_idx;
    wire                      wb_rd_en;
    wire [`XLEN-1:0]          wb_rd_wdata;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 取指阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    pc_reg pc_reg_u(
        .clk             (clk),
        .rst_n           (rst_n),
        
        .stall_i         (1'b0),
        
        .pipe_flush_i    (ex_pipe_flush),
        .pipe_flush_pc_i (ex_pipe_flush_pc),

        .pc_next_i       (if_pc_next),
        .pc_o            (pr_pc)
    );

    if if_u(
        // PC REG
        .pc_i               (pr_pc),
        .if_pc_next_o       (if_pc_next),
        
        // IF_ID
        .if_prdt_taken_o    (if_prdt_taken),
        .if_instr_o         (if_instr),
        .if_pc_o            (if_pc),
        .if_excp_misalign_o (if_excp_misalign),
        .if_excp_bus_err_o  (if_excp_bus_err)
    );

    
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 译码阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    if_id if_id_u(
        .clk                (clk),
        .rst_n              (rst_n),
        .stall_i            (1'b0),
        // from if
        .if_pc_i            (if_pc),
        .if_instr_i         (if_instr),
        .if_prdt_taken_i    (if_prdt_taken),
        .if_excp_misalign_i (if_excp_misalign),
        .if_excp_bus_err_i  (if_excp_bus_err),
        // to id
        .if_id_pc_o               (if_id_pc),
        .if_id_instr_o            (if_id_instr),
        .if_id_prdt_taken_o       (if_id_prdt_taken),
        .if_id_if_excp_misalign_o (if_id_if_excp_misalign),
        .if_id_if_excp_bus_err_o  (if_id_if_excp_bus_err)
    );

    // ID 
    id id_u( 
        .pc_i                 (if_id_pc),
        .instr_i              (if_id_instr),
        
        // REG FILE
        .id_rs1_idx_o         (id_rs1_idx),
        .id_rs2_idx_o         (id_rs2_idx),
        .id_rs1_en_o          (id_rs1_en),
        .id_rs2_en_o          (id_rs2_en),
        .rs1_rdata_i          (rf_rs1_rdata),
        .rs2_rdata_i          (rf_rs2_rdata),

        // ex_rd_wdata forward from ex
        .ex_rd_idx_i          (ex_rd_idx),
        .ex_rd_en_i           (ex_rd_en),
        .ex_rd_wdata_i        (ex_rd_wdata),

        // ex_rd_wdata forword from mem
        .ex_mem_ex_rd_idx_i   (ex_mem_ex_rd_idx),
        .ex_mem_ex_rd_en_i    (ex_mem_ex_rd_en),
        .ex_mem_ex_rd_wdata_i (ex_mem_ex_rd_wdata),
        // mem_rd_wdata forword from mem
        .mem_rd_idx_i         (mem_rd_idx),
        .mem_rd_en_i          (mem_rd_en),
        .mem_rd_wdata_i       (mem_rd_wdata),

        // ID_EX
        // 操作数
        .id_rs1_rdata_o       (id_rs1_rdata),
        .id_rs2_rdata_o       (id_rs2_rdata),
        .id_imm_o             (id_imm),
        // 写回
        .id_rd_idx_o          (id_rd_idx),
        .id_rd_en_o           (id_rd_en),
        // 异常
        .id_excp_ilegl_instr_o(id_excp_ilegl_instr),
        .id_excp_ecall_o      (id_excp_ecall),
        .id_excp_ebreak_o     (id_excp_ebreak),
        .id_excp_mret_o       (id_excp_mret)
    );
    
    // REG FILE
    regfile regfile_u(
        .clk               (clk),
        .rst_n             (rst_n),
        // from wb
        .wb_rd_en_i        (wb_rd_en),
        .wb_rd_idx_i       (wb_rd_idx),
        .wb_rd_wdata_i     (wb_rd_wdata),
        // from id
        .id_rs1_en_i       (id_rs1_en),
        .id_rs2_en_i       (id_rs2_en),
        .id_rs1_idx_i      (id_rs1_idx),
        .id_rs2_idx_i      (id_rs2_idx),
        // to id
        .rf_rs1_rdata_o    (rf_rs1_rdata),
        .rf_rs2_rdata_o    (rf_rs2_rdata),
        // to if
        .rf_rs1_x1_rdata_o ()
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 执行阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    id_ex id_ex_u(

        .clk                      (clk),
        .rst_n                    (rst_n),
        .stall_i                  (1'b0),
        
        // from if_id
        .if_id_pc_i               (if_id_pc),
        .if_id_instr_i            (if_id_instr),
        .if_id_prdt_taken_i       (if_id_prdt_taken),
        .if_id_if_excp_misalign_i (if_id_if_excp_misalign),
        .if_id_if_excp_bus_err_i  (if_id_if_excp_bus_err),
        
        // from id  
        .id_rs1_rdata_i        (id_rs1_rdata),
        .id_rs2_rdata_i        (id_rs2_rdata),
        .id_imm_i              (id_imm),
        .id_rd_idx_i           (id_rd_idx),
        .id_rd_en_i            (id_rd_en),
        .id_excp_ilegl_instr_i (id_excp_ilegl_instr),
        .id_excp_ecall_i       (id_excp_ecall),
        .id_excp_ebreak_i      (id_excp_ebreak),
        .id_excp_mret_i        (id_excp_mret),

        // to ex 
        .id_ex_pc_o         (id_ex_pc),
        .id_ex_instr_o      (id_ex_instr),
        .id_ex_prdt_taken_o (id_ex_prdt_taken)
        
        .id_ex_rs1_rdata_o  (id_ex_rs1_rdata),
        .id_ex_rs2_rdata_o  (id_ex_rs2_rdata),
        .id_ex_imm_o        (id_ex_imm),

        .id_ex_rd_idx_o     (id_ex_rd_idx),
        .id_ex_rd_en_o      (id_ex_rd_en),

        .id_ex_if_excp_misalign_o    (id_ex_if_excp_misalign),
        .id_ex_if_excp_bus_err_o     (id_ex_if_excp_bus_err),
        .id_ex_id_excp_ilegl_instr_o (id_ex_id_excp_ilegl_instr),
        .id_ex_id_excp_ecall_o       (id_ex_id_excp_ecall),
        .id_ex_id_excp_ebreak_o      (id_ex_id_excp_ebreak),
        .id_ex_id_excp_mret_o        (id_ex_id_excp_mret)
    );

    ex ex_u(
        .pc_i               (id_ex_pc),
        .instr_i            (id_ex_instr),
        .prdt_taken         (id_ex_prdt_taken),
        
        .rd_idx_i           (id_ex_rd_idx),
        .rd_en_i            (id_ex_rd_en),
        .rs1_rdata_i        (id_ex_rs1_rdata),
        .rs2_rdata_i        (id_ex_rs2_rdata),
        .imm_i              (id_ex_imm),
        // 执行结果
        .ex_alu_res_o       (ex_alu_res),
        // 冲刷流水线
        .ex_pipe_flush_o    (ex_pipe_flush),
        .ex_pipe_flush_pc_o (ex_pipe_flush_pc),
        // 前递
        .ex_rd_idx_o        (ex_rd_idx),
        .ex_rd_en_o         (ex_rd_en),
        .ex_rd_wdata_o      (ex_rd_wdata)
    );


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 访存阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    ex_mem ex_mem_u(
        .clk                    (clk),
        .rst_n                  (rst_n),
        // from id_ex
        .id_ex_pc_i                  (id_ex_pc),
        .id_ex_instr_i               (id_ex_instr),
        .id_ex_rs2_rdata_i           (id_ex_rs2_rdata),
        .id_ex_if_excp_misalign_i    (id_ex_if_excp_misalign),
        .id_ex_if_excp_bus_err_i     (id_ex_if_excp_bus_err),
        .id_ex_id_excp_ilegl_instr_i (id_ex_id_excp_ilegl_instr),
        .id_ex_id_excp_ecall_i       (id_ex_id_excp_ecall),
        .id_ex_id_excp_ebreak_i      (id_ex_id_excp_ebreak),
        .id_ex_id_excp_mret_i        (id_ex_id_excp_mret),

        // from ex
        .ex_alu_res_i        (ex_alu_res),
        .ex_rd_idx_i         (ex_rd_idx),
        .ex_rd_en_i          (ex_rd_en),
        .ex_rd_wdata_i       (ex_rd_wdata),
        // to ex_mem
        .ex_mem_pc_o         (ex_mem_pc),
        .ex_mem_instr_o      (ex_mem_instr),
        .ex_mem_rs2_rdata_o  (ex_mem_rs2_rdata),
        .ex_mem_alu_res_o    (ex_mem_alu_res),
        .ex_mem_ex_rd_idx_o  (ex_mem_ex_rd_idx),
        .ex_mem_ex_rd_en_o   (ex_mem_ex_rd_en),
        .ex_mem_ex_rd_wdata_o(ex_mem_ex_rd_wdata),
        // if excp
        .ex_mem_if_excp_misalign_o    (ex_mem_if_excp_misalign),
        .ex_mem_if_excp_bus_err_o     (ex_mem_if_excp_bus_err),
        // id excp
        .ex_mem_id_excp_ilegl_instr_o (ex_mem_id_excp_ilegl_instr),
        .ex_mem_id_excp_ecall_o       (ex_mem_id_excp_ecall),
        .ex_mem_id_excp_ebreak_o      (ex_mem_id_excp_ebreak),
        .ex_mem_id_excp_mret_o        (ex_mem_id_excp_mret)
    );

    mem mem_u(
        .clk(clk),
        .rst_n(rst_n),
        
        .ex_mem_instr_i     (ex_mem_instr),
        .ex_mem_rs2_rdata_i (ex_mem_rs2_rdata),
        .ex_mem_alu_res_i   (ex_mem_alu_res),

        .mem_rd_idx_o   (mem_rd_idx),
        .mem_rd_en_o    (mem_rd_en),
        .mem_rd_wdata_o (mem_rd_wdata)
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 写回阶段 
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//  

    mem_wb mem_wb_u(
        .clk                  (clk),
        .rst_n                (rst_n),
        // from ex_mem
        .ex_mem_pc_i          (ex_mem_pc),
        .ex_mem_ex_rd_idx_i   (ex_mem_ex_rd_idx),
        .ex_mem_ex_rd_en_i    (ex_mem_ex_rd_en),
        .ex_mem_ex_rd_wdata_i (ex_mem_ex_rd_wdata),
        // if excp
        .ex_mem_if_excp_misalign_i    (ex_mem_if_excp_misalign),
        .ex_mem_if_excp_bus_err_i     (ex_mem_if_excp_bus_err),
        // id excp
        .ex_mem_id_excp_ilegl_instr_i (ex_mem_id_excp_ilegl_instr),
        .ex_mem_id_excp_ecall_i       (ex_mem_id_excp_ecall),
        .ex_mem_id_excp_ebreak_i      (ex_mem_id_excp_ebreak),
        .ex_mem_id_excp_mret_i        (ex_mem_id_excp_mret),
        // from mem
        .mem_rd_idx_i         (mem_rd_idx),
        .mem_rd_en_i          (mem_rd_en),
        .mem_rd_wdata_i       (mem_rd_wdata),

        .mem_wb_pc_o          (mem_wb_pc),
        .mem_wb_ex_rd_idx_o   (mem_wb_ex_rd_idx),
        .mem_wb_ex_rd_en_o    (mem_wb_ex_rd_en),
        .mem_wb_ex_rd_wdata_o (mem_wb_ex_rd_wdata),

        .mem_wb_mem_rd_idx_o  (mem_wb_mem_rd_idx),
        .mem_wb_mem_rd_en_o   (mem_wb_mem_rd_en),
        .mem_wb_mem_rd_wdata_o(mem_wb_mem_rd_wdata),

        .mem_wb_if_excp_misalign_o   (mem_wb_if_excp_misalign),
        .mem_wb_if_excp_bus_err_o    (mem_wb_if_excp_bus_err),
        .mem_wb_id_excp_ilegl_instr_o(mem_wb_id_excp_ilegl_instr),
        .mem_wb_id_excp_ecall_o      (mem_wb_id_excp_ecall),
        .mem_wb_id_excp_ebreak_o     (mem_wb_id_excp_ebreak),
        .mem_wb_id_excp_mret_o       (mem_wb_id_excp_mret)
    );

    wb wb_u(
        .mem_wb_pc_i          (mem_wb_pc),
        .mem_wb_ex_rd_idx_i   (mem_wb_ex_rd_idx),
        .mem_wb_ex_rd_en_i    (mem_wb_ex_rd_en),
        .mem_wb_ex_rd_wdata_i (mem_wb_ex_rd_wdata),

        .mem_wb_mem_rd_idx_i  (mem_wb_mem_rd_idx),
        .mem_wb_mem_rd_en_i   (mem_wb_mem_rd_en),
        .mem_wb_mem_rd_wdata_i(mem_wb_mem_rd_wdata),

        // if excp
        .mem_wb_if_excp_misalign_i   (mem_wb_if_excp_misalign),
        .mem_wb_if_excp_bus_err_i    (mem_wb_if_excp_bus_err),
        .mem_wb_id_excp_ilegl_instr_i(mem_wb_id_excp_ilegl_instr),
        .mem_wb_id_excp_ecall_i      (mem_wb_id_excp_ecall),
        .mem_wb_id_excp_ebreak_i     (mem_wb_id_excp_ebreak),
        .mem_wb_id_excp_mret_i       (mem_wb_id_excp_mret),

        .wb_rd_en_o(wb_rd_en),
        .wb_rd_idx_o(wb_rd_idx),
        .wb_rd_wdata_o(wb_rd_wdata)
    );


endmodule