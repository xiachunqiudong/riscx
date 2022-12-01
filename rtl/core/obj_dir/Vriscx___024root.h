// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscx.h for the primary calling header

#ifndef VERILATED_VRISCX___024ROOT_H_
#define VERILATED_VRISCX___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vriscx__Syms;
class Vriscx_VerilatedVcd;


//----------

VL_MODULE(Vriscx___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ riscx__DOT__dec_rs1_en;
    CData/*0:0*/ riscx__DOT__if_u__DOT__dec_bjp;
    CData/*0:0*/ riscx__DOT__if_u__DOT__prdt_taken;
    CData/*0:0*/ riscx__DOT__id_u__DOT__dec_rd_en_o;
    CData/*3:0*/ riscx__DOT__id_u__DOT__dec_alu_fun_o;
    CData/*0:0*/ riscx__DOT__regfile_u__DOT__rd_en_i;
    CData/*4:0*/ riscx__DOT__regfile_u__DOT__rd_idx_i;
    IData/*31:0*/ riscx__DOT__rf_rs1_rdata;
    IData/*31:0*/ riscx__DOT__pc_reg_u__DOT__pc_r;
    IData/*31:0*/ riscx__DOT__if_u__DOT__dec_bjp_imm;
    IData/*31:0*/ riscx__DOT__if_u__DOT__pc_add_op1;
    IData/*31:0*/ riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr;
    IData/*31:0*/ riscx__DOT__if_id_u__DOT__pc_dff_lr__DOT__qout_r;
    IData/*31:0*/ riscx__DOT__if_id_u__DOT__instr_dff_lr__DOT__qout_r;
    IData/*31:0*/ riscx__DOT__id_u__DOT__dec_pc_o;
    IData/*31:0*/ riscx__DOT__id_u__DOT__dec_instr_o;
    IData/*31:0*/ riscx__DOT__id_u__DOT__dec_alu_op1_o;
    IData/*31:0*/ riscx__DOT__id_u__DOT__dec_alu_op2_o;
    IData/*31:0*/ riscx__DOT__id_u__DOT__dec_imm_o;
    IData/*31:0*/ riscx__DOT__regfile_u__DOT__rd_wdata_i;
    IData/*31:0*/ riscx__DOT__regfile_u__DOT__rs1_x1_rdata_o;
    IData/*31:0*/ riscx__DOT__regfile_u__DOT__i;
    VlUnpacked<CData/*7:0*/, 1024> riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem;
    VlUnpacked<IData/*31:0*/, 31> riscx__DOT__regfile_u__DOT__reg_data;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    IData/*31:0*/ riscx__DOT__regfile_u__DOT____Vlvbound1;
    IData/*31:0*/ riscx__DOT__regfile_u__DOT____Vlvbound2;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vriscx__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscx___024root);  ///< Copying not allowed
  public:
    Vriscx___024root(const char* name);
    ~Vriscx___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vriscx__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
