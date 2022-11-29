// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile___024root.h"
#include "Vregfile__Syms.h"

//==========


void Vregfile___024root___ctor_var_reset(Vregfile___024root* vlSelf);

Vregfile___024root::Vregfile___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vregfile___024root___ctor_var_reset(this);
}

void Vregfile___024root::__Vconfigure(Vregfile__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vregfile___024root::~Vregfile___024root() {
}

void Vregfile___024root___eval_initial(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vregfile___024root___settle__TOP__2(Vregfile___024root* vlSelf);

void Vregfile___024root___eval_settle(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_settle\n"); );
    // Body
    Vregfile___024root___settle__TOP__2(vlSelf);
}

void Vregfile___024root___final(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___final\n"); );
}

void Vregfile___024root___ctor_var_reset(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->rd_en_i = VL_RAND_RESET_I(1);
    vlSelf->rd_idx_i = VL_RAND_RESET_I(6);
    vlSelf->rd_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->rs1_idx_i = VL_RAND_RESET_I(5);
    vlSelf->rs2_idx_i = VL_RAND_RESET_I(5);
    vlSelf->rs1_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->rs2_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->rs1_x1_rdata_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->regfile__DOT__reg_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->regfile__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->regfile__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    vlSelf->regfile__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
