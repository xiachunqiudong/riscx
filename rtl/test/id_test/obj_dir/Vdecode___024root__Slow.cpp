// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode.h for the primary calling header

#include "Vdecode___024root.h"
#include "Vdecode__Syms.h"

//==========


void Vdecode___024root___ctor_var_reset(Vdecode___024root* vlSelf);

Vdecode___024root::Vdecode___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdecode___024root___ctor_var_reset(this);
}

void Vdecode___024root::__Vconfigure(Vdecode__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdecode___024root::~Vdecode___024root() {
}

void Vdecode___024root___eval_initial(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_initial\n"); );
}

void Vdecode___024root___combo__TOP__1(Vdecode___024root* vlSelf);

void Vdecode___024root___eval_settle(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_settle\n"); );
    // Body
    Vdecode___024root___combo__TOP__1(vlSelf);
}

void Vdecode___024root___final(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___final\n"); );
}

void Vdecode___024root___ctor_var_reset(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->instr_i = VL_RAND_RESET_I(32);
    vlSelf->dec_rs1_idx_o = VL_RAND_RESET_I(5);
    vlSelf->dec_rs2_idx_o = VL_RAND_RESET_I(5);
    vlSelf->dec_rd_idx_o = VL_RAND_RESET_I(5);
    vlSelf->dec_rs1_en_o = VL_RAND_RESET_I(1);
    vlSelf->dec_rs2_en_o = VL_RAND_RESET_I(1);
    vlSelf->dec_rd_en_o = VL_RAND_RESET_I(1);
    vlSelf->dec_imm_o = VL_RAND_RESET_I(32);
    vlSelf->dec_rs1_i = VL_RAND_RESET_I(32);
    vlSelf->dec_rs2_i = VL_RAND_RESET_I(32);
}
