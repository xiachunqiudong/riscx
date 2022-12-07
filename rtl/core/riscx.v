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

    // from if_id to id
    wire [`PC_WIDTH-1:0]    if_id_pc;
    wire [`INSTR_WIDTH-1:0] if_id_instr;
    wire                    if_id_prdt_taken;

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
    
    wire [`XLEN-1:0]          dec_rs1_rdata;
    wire [`XLEN-1:0]          dec_rs2_rdata;
    wire [`XLEN-1:0]          dec_imm;

    wire [`REG_IDX_WIDTH-1:0] dec_rd_idx;
    wire                      dec_rd_en;

    // from id_ex to ex
    wire [`PC_WIDTH-1:0]      id_ex_pc;
    wire [`INSTR_WIDTH-1:0]   id_ex_instr;
    
    wire [`XLEN-1:0]          id_ex_rs1_rdata;
    wire [`XLEN-1:0]          id_ex_rs2_rdata;
    wire [`XLEN-1:0]          id_ex_imm;

    wire                      id_ex_prdt_taken;


    wire [`REG_IDX_WIDTH-1:0] id_ex_rd_idx;
    wire                      id_ex_rd_en;   
    
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

    instr_fetch if_u(
        // PC REG
        .pc_i            (pr_pc),
        .if_pc_next_o    (if_pc_next),
        
        // IF_ID
        .if_prdt_taken_o (if_prdt_taken),
        .if_instr_o      (if_instr),
        .if_pc_o         (if_pc)
    );

    
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 译码阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    if_id if_id_u(
        .clk               (clk),
        .rst_n             (rst_n),
        .stall_i           (1'b0),

        .if_pc_i           (if_pc),
        .if_instr_i        (if_instr),
        .if_prdt_taken_i   (if_prdt_taken),

        .if_id_pc_o        (if_id_pc),
        .if_id_instr_o     (if_id_instr),
        .if_id_prdt_taken_o (if_id_prdt_taken)
    );

    // ID 
    decode id_u(
        .pc_i            (if_id_pc),
        .instr_i         (if_id_instr),
        
        // REG FILE
        .dec_rs1_idx_o   (dec_rs1_idx),
        .dec_rs2_idx_o   (dec_rs2_idx),
        .dec_rs1_en_o    (dec_rs1_en),
        .dec_rs2_en_o    (dec_rs2_en),
        .rs1_rdata_i     (rf_rs1_rdata),
        .rs2_rdata_i     (rf_rs1_rdata),

        // ex_rd_wdata forward from ex
        .ex_rd_idx_i     (ex_rd_idx),
        .ex_rd_en_i      (ex_rd_en),
        .ex_rd_wdata_i   (ex_rd_wdata),

        // ex_rd_wdata forword from mem
        .ex_mem_ex_rd_idx_i   (ex_mem_ex_rd_idx),
        .ex_mem_ex_rd_en_i    (ex_mem_ex_rd_en),
        .ex_mem_ex_rd_wdata_i (ex_mem_ex_rd_wdata),
        // mem_rd_wdata forword from mem
        .mem_rd_idx_i         (mem_rd_idx),
        .mem_rd_en_i          (mem_rd_en),
        .mem_rd_wdata_i       (mem_rd_wdata),

        // ID_EX
        .dec_pc_o        (dec_pc),
        .dec_instr_o     (dec_instr),

        .dec_rs1_rdata_o (dec_rs1_rdata),
        .dec_rs2_rdata_o (dec_rs2_rdata),
        .dec_imm_o       (dec_imm),

        .dec_rd_idx_o    (dec_rd_idx),
        .dec_rd_en_o     (dec_rd_en)
    );
    
    // REG FILE
    regfile regfile_u(
        .clk            (clk),
        .rst_n          (rst_n),

        .rd_en_i        (wb_rd_en),
        .rd_idx_i       (wb_rd_idx),
        .rd_wdata_i     (wb_rd_wdata),

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
        .clk                (clk),
        .rst_n              (rst_n),
  
        .stall_i            (1'b0),
        
        .dec_pc_i           (dec_pc),
        .dec_instr_i        (dec_instr),
        
        .dec_rs1_rdata_i    (dec_rs1_rdata),
        .dec_rs2_rdata_i    (dec_rs2_rdata),
        .dec_imm_i          (dec_imm),
        
        .dec_rd_idx_i       (dec_rd_idx),
        .dec_rd_en_i        (dec_rd_en),
        
        .if_id_prdt_taken_i (if_id_prdt_taken),

        // to ex 
        .id_ex_pc_o         (id_ex_pc),
        .id_ex_instr_o      (id_ex_instr),
        
        .id_ex_rs1_rdata_o  (id_ex_rs1_rdata),
        .id_ex_rs2_rdata_o  (id_ex_rs2_rdata),
        .id_ex_imm_o        (id_ex_imm),

        .id_ex_rd_idx_o     (id_ex_rd_idx),
        .id_ex_rd_en_o      (id_ex_rd_en),

        .id_ex_prdt_taken_o (id_ex_prdt_taken)
    );

    ex ex_u(
        .pc_i(id_ex_pc),
        .instr_i(id_ex_instr),
        .prdt_taken(id_ex_prdt_taken),
        
        .rd_idx_i(id_ex_rd_idx),
        .rd_en_i(id_ex_rd_en),
        .rs1_rdata_i(id_ex_rs1_rdata),
        .rs2_rdata_i(id_ex_rs2_rdata),
        .imm_i(id_ex_imm),

        .ex_alu_res_o(ex_alu_res),
        
        .ex_pipe_flush_o(ex_pipe_flush),
        .ex_pipe_flush_pc_o(ex_pipe_flush_pc),

        .ex_rd_idx_o(ex_rd_idx),
        .ex_rd_en_o(ex_rd_en),
        .ex_rd_wdata_o(ex_rd_wdata)
    );


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 访存阶段     
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//

    ex_mem ex_mem_u(
        .clk(clk),
        .rst_n(rst_n),

        .ex_pc_i(id_ex_pc),
        .ex_instr_i(id_ex_instr),
        .ex_rs2_rdata_i(id_ex_rs2_rdata),

        .ex_alu_res_i(ex_alu_res),
        .ex_rd_idx_i(ex_rd_idx),
        .ex_rd_en_i(ex_rd_en),
        .ex_rd_wdata_i(ex_rd_wdata),

        .ex_mem_pc_o(ex_mem_pc),
        .ex_mem_instr_o(ex_mem_instr),
        .ex_mem_rs2_rdata_o(ex_mem_rs2_rdata),
        .ex_mem_alu_res_o(ex_mem_alu_res),
        .ex_mem_ex_rd_idx_o(ex_mem_ex_rd_idx),
        .ex_mem_ex_rd_en_o(ex_mem_ex_rd_en),
        .ex_mem_ex_rd_wdata_o(ex_mem_ex_rd_wdata)
    );

    mem mem_u(
        .clk(clk),
        .rst_n(rst_n),
        
        .ex_mem_instr_i(ex_mem_instr),
        .ex_mem_rs2_rdata_i(ex_mem_rs2_rdata),
        .ex_mem_alu_res_i(ex_mem_alu_res),

        .mem_rd_idx_o(mem_rd_idx),
        .mem_rd_en_o(mem_rd_en),
        .mem_rd_wdata_o(mem_rd_wdata)
    );

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// 写回阶段 
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//  

    mem_wb mem_wb_u(
        .clk                  (clk),
        .rst_n                (rst_n),

        .ex_mem_pc_i          (ex_mem_pc),
        .ex_mem_ex_rd_idx_i   (ex_mem_ex_rd_idx),
        .ex_mem_ex_rd_en_i    (ex_mem_ex_rd_en),
        .ex_mem_ex_rd_wdata_i (ex_mem_ex_rd_wdata),

        .mem_rd_idx_i         (mem_rd_idx),
        .mem_rd_en_i          (mem_rd_en),
        .mem_rd_wdata_i       (mem_rd_wdata),

        .mem_wb_pc_o          (mem_wb_pc),
        .mem_wb_ex_rd_idx_o   (mem_wb_ex_rd_idx),
        .mem_wb_ex_rd_en_o    (mem_wb_ex_rd_en),
        .mem_wb_ex_rd_wdata_o (mem_wb_ex_rd_wdata),

        .mem_wb_mem_rd_idx_o  (mem_wb_mem_rd_idx),
        .mem_wb_mem_rd_en_o   (mem_wb_mem_rd_en),
        .mem_wb_mem_rd_wdata_o(mem_wb_mem_rd_wdata)
    );

    wb wb_u(
        .mem_wb_pc_i          (mem_wb_pc),
        .mem_wb_ex_rd_idx_i   (mem_wb_ex_rd_idx),
        .mem_wb_ex_rd_en_i    (mem_wb_ex_rd_en),
        .mem_wb_ex_rd_wdata_i (mem_wb_ex_rd_wdata),

        .mem_wb_mem_rd_idx_i  (mem_wb_mem_rd_idx),
        .mem_wb_mem_rd_en_i   (mem_wb_mem_rd_en),
        .mem_wb_mem_rd_wdata_i(mem_wb_mem_rd_wdata),

        .wb_rd_en_o(wb_rd_en),
        .wb_rd_idx_o(wb_rd_idx),
        .wb_rd_wdata_o(wb_rd_wdata)
    );


endmodule