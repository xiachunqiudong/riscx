// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile.h for the primary calling header

#ifndef VERILATED_VREGFILE___024ROOT_H_
#define VERILATED_VREGFILE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vregfile__Syms;
class Vregfile_VerilatedVcd;


//----------

VL_MODULE(Vregfile___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(rd_en_i,0,0);
    VL_IN8(rd_idx_i,5,0);
    VL_IN8(rs1_idx_i,4,0);
    VL_IN8(rs2_idx_i,4,0);
    VL_IN(rd_wdata_i,31,0);
    VL_OUT(rs1_rdata_o,31,0);
    VL_OUT(rs2_rdata_o,31,0);
    VL_OUT(rs1_x1_rdata_o,31,0);

    // LOCAL SIGNALS
    IData/*31:0*/ regfile__DOT__i;
    VlUnpacked<IData/*31:0*/, 31> regfile__DOT__reg_data;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    IData/*31:0*/ regfile__DOT____Vlvbound1;
    IData/*31:0*/ regfile__DOT____Vlvbound2;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vregfile__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vregfile___024root);  ///< Copying not allowed
  public:
    Vregfile___024root(const char* name);
    ~Vregfile___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vregfile__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
