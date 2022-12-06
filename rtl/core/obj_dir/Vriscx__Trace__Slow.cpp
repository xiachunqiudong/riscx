// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscx__Syms.h"


void Vriscx___024root__traceInitSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscx___024root__traceInitTop(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscx___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vriscx___024root__traceInitSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+140,"clk", false,-1);
        tracep->declBit(c+141,"rst_n", false,-1);
        tracep->declBit(c+140,"riscx clk", false,-1);
        tracep->declBit(c+141,"riscx rst_n", false,-1);
        tracep->declBus(c+1,"riscx if_pc_next", false,-1, 31,0);
        tracep->declBus(c+2,"riscx pr_pc", false,-1, 31,0);
        tracep->declBus(c+2,"riscx if_pc", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_instr", false,-1, 31,0);
        tracep->declBit(c+4,"riscx if_prdt_taken", false,-1);
        tracep->declBus(c+5,"riscx if_id_pc", false,-1, 31,0);
        tracep->declBus(c+6,"riscx if_id_instr", false,-1, 31,0);
        tracep->declBit(c+142,"riscx if_id_prdt_taken", false,-1);
        tracep->declBit(c+7,"riscx dec_rs1_en", false,-1);
        tracep->declBit(c+8,"riscx dec_rs2_en", false,-1);
        tracep->declBus(c+9,"riscx dec_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+10,"riscx dec_rs2_idx", false,-1, 4,0);
        tracep->declBus(c+11,"riscx rf_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+12,"riscx rf_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+5,"riscx dec_pc", false,-1, 31,0);
        tracep->declBus(c+6,"riscx dec_instr", false,-1, 31,0);
        tracep->declBus(c+13,"riscx dec_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+14,"riscx dec_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+15,"riscx dec_imm", false,-1, 31,0);
        tracep->declBus(c+16,"riscx dec_rd_idx", false,-1, 4,0);
        tracep->declBit(c+17,"riscx dec_rd_en", false,-1);
        tracep->declBus(c+18,"riscx id_ex_pc", false,-1, 31,0);
        tracep->declBus(c+19,"riscx id_ex_instr", false,-1, 31,0);
        tracep->declBus(c+20,"riscx id_ex_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+21,"riscx id_ex_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+22,"riscx id_ex_imm", false,-1, 31,0);
        tracep->declBit(c+23,"riscx id_ex_prdt_taken", false,-1);
        tracep->declBus(c+24,"riscx id_ex_rd_idx", false,-1, 4,0);
        tracep->declBit(c+25,"riscx id_ex_rd_en", false,-1);
        tracep->declBit(c+143,"riscx ex_pipe_flush", false,-1);
        tracep->declBus(c+26,"riscx ex_pipe_flush_pc", false,-1, 31,0);
        tracep->declBus(c+27,"riscx ex_alu_res", false,-1, 31,0);
        tracep->declBus(c+28,"riscx ex_rd_idx", false,-1, 4,0);
        tracep->declBit(c+29,"riscx ex_rd_en", false,-1);
        tracep->declBus(c+27,"riscx ex_rd_wdata", false,-1, 31,0);
        tracep->declBit(c+140,"riscx pc_reg_u clk", false,-1);
        tracep->declBit(c+141,"riscx pc_reg_u rst_n", false,-1);
        tracep->declBit(c+144,"riscx pc_reg_u stall_i", false,-1);
        tracep->declBit(c+143,"riscx pc_reg_u pipe_flush_i", false,-1);
        tracep->declBus(c+26,"riscx pc_reg_u pipe_flush_pc_i", false,-1, 31,0);
        tracep->declBus(c+1,"riscx pc_reg_u pc_next_i", false,-1, 31,0);
        tracep->declBus(c+2,"riscx pc_reg_u pc_o", false,-1, 31,0);
        tracep->declBus(c+30,"riscx pc_reg_u pc_din", false,-1, 31,0);
        tracep->declBit(c+145,"riscx pc_reg_u wen", false,-1);
        tracep->declBus(c+146,"riscx pc_reg_u pc_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx pc_reg_u pc_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx pc_reg_u pc_dff clk", false,-1);
        tracep->declBit(c+141,"riscx pc_reg_u pc_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx pc_reg_u pc_dff wen", false,-1);
        tracep->declBus(c+30,"riscx pc_reg_u pc_dff din", false,-1, 31,0);
        tracep->declBus(c+2,"riscx pc_reg_u pc_dff qout", false,-1, 31,0);
        tracep->declBus(c+2,"riscx pc_reg_u pc_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+2,"riscx if_u pc_i", false,-1, 31,0);
        tracep->declBus(c+1,"riscx if_u if_pc_next_o", false,-1, 31,0);
        tracep->declBit(c+4,"riscx if_u if_prdt_taken_o", false,-1);
        tracep->declBus(c+3,"riscx if_u if_instr_o", false,-1, 31,0);
        tracep->declBus(c+2,"riscx if_u if_pc_o", false,-1, 31,0);
        tracep->declBit(c+145,"riscx if_u if_req_valid", false,-1);
        tracep->declBit(c+145,"riscx if_u if_req_ready", false,-1);
        tracep->declBus(c+2,"riscx if_u if_req_pc", false,-1, 31,0);
        tracep->declBit(c+145,"riscx if_u if_resp_valid", false,-1);
        tracep->declBit(c+145,"riscx if_u if_resp_ready", false,-1);
        tracep->declBit(c+144,"riscx if_u if_resp_err", false,-1);
        tracep->declBus(c+3,"riscx if_u if_resp_instr", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_u instr", false,-1, 31,0);
        tracep->declBit(c+31,"riscx if_u dec_bjp", false,-1);
        tracep->declBit(c+32,"riscx if_u dec_bxx", false,-1);
        tracep->declBit(c+33,"riscx if_u dec_jal", false,-1);
        tracep->declBit(c+34,"riscx if_u dec_jalr", false,-1);
        tracep->declBus(c+35,"riscx if_u dec_jalr_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+36,"riscx if_u dec_bjp_imm", false,-1, 31,0);
        tracep->declBit(c+4,"riscx if_u prdt_taken", false,-1);
        tracep->declBit(c+37,"riscx if_u jalr_rs1_x0", false,-1);
        tracep->declBit(c+38,"riscx if_u jalr_rs1_x1", false,-1);
        tracep->declBus(c+39,"riscx if_u prdt_pc_add_op1", false,-1, 31,0);
        tracep->declBus(c+36,"riscx if_u prdt_pc_add_op2", false,-1, 31,0);
        tracep->declBus(c+40,"riscx if_u pc_add_op1", false,-1, 31,0);
        tracep->declBus(c+41,"riscx if_u pc_add_op2", false,-1, 31,0);
        tracep->declBit(c+145,"riscx if_u fetch_if2icb_u if_req_valid_i", false,-1);
        tracep->declBit(c+145,"riscx if_u fetch_if2icb_u if_req_ready_o", false,-1);
        tracep->declBus(c+2,"riscx if_u fetch_if2icb_u if_req_pc_i", false,-1, 31,0);
        tracep->declBit(c+145,"riscx if_u fetch_if2icb_u if_resp_valid_o", false,-1);
        tracep->declBit(c+145,"riscx if_u fetch_if2icb_u if_resp_ready_i", false,-1);
        tracep->declBit(c+144,"riscx if_u fetch_if2icb_u if_resp_err_o", false,-1);
        tracep->declBus(c+3,"riscx if_u fetch_if2icb_u if_resp_instr_o", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_u fetch_if2icb_u instr", false,-1, 31,0);
        tracep->declBus(c+2,"riscx if_u fetch_if2icb_u pc", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_u mini_dec_u instr_i", false,-1, 31,0);
        tracep->declBit(c+31,"riscx if_u mini_dec_u dec_bjp_o", false,-1);
        tracep->declBit(c+32,"riscx if_u mini_dec_u dec_bxx_o", false,-1);
        tracep->declBit(c+33,"riscx if_u mini_dec_u dec_jal_o", false,-1);
        tracep->declBit(c+34,"riscx if_u mini_dec_u dec_jalr_o", false,-1);
        tracep->declBus(c+35,"riscx if_u mini_dec_u dec_jalr_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+36,"riscx if_u mini_dec_u dec_bjp_imm_o", false,-1, 31,0);
        tracep->declBus(c+42,"riscx if_u mini_dec_u opcode", false,-1, 6,0);
        tracep->declBus(c+43,"riscx if_u mini_dec_u bjp_imm_bxx", false,-1, 31,0);
        tracep->declBus(c+44,"riscx if_u mini_dec_u bjp_imm_jal", false,-1, 31,0);
        tracep->declBus(c+45,"riscx if_u mini_dec_u bjp_imm_jalr", false,-1, 31,0);
        tracep->declBit(c+140,"riscx if_id_u clk", false,-1);
        tracep->declBit(c+141,"riscx if_id_u rst_n", false,-1);
        tracep->declBit(c+144,"riscx if_id_u stall_i", false,-1);
        tracep->declBus(c+2,"riscx if_id_u if_pc_i", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_id_u if_instr_i", false,-1, 31,0);
        tracep->declBit(c+4,"riscx if_id_u if_prdt_taken_i", false,-1);
        tracep->declBus(c+5,"riscx if_id_u if_id_pc_o", false,-1, 31,0);
        tracep->declBus(c+6,"riscx if_id_u if_id_instr_o", false,-1, 31,0);
        tracep->declBit(c+142,"riscx if_id_u if_id_prdt_taken_o", false,-1);
        tracep->declBit(c+145,"riscx if_id_u wen", false,-1);
        tracep->declBus(c+146,"riscx if_id_u pc_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx if_id_u pc_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx if_id_u pc_dff clk", false,-1);
        tracep->declBit(c+141,"riscx if_id_u pc_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx if_id_u pc_dff wen", false,-1);
        tracep->declBus(c+2,"riscx if_id_u pc_dff din", false,-1, 31,0);
        tracep->declBus(c+5,"riscx if_id_u pc_dff qout", false,-1, 31,0);
        tracep->declBus(c+5,"riscx if_id_u pc_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+146,"riscx if_id_u instr_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx if_id_u instr_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx if_id_u instr_dff clk", false,-1);
        tracep->declBit(c+141,"riscx if_id_u instr_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx if_id_u instr_dff wen", false,-1);
        tracep->declBus(c+3,"riscx if_id_u instr_dff din", false,-1, 31,0);
        tracep->declBus(c+6,"riscx if_id_u instr_dff qout", false,-1, 31,0);
        tracep->declBus(c+6,"riscx if_id_u instr_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+5,"riscx id_u pc_i", false,-1, 31,0);
        tracep->declBus(c+6,"riscx id_u instr_i", false,-1, 31,0);
        tracep->declBus(c+9,"riscx id_u dec_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+10,"riscx id_u dec_rs2_idx_o", false,-1, 4,0);
        tracep->declBit(c+7,"riscx id_u dec_rs1_en_o", false,-1);
        tracep->declBit(c+8,"riscx id_u dec_rs2_en_o", false,-1);
        tracep->declBus(c+11,"riscx id_u rs1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+11,"riscx id_u rs2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+28,"riscx id_u ex_rd_idx_i", false,-1, 4,0);
        tracep->declBit(c+29,"riscx id_u ex_rd_en_i", false,-1);
        tracep->declBus(c+27,"riscx id_u ex_rd_wdata_i", false,-1, 31,0);
        tracep->declBus(c+5,"riscx id_u dec_pc_o", false,-1, 31,0);
        tracep->declBus(c+6,"riscx id_u dec_instr_o", false,-1, 31,0);
        tracep->declBus(c+13,"riscx id_u dec_rs1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+14,"riscx id_u dec_rs2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+15,"riscx id_u dec_imm_o", false,-1, 31,0);
        tracep->declBus(c+16,"riscx id_u dec_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+17,"riscx id_u dec_rd_en_o", false,-1);
        tracep->declBit(c+46,"riscx id_u rs1_not_x0", false,-1);
        tracep->declBit(c+47,"riscx id_u rs2_not_x0", false,-1);
        tracep->declBit(c+48,"riscx id_u rs1_ex_fwd", false,-1);
        tracep->declBit(c+49,"riscx id_u rs2_ex_fwd", false,-1);
        tracep->declBus(c+50,"riscx id_u opcode", false,-1, 6,0);
        tracep->declBus(c+16,"riscx id_u rd", false,-1, 4,0);
        tracep->declBus(c+51,"riscx id_u fun3", false,-1, 2,0);
        tracep->declBus(c+9,"riscx id_u rs1", false,-1, 4,0);
        tracep->declBus(c+10,"riscx id_u rs2", false,-1, 4,0);
        tracep->declBus(c+52,"riscx id_u fun7", false,-1, 6,0);
        tracep->declBus(c+146,"riscx regfile_u reg_num", false,-1, 31,0);
        tracep->declBit(c+140,"riscx regfile_u clk", false,-1);
        tracep->declBit(c+141,"riscx regfile_u rst_n", false,-1);
        tracep->declBit(c+148,"riscx regfile_u rd_en_i", false,-1);
        tracep->declBus(c+149,"riscx regfile_u rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+150,"riscx regfile_u rd_wdata_i", false,-1, 31,0);
        tracep->declBit(c+7,"riscx regfile_u rs1_en_i", false,-1);
        tracep->declBit(c+8,"riscx regfile_u rs2_en_i", false,-1);
        tracep->declBus(c+9,"riscx regfile_u rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+10,"riscx regfile_u rs2_idx_i", false,-1, 4,0);
        tracep->declBus(c+11,"riscx regfile_u rs1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+12,"riscx regfile_u rs2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+151,"riscx regfile_u rs1_x1_rdata_o", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+53+i*1,"riscx regfile_u reg_data", true,(i+1), 31,0);}}
        tracep->declBus(c+84,"riscx regfile_u i", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u rst_n", false,-1);
        tracep->declBit(c+144,"riscx id_ex_u stall_i", false,-1);
        tracep->declBus(c+5,"riscx id_ex_u dec_pc_i", false,-1, 31,0);
        tracep->declBus(c+6,"riscx id_ex_u dec_instr_i", false,-1, 31,0);
        tracep->declBus(c+13,"riscx id_ex_u dec_rs1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+14,"riscx id_ex_u dec_rs2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+15,"riscx id_ex_u dec_imm_i", false,-1, 31,0);
        tracep->declBus(c+16,"riscx id_ex_u dec_rd_idx_i", false,-1, 4,0);
        tracep->declBit(c+17,"riscx id_ex_u dec_rd_en_i", false,-1);
        tracep->declBit(c+142,"riscx id_ex_u if_id_prdt_taken_i", false,-1);
        tracep->declBus(c+18,"riscx id_ex_u id_ex_pc_o", false,-1, 31,0);
        tracep->declBus(c+19,"riscx id_ex_u id_ex_instr_o", false,-1, 31,0);
        tracep->declBus(c+20,"riscx id_ex_u id_ex_rs1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+21,"riscx id_ex_u id_ex_rs2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+22,"riscx id_ex_u id_ex_imm_o", false,-1, 31,0);
        tracep->declBus(c+24,"riscx id_ex_u id_ex_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+25,"riscx id_ex_u id_ex_rd_en_o", false,-1);
        tracep->declBit(c+23,"riscx id_ex_u id_ex_prdt_taken_o", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u wen", false,-1);
        tracep->declBus(c+146,"riscx id_ex_u pc_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx id_ex_u pc_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u pc_dff clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u pc_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u pc_dff wen", false,-1);
        tracep->declBus(c+5,"riscx id_ex_u pc_dff din", false,-1, 31,0);
        tracep->declBus(c+18,"riscx id_ex_u pc_dff qout", false,-1, 31,0);
        tracep->declBus(c+18,"riscx id_ex_u pc_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+146,"riscx id_ex_u instr_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx id_ex_u instr_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u instr_dff clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u instr_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u instr_dff wen", false,-1);
        tracep->declBus(c+6,"riscx id_ex_u instr_dff din", false,-1, 31,0);
        tracep->declBus(c+19,"riscx id_ex_u instr_dff qout", false,-1, 31,0);
        tracep->declBus(c+19,"riscx id_ex_u instr_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+146,"riscx id_ex_u alu_op1_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx id_ex_u alu_op1_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u alu_op1_dff clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u alu_op1_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u alu_op1_dff wen", false,-1);
        tracep->declBus(c+13,"riscx id_ex_u alu_op1_dff din", false,-1, 31,0);
        tracep->declBus(c+20,"riscx id_ex_u alu_op1_dff qout", false,-1, 31,0);
        tracep->declBus(c+20,"riscx id_ex_u alu_op1_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+146,"riscx id_ex_u alu_op2_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx id_ex_u alu_op2_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u alu_op2_dff clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u alu_op2_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u alu_op2_dff wen", false,-1);
        tracep->declBus(c+14,"riscx id_ex_u alu_op2_dff din", false,-1, 31,0);
        tracep->declBus(c+21,"riscx id_ex_u alu_op2_dff qout", false,-1, 31,0);
        tracep->declBus(c+21,"riscx id_ex_u alu_op2_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+146,"riscx id_ex_u alu_fun_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx id_ex_u alu_fun_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u alu_fun_dff clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u alu_fun_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u alu_fun_dff wen", false,-1);
        tracep->declBus(c+15,"riscx id_ex_u alu_fun_dff din", false,-1, 31,0);
        tracep->declBus(c+22,"riscx id_ex_u alu_fun_dff qout", false,-1, 31,0);
        tracep->declBus(c+22,"riscx id_ex_u alu_fun_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+152,"riscx id_ex_u rd_idx_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx id_ex_u rd_idx_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u rd_idx_dff clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u rd_idx_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u rd_idx_dff wen", false,-1);
        tracep->declBus(c+16,"riscx id_ex_u rd_idx_dff din", false,-1, 4,0);
        tracep->declBus(c+24,"riscx id_ex_u rd_idx_dff qout", false,-1, 4,0);
        tracep->declBus(c+24,"riscx id_ex_u rd_idx_dff qout_r", false,-1, 4,0);
        tracep->declBus(c+153,"riscx id_ex_u rd_en_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx id_ex_u rd_en_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u rd_en_dff clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u rd_en_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u rd_en_dff wen", false,-1);
        tracep->declBus(c+17,"riscx id_ex_u rd_en_dff din", false,-1, 0,0);
        tracep->declBus(c+25,"riscx id_ex_u rd_en_dff qout", false,-1, 0,0);
        tracep->declBus(c+25,"riscx id_ex_u rd_en_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+153,"riscx id_ex_u prdt_taken_dff DW", false,-1, 31,0);
        tracep->declBus(c+147,"riscx id_ex_u prdt_taken_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+140,"riscx id_ex_u prdt_taken_dff clk", false,-1);
        tracep->declBit(c+141,"riscx id_ex_u prdt_taken_dff rst_n", false,-1);
        tracep->declBit(c+145,"riscx id_ex_u prdt_taken_dff wen", false,-1);
        tracep->declBus(c+142,"riscx id_ex_u prdt_taken_dff din", false,-1, 0,0);
        tracep->declBus(c+23,"riscx id_ex_u prdt_taken_dff qout", false,-1, 0,0);
        tracep->declBus(c+23,"riscx id_ex_u prdt_taken_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+18,"riscx ex_u pc_i", false,-1, 31,0);
        tracep->declBus(c+19,"riscx ex_u instr_i", false,-1, 31,0);
        tracep->declBit(c+23,"riscx ex_u prdt_taken", false,-1);
        tracep->declBus(c+24,"riscx ex_u rd_idx_i", false,-1, 4,0);
        tracep->declBit(c+25,"riscx ex_u rd_en_i", false,-1);
        tracep->declBus(c+20,"riscx ex_u rs1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+21,"riscx ex_u rs2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+22,"riscx ex_u imm_i", false,-1, 31,0);
        tracep->declBus(c+27,"riscx ex_u ex_alu_res_o", false,-1, 31,0);
        tracep->declBit(c+143,"riscx ex_u ex_pipe_flush_o", false,-1);
        tracep->declBus(c+26,"riscx ex_u ex_pipe_flush_pc_o", false,-1, 31,0);
        tracep->declBus(c+28,"riscx ex_u ex_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+29,"riscx ex_u ex_rd_en_o", false,-1);
        tracep->declBus(c+27,"riscx ex_u ex_rd_wdata_o", false,-1, 31,0);
        tracep->declBus(c+85,"riscx ex_u opcode", false,-1, 6,0);
        tracep->declBus(c+28,"riscx ex_u rd", false,-1, 4,0);
        tracep->declBus(c+86,"riscx ex_u fun3", false,-1, 2,0);
        tracep->declBus(c+87,"riscx ex_u fun7", false,-1, 6,0);
        tracep->declBit(c+88,"riscx ex_u al", false,-1);
        tracep->declBit(c+89,"riscx ex_u ali", false,-1);
        tracep->declBit(c+90,"riscx ex_u ld_st", false,-1);
        tracep->declBit(c+91,"riscx ex_u bxx", false,-1);
        tracep->declBit(c+92,"riscx ex_u lui", false,-1);
        tracep->declBit(c+93,"riscx ex_u auipc", false,-1);
        tracep->declBit(c+94,"riscx ex_u al_ali", false,-1);
        tracep->declBit(c+95,"riscx ex_u fun_add", false,-1);
        tracep->declBit(c+96,"riscx ex_u fun_sub", false,-1);
        tracep->declBit(c+97,"riscx ex_u fun_sll", false,-1);
        tracep->declBit(c+98,"riscx ex_u fun_slt", false,-1);
        tracep->declBit(c+99,"riscx ex_u fun_sltu", false,-1);
        tracep->declBit(c+100,"riscx ex_u fun_xor", false,-1);
        tracep->declBit(c+101,"riscx ex_u fun_srl", false,-1);
        tracep->declBit(c+102,"riscx ex_u fun_sra", false,-1);
        tracep->declBit(c+103,"riscx ex_u fun_or", false,-1);
        tracep->declBit(c+104,"riscx ex_u fun_and", false,-1);
        tracep->declBit(c+105,"riscx ex_u op_add", false,-1);
        tracep->declBit(c+106,"riscx ex_u op_sub", false,-1);
        tracep->declBit(c+107,"riscx ex_u op_sll", false,-1);
        tracep->declBit(c+108,"riscx ex_u op_srl", false,-1);
        tracep->declBit(c+109,"riscx ex_u op_sra", false,-1);
        tracep->declBit(c+110,"riscx ex_u op_and", false,-1);
        tracep->declBit(c+111,"riscx ex_u op_or", false,-1);
        tracep->declBit(c+112,"riscx ex_u op_xor", false,-1);
        tracep->declBit(c+113,"riscx ex_u op_slt", false,-1);
        tracep->declBit(c+114,"riscx ex_u op_sltu", false,-1);
        tracep->declBus(c+115,"riscx ex_u alu_op1", false,-1, 31,0);
        tracep->declBus(c+116,"riscx ex_u alu_op2", false,-1, 31,0);
        tracep->declBus(c+117,"riscx ex_u add_res", false,-1, 31,0);
        tracep->declBus(c+118,"riscx ex_u sub_res", false,-1, 31,0);
        tracep->declBus(c+154,"riscx ex_u sll_res", false,-1, 31,0);
        tracep->declBus(c+155,"riscx ex_u srl_res", false,-1, 31,0);
        tracep->declBus(c+156,"riscx ex_u sra_res", false,-1, 31,0);
        tracep->declBus(c+119,"riscx ex_u and_res", false,-1, 31,0);
        tracep->declBus(c+120,"riscx ex_u or_res", false,-1, 31,0);
        tracep->declBus(c+121,"riscx ex_u xor_res", false,-1, 31,0);
        tracep->declBus(c+122,"riscx ex_u slt_res", false,-1, 31,0);
        tracep->declBus(c+122,"riscx ex_u sltu_res", false,-1, 31,0);
        tracep->declBit(c+91,"riscx ex_u branch", false,-1);
        tracep->declBit(c+123,"riscx ex_u beq", false,-1);
        tracep->declBit(c+124,"riscx ex_u bne", false,-1);
        tracep->declBit(c+125,"riscx ex_u blt", false,-1);
        tracep->declBit(c+126,"riscx ex_u bge", false,-1);
        tracep->declBit(c+127,"riscx ex_u bltu", false,-1);
        tracep->declBit(c+128,"riscx ex_u bgeu", false,-1);
        tracep->declBit(c+129,"riscx ex_u neq", false,-1);
        tracep->declBit(c+130,"riscx ex_u lt", false,-1);
        tracep->declBit(c+131,"riscx ex_u beq_res", false,-1);
        tracep->declBit(c+132,"riscx ex_u bne_res", false,-1);
        tracep->declBit(c+133,"riscx ex_u blt_res", false,-1);
        tracep->declBit(c+134,"riscx ex_u bge_res", false,-1);
        tracep->declBit(c+135,"riscx ex_u bltu_res", false,-1);
        tracep->declBit(c+136,"riscx ex_u bgeu_res", false,-1);
        tracep->declBit(c+137,"riscx ex_u branch_res", false,-1);
        tracep->declBit(c+138,"riscx ex_u pipe_flush", false,-1);
        tracep->declBus(c+18,"riscx ex_u pipe_flush_pc_op1", false,-1, 31,0);
        tracep->declBus(c+139,"riscx ex_u pipe_flush_pc_op2", false,-1, 31,0);
    }
}

void Vriscx___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vriscx___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vriscx___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vriscx___024root__traceRegister(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vriscx___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vriscx___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vriscx___024root__traceCleanup, vlSelf);
    }
}

void Vriscx___024root__traceFullSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscx___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscx___024root* const __restrict vlSelf = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscx___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscx___024root__traceFullSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                     & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                     ? ((0x67U == (0x7fU 
                                                   & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                 >> 0xfU)))
                                             ? 0U : 4U)
                                         : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                     : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r) 
                                   + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                       & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                       ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                       : 4U))),32);
        tracep->fullIData(oldp+2,(vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+3,(vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr),32);
        tracep->fullBit(oldp+4,(vlSelf->riscx__DOT__if_u__DOT__prdt_taken));
        tracep->fullIData(oldp+5,(vlSelf->riscx__DOT__if_id_u__DOT__pc_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+6,(vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r),32);
        tracep->fullBit(oldp+7,(vlSelf->riscx__DOT__dec_rs1_en));
        tracep->fullBit(oldp+8,(vlSelf->riscx__DOT__dec_rs2_en));
        tracep->fullCData(oldp+9,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+10,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+11,(vlSelf->riscx__DOT__rf_rs1_rdata),32);
        tracep->fullIData(oldp+12,(((1U & ((0U == (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0x14U))) 
                                           | (~ (IData)(vlSelf->riscx__DOT__dec_rs2_en))))
                                     ? 0U : (((0x1fU 
                                               & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i))
                                              ? vlSelf->riscx__DOT__regfile_u__DOT__rd_wdata_i
                                              : ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0x14U) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->riscx__DOT__regfile_u__DOT__reg_data
                                                 [(0x1fU 
                                                   & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                  : 0U)))),32);
        tracep->fullIData(oldp+13,((((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xfU)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0xfU)) 
                                        == (0x1fU & 
                                            (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))))
                                     ? vlSelf->riscx__DOT__ex_alu_res
                                     : vlSelf->riscx__DOT__rf_rs1_rdata)),32);
        tracep->fullIData(oldp+14,((((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0x14U)) 
                                        == (0x1fU & 
                                            (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))))
                                     ? vlSelf->riscx__DOT__ex_alu_res
                                     : vlSelf->riscx__DOT__rf_rs1_rdata)),32);
        tracep->fullIData(oldp+15,(vlSelf->riscx__DOT__dec_imm),32);
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))),5);
        tracep->fullBit(oldp+17,(vlSelf->riscx__DOT__dec_rd_en));
        tracep->fullIData(oldp+18,(vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+19,(vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+20,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+21,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+22,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r),32);
        tracep->fullBit(oldp+23,(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r));
        tracep->fullCData(oldp+24,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_idx_dff__DOT__qout_r),5);
        tracep->fullBit(oldp+25,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_en_dff__DOT__qout_r));
        tracep->fullIData(oldp+26,((vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r 
                                    + ((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                        ? 4U : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r))),32);
        tracep->fullIData(oldp+27,(vlSelf->riscx__DOT__ex_alu_res),32);
        tracep->fullCData(oldp+28,((0x1fU & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))),5);
        tracep->fullBit(oldp+29,(vlSelf->riscx__DOT__ex_rd_en));
        tracep->fullIData(oldp+30,(((IData)(vlSelf->riscx__DOT__ex_pipe_flush)
                                     ? (vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r 
                                        + ((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                            ? 4U : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r))
                                     : ((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                          & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                          ? ((0x67U 
                                              == (0x7fU 
                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                              ? ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                      >> 0xfU)))
                                                  ? 0U
                                                  : 4U)
                                              : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                          : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r) 
                                        + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                            & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                            ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                            : 4U)))),32);
        tracep->fullBit(oldp+31,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp));
        tracep->fullBit(oldp+32,((0x63U == (0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
        tracep->fullBit(oldp+33,((0x6fU == (0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
        tracep->fullBit(oldp+34,((0x67U == (0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
        tracep->fullCData(oldp+35,((0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                             >> 0xfU))),5);
        tracep->fullIData(oldp+36,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm),32);
        tracep->fullBit(oldp+37,((0U == (0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 0xfU)))));
        tracep->fullBit(oldp+38,((1U == (0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 0xfU)))));
        tracep->fullIData(oldp+39,(((0x67U == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                     ? ((0U == (0x1fU 
                                                & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                   >> 0xfU)))
                                         ? 0U : 4U)
                                     : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
        tracep->fullIData(oldp+40,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                     & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                     ? ((0x67U == (0x7fU 
                                                   & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                 >> 0xfU)))
                                             ? 0U : 4U)
                                         : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                     : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
        tracep->fullIData(oldp+41,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                     & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                     ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                     : 4U)),32);
        tracep->fullCData(oldp+42,((0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)),7);
        tracep->fullIData(oldp+43,((((- (IData)((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                 >> 0x1fU))) 
                                     << 0xdU) | ((0x1000U 
                                                  & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                             >> 7U))))))),32);
        tracep->fullIData(oldp+44,((((- (IData)((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                 >> 0x1fU))) 
                                     << 0x15U) | ((0x100000U 
                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr) 
                                                     | ((0x800U 
                                                         & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                              >> 0x14U))))))),32);
        tracep->fullIData(oldp+45,((((- (IData)((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                 >> 0x14U))),32);
        tracep->fullBit(oldp+46,((0U != (0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0xfU)))));
        tracep->fullBit(oldp+47,((0U != (0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0x14U)))));
        tracep->fullBit(oldp+48,(((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                    & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                >> 0xfU)))) 
                                  & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0xfU)) 
                                     == (0x1fU & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 7U))))));
        tracep->fullBit(oldp+49,(((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                    & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                >> 0x14U)))) 
                                  & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0x14U)) 
                                     == (0x1fU & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 7U))))));
        tracep->fullCData(oldp+50,((0x7fU & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)),7);
        tracep->fullCData(oldp+51,((7U & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+52,((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                    >> 0x19U)),7);
        tracep->fullIData(oldp+53,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[0]),32);
        tracep->fullIData(oldp+54,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[1]),32);
        tracep->fullIData(oldp+55,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[2]),32);
        tracep->fullIData(oldp+56,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[3]),32);
        tracep->fullIData(oldp+57,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[4]),32);
        tracep->fullIData(oldp+58,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[5]),32);
        tracep->fullIData(oldp+59,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[6]),32);
        tracep->fullIData(oldp+60,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[7]),32);
        tracep->fullIData(oldp+61,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[8]),32);
        tracep->fullIData(oldp+62,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[9]),32);
        tracep->fullIData(oldp+63,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[10]),32);
        tracep->fullIData(oldp+64,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[11]),32);
        tracep->fullIData(oldp+65,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[12]),32);
        tracep->fullIData(oldp+66,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[13]),32);
        tracep->fullIData(oldp+67,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[14]),32);
        tracep->fullIData(oldp+68,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[15]),32);
        tracep->fullIData(oldp+69,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[16]),32);
        tracep->fullIData(oldp+70,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[17]),32);
        tracep->fullIData(oldp+71,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[18]),32);
        tracep->fullIData(oldp+72,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[19]),32);
        tracep->fullIData(oldp+73,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[20]),32);
        tracep->fullIData(oldp+74,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[21]),32);
        tracep->fullIData(oldp+75,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[22]),32);
        tracep->fullIData(oldp+76,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[23]),32);
        tracep->fullIData(oldp+77,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[24]),32);
        tracep->fullIData(oldp+78,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[25]),32);
        tracep->fullIData(oldp+79,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[26]),32);
        tracep->fullIData(oldp+80,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[27]),32);
        tracep->fullIData(oldp+81,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[28]),32);
        tracep->fullIData(oldp+82,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[29]),32);
        tracep->fullIData(oldp+83,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[30]),32);
        tracep->fullIData(oldp+84,(vlSelf->riscx__DOT__regfile_u__DOT__i),32);
        tracep->fullCData(oldp+85,((0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)),7);
        tracep->fullCData(oldp+86,((7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+87,((vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                    >> 0x19U)),7);
        tracep->fullBit(oldp+88,((0x33U == (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
        tracep->fullBit(oldp+89,((0x13U == (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
        tracep->fullBit(oldp+90,(((3U == (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+91,((0x63U == (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
        tracep->fullBit(oldp+92,((0x37U == (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
        tracep->fullBit(oldp+93,((0x17U == (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
        tracep->fullBit(oldp+94,(vlSelf->riscx__DOT__ex_u__DOT__al_ali));
        tracep->fullBit(oldp+95,((IData)((0U == (0x7020U 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+96,((IData)((0x20U == 
                                          (0x7020U 
                                           & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+97,((1U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+98,((2U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+99,((3U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+100,((4U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+101,((IData)((0x5000U 
                                           == (0x7020U 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+102,((IData)((0x5020U 
                                           == (0x7020U 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+103,((6U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+104,((7U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+105,((((((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (IData)((0U 
                                                 == 
                                                 (0x7020U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))) 
                                     | ((3U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+106,((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+107,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                   & (1U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+108,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                   & (IData)((0x5000U 
                                              == (0x7020U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))));
        tracep->fullBit(oldp+109,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                   & (IData)((0x5020U 
                                              == (0x7020U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))));
        tracep->fullBit(oldp+110,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                   & (7U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+111,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                   & (6U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+112,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                   & (4U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+113,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                   & (2U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+114,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                   & (3U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
        tracep->fullIData(oldp+115,(vlSelf->riscx__DOT__ex_u__DOT__alu_op1),32);
        tracep->fullIData(oldp+116,(vlSelf->riscx__DOT__ex_u__DOT__alu_op2),32);
        tracep->fullIData(oldp+117,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                     + vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
        tracep->fullIData(oldp+118,(vlSelf->riscx__DOT__ex_u__DOT__sub_res),32);
        tracep->fullIData(oldp+119,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                     & vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
        tracep->fullIData(oldp+120,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                     | vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
        tracep->fullIData(oldp+121,(vlSelf->riscx__DOT__ex_u__DOT__xor_res),32);
        tracep->fullIData(oldp+122,((vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                     >> 0x1fU)),32);
        tracep->fullBit(oldp+123,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+124,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+125,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+126,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+127,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+128,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
        tracep->fullBit(oldp+129,((0U != vlSelf->riscx__DOT__ex_u__DOT__xor_res)));
        tracep->fullBit(oldp+130,((vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                   >> 0x1fU)));
        tracep->fullBit(oldp+131,(((IData)((0x63U == 
                                            (0x707fU 
                                             & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                   & (~ (IData)((0U 
                                                 != vlSelf->riscx__DOT__ex_u__DOT__xor_res))))));
        tracep->fullBit(oldp+132,(((IData)((0x1063U 
                                            == (0x707fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                   & (0U != vlSelf->riscx__DOT__ex_u__DOT__xor_res))));
        tracep->fullBit(oldp+133,(((IData)((0x4063U 
                                            == (0x707fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                   & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                      >> 0x1fU))));
        tracep->fullBit(oldp+134,(((IData)((0x5063U 
                                            == (0x707fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                   & (~ (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                         >> 0x1fU)))));
        tracep->fullBit(oldp+135,(((IData)((0x6063U 
                                            == (0x707fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                   & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                      >> 0x1fU))));
        tracep->fullBit(oldp+136,(((IData)((0x7063U 
                                            == (0x707fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                   & (~ (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                         >> 0x1fU)))));
        tracep->fullBit(oldp+137,(vlSelf->riscx__DOT__ex_u__DOT__branch_res));
        tracep->fullBit(oldp+138,(((0x63U == (0x7fU 
                                              & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                   & ((IData)(vlSelf->riscx__DOT__ex_u__DOT__branch_res) 
                                      ^ (IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)))));
        tracep->fullIData(oldp+139,(((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                      ? 4U : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r)),32);
        tracep->fullBit(oldp+140,(vlSelf->clk));
        tracep->fullBit(oldp+141,(vlSelf->rst_n));
        tracep->fullBit(oldp+142,(vlSelf->riscx__DOT__if_id_prdt_taken));
        tracep->fullBit(oldp+143,(vlSelf->riscx__DOT__ex_pipe_flush));
        tracep->fullBit(oldp+144,(0U));
        tracep->fullBit(oldp+145,(1U));
        tracep->fullIData(oldp+146,(0x20U),32);
        tracep->fullIData(oldp+147,(0U),32);
        tracep->fullBit(oldp+148,(vlSelf->riscx__DOT__regfile_u__DOT__rd_en_i));
        tracep->fullCData(oldp+149,(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i),5);
        tracep->fullIData(oldp+150,(vlSelf->riscx__DOT__regfile_u__DOT__rd_wdata_i),32);
        tracep->fullIData(oldp+151,(vlSelf->riscx__DOT__regfile_u__DOT__rs1_x1_rdata_o),32);
        tracep->fullIData(oldp+152,(5U),32);
        tracep->fullIData(oldp+153,(1U),32);
        tracep->fullIData(oldp+154,(vlSelf->riscx__DOT__ex_u__DOT__sll_res),32);
        tracep->fullIData(oldp+155,(vlSelf->riscx__DOT__ex_u__DOT__srl_res),32);
        tracep->fullIData(oldp+156,(vlSelf->riscx__DOT__ex_u__DOT__sra_res),32);
    }
}
