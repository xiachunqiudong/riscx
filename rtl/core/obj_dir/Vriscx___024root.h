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
    CData/*0:0*/ riscx__DOT__ifu__DOT__if_req_valid_o;
    CData/*0:0*/ riscx__DOT__ifu__DOT__if_req_ready_i;
    CData/*0:0*/ riscx__DOT__ifu__DOT__if_resp_valid_i;
    CData/*0:0*/ riscx__DOT__ifu__DOT__if_resp_ready_o;
    CData/*0:0*/ riscx__DOT__ifu__DOT__if_resp_err_i;
    CData/*0:0*/ riscx__DOT__ifu__DOT__dec_bjp;
    CData/*0:0*/ riscx__DOT__ifu__DOT__prdt_taken;
    IData/*31:0*/ riscx__DOT__if_instr;
    IData/*31:0*/ riscx__DOT__pru__DOT__pc_r;
    IData/*31:0*/ riscx__DOT__ifu__DOT__if_req_pc_o;
    IData/*31:0*/ riscx__DOT__ifu__DOT__if_resp_instr_i;
    IData/*31:0*/ riscx__DOT__ifu__DOT__dec_bjp_imm;
    IData/*31:0*/ riscx__DOT__ifu__DOT__pc_add_op1;
    IData/*31:0*/ riscx__DOT__if_idu__DOT__pc_dff_lr__DOT__qout_r;
    IData/*31:0*/ riscx__DOT__if_idu__DOT__instr_dff_lr__DOT__qout_r;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
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
