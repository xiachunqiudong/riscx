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
        tracep->declBit(c+76,"clk", false,-1);
        tracep->declBit(c+77,"rst_n", false,-1);
        tracep->declBit(c+76,"riscx clk", false,-1);
        tracep->declBit(c+77,"riscx rst_n", false,-1);
        tracep->declBus(c+1,"riscx if_pc_next", false,-1, 31,0);
        tracep->declBus(c+2,"riscx pr_pc", false,-1, 31,0);
        tracep->declBus(c+2,"riscx if_pc", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_instr", false,-1, 31,0);
        tracep->declBit(c+4,"riscx if_prdt_taken", false,-1);
        tracep->declBus(c+5,"riscx if_id_pc", false,-1, 31,0);
        tracep->declBus(c+6,"riscx if_id_instr", false,-1, 31,0);
        tracep->declBit(c+78,"riscx if_id_prdt_taken", false,-1);
        tracep->declBit(c+7,"riscx dec_rs1_en", false,-1);
        tracep->declBit(c+8,"riscx dec_rs2_en", false,-1);
        tracep->declBus(c+9,"riscx dec_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+10,"riscx dec_rs2_idx", false,-1, 4,0);
        tracep->declBus(c+11,"riscx rf_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+12,"riscx rf_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+79,"riscx dec_pc", false,-1, 31,0);
        tracep->declBus(c+80,"riscx dec_instr", false,-1, 31,0);
        tracep->declBus(c+11,"riscx dec_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+11,"riscx dec_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+13,"riscx dec_imm", false,-1, 31,0);
        tracep->declBus(c+14,"riscx dec_rd_idx", false,-1, 4,0);
        tracep->declBit(c+15,"riscx dec_rd_en", false,-1);
        tracep->declBus(c+16,"riscx id_ex_pc", false,-1, 31,0);
        tracep->declBus(c+81,"riscx id_ex_instr", false,-1, 31,0);
        tracep->declBus(c+17,"riscx id_ex_rs1_rdata", false,-1, 31,0);
        tracep->declBus(c+18,"riscx id_ex_rs2_rdata", false,-1, 31,0);
        tracep->declBus(c+19,"riscx id_ex_imm", false,-1, 31,0);
        tracep->declBit(c+20,"riscx id_ex_prdt_taken", false,-1);
        tracep->declBus(c+21,"riscx id_ex_rd_idx", false,-1, 4,0);
        tracep->declBit(c+22,"riscx id_ex_rd_en", false,-1);
        tracep->declBit(c+82,"riscx ex_pipe_flush", false,-1);
        tracep->declBus(c+83,"riscx ex_pipe_flush_pc", false,-1, 31,0);
        tracep->declBit(c+76,"riscx pc_reg_u clk", false,-1);
        tracep->declBit(c+77,"riscx pc_reg_u rst_n", false,-1);
        tracep->declBit(c+84,"riscx pc_reg_u stall_i", false,-1);
        tracep->declBit(c+82,"riscx pc_reg_u pipe_flush_i", false,-1);
        tracep->declBus(c+83,"riscx pc_reg_u pipe_flush_pc_i", false,-1, 31,0);
        tracep->declBus(c+1,"riscx pc_reg_u pc_next_i", false,-1, 31,0);
        tracep->declBus(c+2,"riscx pc_reg_u pc_o", false,-1, 31,0);
        tracep->declBus(c+23,"riscx pc_reg_u pc_din", false,-1, 31,0);
        tracep->declBit(c+85,"riscx pc_reg_u wen", false,-1);
        tracep->declBus(c+86,"riscx pc_reg_u pc_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx pc_reg_u pc_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx pc_reg_u pc_dff clk", false,-1);
        tracep->declBit(c+77,"riscx pc_reg_u pc_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx pc_reg_u pc_dff wen", false,-1);
        tracep->declBus(c+23,"riscx pc_reg_u pc_dff din", false,-1, 31,0);
        tracep->declBus(c+2,"riscx pc_reg_u pc_dff qout", false,-1, 31,0);
        tracep->declBus(c+2,"riscx pc_reg_u pc_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+2,"riscx if_u pc_i", false,-1, 31,0);
        tracep->declBus(c+1,"riscx if_u if_pc_next_o", false,-1, 31,0);
        tracep->declBit(c+4,"riscx if_u if_prdt_taken_o", false,-1);
        tracep->declBus(c+3,"riscx if_u if_instr_o", false,-1, 31,0);
        tracep->declBus(c+2,"riscx if_u if_pc_o", false,-1, 31,0);
        tracep->declBit(c+85,"riscx if_u if_req_valid", false,-1);
        tracep->declBit(c+85,"riscx if_u if_req_ready", false,-1);
        tracep->declBus(c+2,"riscx if_u if_req_pc", false,-1, 31,0);
        tracep->declBit(c+85,"riscx if_u if_resp_valid", false,-1);
        tracep->declBit(c+85,"riscx if_u if_resp_ready", false,-1);
        tracep->declBit(c+84,"riscx if_u if_resp_err", false,-1);
        tracep->declBus(c+3,"riscx if_u if_resp_instr", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_u instr", false,-1, 31,0);
        tracep->declBit(c+24,"riscx if_u dec_bjp", false,-1);
        tracep->declBit(c+25,"riscx if_u dec_bxx", false,-1);
        tracep->declBit(c+26,"riscx if_u dec_jal", false,-1);
        tracep->declBit(c+27,"riscx if_u dec_jalr", false,-1);
        tracep->declBus(c+28,"riscx if_u dec_jalr_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+29,"riscx if_u dec_bjp_imm", false,-1, 31,0);
        tracep->declBit(c+4,"riscx if_u prdt_taken", false,-1);
        tracep->declBit(c+30,"riscx if_u jalr_rs1_x0", false,-1);
        tracep->declBit(c+31,"riscx if_u jalr_rs1_x1", false,-1);
        tracep->declBus(c+32,"riscx if_u prdt_pc_add_op1", false,-1, 31,0);
        tracep->declBus(c+29,"riscx if_u prdt_pc_add_op2", false,-1, 31,0);
        tracep->declBus(c+33,"riscx if_u pc_add_op1", false,-1, 31,0);
        tracep->declBus(c+34,"riscx if_u pc_add_op2", false,-1, 31,0);
        tracep->declBit(c+85,"riscx if_u fetch_if2icb_u if_req_valid_i", false,-1);
        tracep->declBit(c+85,"riscx if_u fetch_if2icb_u if_req_ready_o", false,-1);
        tracep->declBus(c+2,"riscx if_u fetch_if2icb_u if_req_pc_i", false,-1, 31,0);
        tracep->declBit(c+85,"riscx if_u fetch_if2icb_u if_resp_valid_o", false,-1);
        tracep->declBit(c+85,"riscx if_u fetch_if2icb_u if_resp_ready_i", false,-1);
        tracep->declBit(c+84,"riscx if_u fetch_if2icb_u if_resp_err_o", false,-1);
        tracep->declBus(c+3,"riscx if_u fetch_if2icb_u if_resp_instr_o", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_u fetch_if2icb_u instr", false,-1, 31,0);
        tracep->declBus(c+2,"riscx if_u fetch_if2icb_u pc", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_u mini_dec_u instr_i", false,-1, 31,0);
        tracep->declBit(c+24,"riscx if_u mini_dec_u dec_bjp_o", false,-1);
        tracep->declBit(c+25,"riscx if_u mini_dec_u dec_bxx_o", false,-1);
        tracep->declBit(c+26,"riscx if_u mini_dec_u dec_jal_o", false,-1);
        tracep->declBit(c+27,"riscx if_u mini_dec_u dec_jalr_o", false,-1);
        tracep->declBus(c+28,"riscx if_u mini_dec_u dec_jalr_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+29,"riscx if_u mini_dec_u dec_bjp_imm_o", false,-1, 31,0);
        tracep->declBus(c+35,"riscx if_u mini_dec_u opcode", false,-1, 6,0);
        tracep->declBus(c+36,"riscx if_u mini_dec_u bjp_imm_bxx", false,-1, 31,0);
        tracep->declBus(c+37,"riscx if_u mini_dec_u bjp_imm_jal", false,-1, 31,0);
        tracep->declBus(c+38,"riscx if_u mini_dec_u bjp_imm_jalr", false,-1, 31,0);
        tracep->declBit(c+76,"riscx if_id_u clk", false,-1);
        tracep->declBit(c+77,"riscx if_id_u rst_n", false,-1);
        tracep->declBit(c+84,"riscx if_id_u stall_i", false,-1);
        tracep->declBus(c+2,"riscx if_id_u if_pc_i", false,-1, 31,0);
        tracep->declBus(c+3,"riscx if_id_u if_instr_i", false,-1, 31,0);
        tracep->declBit(c+4,"riscx if_id_u if_prdt_taken_i", false,-1);
        tracep->declBus(c+5,"riscx if_id_u if_id_pc_o", false,-1, 31,0);
        tracep->declBus(c+6,"riscx if_id_u if_id_instr_o", false,-1, 31,0);
        tracep->declBit(c+78,"riscx if_id_u if_id_prdt_taken_o", false,-1);
        tracep->declBit(c+85,"riscx if_id_u wen", false,-1);
        tracep->declBus(c+86,"riscx if_id_u pc_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx if_id_u pc_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx if_id_u pc_dff clk", false,-1);
        tracep->declBit(c+77,"riscx if_id_u pc_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx if_id_u pc_dff wen", false,-1);
        tracep->declBus(c+2,"riscx if_id_u pc_dff din", false,-1, 31,0);
        tracep->declBus(c+5,"riscx if_id_u pc_dff qout", false,-1, 31,0);
        tracep->declBus(c+5,"riscx if_id_u pc_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+86,"riscx if_id_u instr_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx if_id_u instr_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx if_id_u instr_dff clk", false,-1);
        tracep->declBit(c+77,"riscx if_id_u instr_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx if_id_u instr_dff wen", false,-1);
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
        tracep->declBus(c+79,"riscx id_u dec_pc_o", false,-1, 31,0);
        tracep->declBus(c+80,"riscx id_u dec_instr_o", false,-1, 31,0);
        tracep->declBus(c+11,"riscx id_u dec_rs1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+11,"riscx id_u dec_rs2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+13,"riscx id_u dec_imm_o", false,-1, 31,0);
        tracep->declBus(c+14,"riscx id_u dec_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+15,"riscx id_u dec_rd_en_o", false,-1);
        tracep->declBus(c+39,"riscx id_u opcode", false,-1, 6,0);
        tracep->declBus(c+14,"riscx id_u rd", false,-1, 4,0);
        tracep->declBus(c+40,"riscx id_u fun3", false,-1, 2,0);
        tracep->declBus(c+9,"riscx id_u rs1", false,-1, 4,0);
        tracep->declBus(c+10,"riscx id_u rs2", false,-1, 4,0);
        tracep->declBus(c+41,"riscx id_u fun7", false,-1, 6,0);
        tracep->declBus(c+86,"riscx regfile_u reg_num", false,-1, 31,0);
        tracep->declBit(c+76,"riscx regfile_u clk", false,-1);
        tracep->declBit(c+77,"riscx regfile_u rst_n", false,-1);
        tracep->declBit(c+88,"riscx regfile_u rd_en_i", false,-1);
        tracep->declBus(c+89,"riscx regfile_u rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+90,"riscx regfile_u rd_wdata_i", false,-1, 31,0);
        tracep->declBit(c+7,"riscx regfile_u rs1_en_i", false,-1);
        tracep->declBit(c+8,"riscx regfile_u rs2_en_i", false,-1);
        tracep->declBus(c+9,"riscx regfile_u rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+10,"riscx regfile_u rs2_idx_i", false,-1, 4,0);
        tracep->declBus(c+11,"riscx regfile_u rs1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+12,"riscx regfile_u rs2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+91,"riscx regfile_u rs1_x1_rdata_o", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+42+i*1,"riscx regfile_u reg_data", true,(i+1), 31,0);}}
        tracep->declBus(c+73,"riscx regfile_u i", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u rst_n", false,-1);
        tracep->declBit(c+84,"riscx id_ex_u stall_i", false,-1);
        tracep->declBus(c+79,"riscx id_ex_u dec_pc_i", false,-1, 31,0);
        tracep->declBus(c+80,"riscx id_ex_u dec_instr_i", false,-1, 31,0);
        tracep->declBus(c+11,"riscx id_ex_u dec_rs1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+11,"riscx id_ex_u dec_rs2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+13,"riscx id_ex_u dec_imm_i", false,-1, 31,0);
        tracep->declBus(c+14,"riscx id_ex_u dec_rd_idx_i", false,-1, 4,0);
        tracep->declBit(c+15,"riscx id_ex_u dec_rd_en_i", false,-1);
        tracep->declBit(c+78,"riscx id_ex_u if_id_prdt_taken_i", false,-1);
        tracep->declBus(c+16,"riscx id_ex_u id_ex_pc_o", false,-1, 31,0);
        tracep->declBus(c+81,"riscx id_ex_u id_ex_instr_o", false,-1, 31,0);
        tracep->declBus(c+17,"riscx id_ex_u id_ex_rs1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+18,"riscx id_ex_u id_ex_rs2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+19,"riscx id_ex_u id_ex_imm_o", false,-1, 31,0);
        tracep->declBus(c+21,"riscx id_ex_u id_ex_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+22,"riscx id_ex_u id_ex_rd_en_o", false,-1);
        tracep->declBit(c+20,"riscx id_ex_u id_ex_prdt_taken_o", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u wen", false,-1);
        tracep->declBus(c+86,"riscx id_ex_u pc_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx id_ex_u pc_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u pc_dff clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u pc_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u pc_dff wen", false,-1);
        tracep->declBus(c+79,"riscx id_ex_u pc_dff din", false,-1, 31,0);
        tracep->declBus(c+16,"riscx id_ex_u pc_dff qout", false,-1, 31,0);
        tracep->declBus(c+74,"riscx id_ex_u pc_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+86,"riscx id_ex_u instr_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx id_ex_u instr_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u instr_dff clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u instr_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u instr_dff wen", false,-1);
        tracep->declBus(c+80,"riscx id_ex_u instr_dff din", false,-1, 31,0);
        tracep->declBus(c+16,"riscx id_ex_u instr_dff qout", false,-1, 31,0);
        tracep->declBus(c+75,"riscx id_ex_u instr_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+86,"riscx id_ex_u alu_op1_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx id_ex_u alu_op1_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u alu_op1_dff clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u alu_op1_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u alu_op1_dff wen", false,-1);
        tracep->declBus(c+11,"riscx id_ex_u alu_op1_dff din", false,-1, 31,0);
        tracep->declBus(c+17,"riscx id_ex_u alu_op1_dff qout", false,-1, 31,0);
        tracep->declBus(c+17,"riscx id_ex_u alu_op1_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+86,"riscx id_ex_u alu_op2_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx id_ex_u alu_op2_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u alu_op2_dff clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u alu_op2_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u alu_op2_dff wen", false,-1);
        tracep->declBus(c+11,"riscx id_ex_u alu_op2_dff din", false,-1, 31,0);
        tracep->declBus(c+18,"riscx id_ex_u alu_op2_dff qout", false,-1, 31,0);
        tracep->declBus(c+18,"riscx id_ex_u alu_op2_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+86,"riscx id_ex_u alu_fun_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx id_ex_u alu_fun_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u alu_fun_dff clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u alu_fun_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u alu_fun_dff wen", false,-1);
        tracep->declBus(c+13,"riscx id_ex_u alu_fun_dff din", false,-1, 31,0);
        tracep->declBus(c+19,"riscx id_ex_u alu_fun_dff qout", false,-1, 31,0);
        tracep->declBus(c+19,"riscx id_ex_u alu_fun_dff qout_r", false,-1, 31,0);
        tracep->declBus(c+92,"riscx id_ex_u rd_idx_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx id_ex_u rd_idx_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u rd_idx_dff clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u rd_idx_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u rd_idx_dff wen", false,-1);
        tracep->declBus(c+14,"riscx id_ex_u rd_idx_dff din", false,-1, 4,0);
        tracep->declBus(c+21,"riscx id_ex_u rd_idx_dff qout", false,-1, 4,0);
        tracep->declBus(c+21,"riscx id_ex_u rd_idx_dff qout_r", false,-1, 4,0);
        tracep->declBus(c+93,"riscx id_ex_u rd_en_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx id_ex_u rd_en_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u rd_en_dff clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u rd_en_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u rd_en_dff wen", false,-1);
        tracep->declBus(c+15,"riscx id_ex_u rd_en_dff din", false,-1, 0,0);
        tracep->declBus(c+22,"riscx id_ex_u rd_en_dff qout", false,-1, 0,0);
        tracep->declBus(c+22,"riscx id_ex_u rd_en_dff qout_r", false,-1, 0,0);
        tracep->declBus(c+93,"riscx id_ex_u prdt_taken_dff DW", false,-1, 31,0);
        tracep->declBus(c+87,"riscx id_ex_u prdt_taken_dff RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+76,"riscx id_ex_u prdt_taken_dff clk", false,-1);
        tracep->declBit(c+77,"riscx id_ex_u prdt_taken_dff rst_n", false,-1);
        tracep->declBit(c+85,"riscx id_ex_u prdt_taken_dff wen", false,-1);
        tracep->declBus(c+78,"riscx id_ex_u prdt_taken_dff din", false,-1, 0,0);
        tracep->declBus(c+20,"riscx id_ex_u prdt_taken_dff qout", false,-1, 0,0);
        tracep->declBus(c+20,"riscx id_ex_u prdt_taken_dff qout_r", false,-1, 0,0);
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
        tracep->fullBit(oldp+8,((1U & ((0x40U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                        ? (IData)((0x23U 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                        : (IData)((0x33U 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))))));
        tracep->fullCData(oldp+9,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+10,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+11,(vlSelf->riscx__DOT__rf_rs1_rdata),32);
        tracep->fullIData(oldp+12,(vlSelf->riscx__DOT__rf_rs2_rdata),32);
        tracep->fullIData(oldp+13,(vlSelf->riscx__DOT__dec_imm),32);
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))),5);
        tracep->fullBit(oldp+15,(vlSelf->riscx__DOT__dec_rd_en));
        tracep->fullIData(oldp+16,(vlSelf->riscx__DOT__id_ex_pc),32);
        tracep->fullIData(oldp+17,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+18,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+19,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r),32);
        tracep->fullBit(oldp+20,(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r));
        tracep->fullCData(oldp+21,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_idx_dff__DOT__qout_r),5);
        tracep->fullBit(oldp+22,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_en_dff__DOT__qout_r));
        tracep->fullIData(oldp+23,(((IData)(vlSelf->riscx__DOT__ex_pipe_flush)
                                     ? vlSelf->riscx__DOT__ex_pipe_flush_pc
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
        tracep->fullBit(oldp+24,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp));
        tracep->fullBit(oldp+25,((0x63U == (0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
        tracep->fullBit(oldp+26,((0x6fU == (0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
        tracep->fullBit(oldp+27,((0x67U == (0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
        tracep->fullCData(oldp+28,((0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                             >> 0xfU))),5);
        tracep->fullIData(oldp+29,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm),32);
        tracep->fullBit(oldp+30,((0U == (0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 0xfU)))));
        tracep->fullBit(oldp+31,((1U == (0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 0xfU)))));
        tracep->fullIData(oldp+32,(((0x67U == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                     ? ((0U == (0x1fU 
                                                & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                   >> 0xfU)))
                                         ? 0U : 4U)
                                     : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
        tracep->fullIData(oldp+33,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
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
        tracep->fullIData(oldp+34,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                     & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                     ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                     : 4U)),32);
        tracep->fullCData(oldp+35,((0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)),7);
        tracep->fullIData(oldp+36,((((- (IData)((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
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
        tracep->fullIData(oldp+37,((((- (IData)((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
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
        tracep->fullIData(oldp+38,((((- (IData)((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                 >> 0x14U))),32);
        tracep->fullCData(oldp+39,((0x7fU & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)),7);
        tracep->fullCData(oldp+40,((7U & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+41,((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                    >> 0x19U)),7);
        tracep->fullIData(oldp+42,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[0]),32);
        tracep->fullIData(oldp+43,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[1]),32);
        tracep->fullIData(oldp+44,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[2]),32);
        tracep->fullIData(oldp+45,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[3]),32);
        tracep->fullIData(oldp+46,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[4]),32);
        tracep->fullIData(oldp+47,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[5]),32);
        tracep->fullIData(oldp+48,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[6]),32);
        tracep->fullIData(oldp+49,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[7]),32);
        tracep->fullIData(oldp+50,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[8]),32);
        tracep->fullIData(oldp+51,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[9]),32);
        tracep->fullIData(oldp+52,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[10]),32);
        tracep->fullIData(oldp+53,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[11]),32);
        tracep->fullIData(oldp+54,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[12]),32);
        tracep->fullIData(oldp+55,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[13]),32);
        tracep->fullIData(oldp+56,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[14]),32);
        tracep->fullIData(oldp+57,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[15]),32);
        tracep->fullIData(oldp+58,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[16]),32);
        tracep->fullIData(oldp+59,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[17]),32);
        tracep->fullIData(oldp+60,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[18]),32);
        tracep->fullIData(oldp+61,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[19]),32);
        tracep->fullIData(oldp+62,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[20]),32);
        tracep->fullIData(oldp+63,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[21]),32);
        tracep->fullIData(oldp+64,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[22]),32);
        tracep->fullIData(oldp+65,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[23]),32);
        tracep->fullIData(oldp+66,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[24]),32);
        tracep->fullIData(oldp+67,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[25]),32);
        tracep->fullIData(oldp+68,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[26]),32);
        tracep->fullIData(oldp+69,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[27]),32);
        tracep->fullIData(oldp+70,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[28]),32);
        tracep->fullIData(oldp+71,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[29]),32);
        tracep->fullIData(oldp+72,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[30]),32);
        tracep->fullIData(oldp+73,(vlSelf->riscx__DOT__regfile_u__DOT__i),32);
        tracep->fullIData(oldp+74,(vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r),32);
        tracep->fullIData(oldp+75,(vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r),32);
        tracep->fullBit(oldp+76,(vlSelf->clk));
        tracep->fullBit(oldp+77,(vlSelf->rst_n));
        tracep->fullBit(oldp+78,(vlSelf->riscx__DOT__if_id_prdt_taken));
        tracep->fullIData(oldp+79,(vlSelf->riscx__DOT__dec_pc),32);
        tracep->fullIData(oldp+80,(vlSelf->riscx__DOT__dec_instr),32);
        tracep->fullIData(oldp+81,(vlSelf->riscx__DOT__id_ex_instr),32);
        tracep->fullBit(oldp+82,(vlSelf->riscx__DOT__ex_pipe_flush));
        tracep->fullIData(oldp+83,(vlSelf->riscx__DOT__ex_pipe_flush_pc),32);
        tracep->fullBit(oldp+84,(0U));
        tracep->fullBit(oldp+85,(1U));
        tracep->fullIData(oldp+86,(0x20U),32);
        tracep->fullIData(oldp+87,(0U),32);
        tracep->fullBit(oldp+88,(vlSelf->riscx__DOT__regfile_u__DOT__rd_en_i));
        tracep->fullCData(oldp+89,(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i),5);
        tracep->fullIData(oldp+90,(vlSelf->riscx__DOT__regfile_u__DOT__rd_wdata_i),32);
        tracep->fullIData(oldp+91,(vlSelf->riscx__DOT__regfile_u__DOT__rs1_x1_rdata_o),32);
        tracep->fullIData(oldp+92,(5U),32);
        tracep->fullIData(oldp+93,(1U),32);
    }
}
