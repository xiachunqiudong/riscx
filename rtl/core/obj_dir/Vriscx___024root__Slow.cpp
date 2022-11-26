// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscx.h for the primary calling header

#include "Vriscx___024root.h"
#include "Vriscx__Syms.h"

//==========


void Vriscx___024root___ctor_var_reset(Vriscx___024root* vlSelf);

Vriscx___024root::Vriscx___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscx___024root___ctor_var_reset(this);
}

void Vriscx___024root::__Vconfigure(Vriscx__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vriscx___024root::~Vriscx___024root() {
}

void Vriscx___024root___settle__TOP__2(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->riscx__DOT__ifu__DOT__dec_bjp = (((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->riscx__DOT__ifu__DOT__instr)) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->riscx__DOT__ifu__DOT__instr))) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscx__DOT__ifu__DOT__instr)));
    vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm = (((
                                                   (- (IData)(
                                                              (0x63U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->riscx__DOT__ifu__DOT__instr)))) 
                                                   & (((- (IData)(
                                                                  (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xdU) 
                                                      | ((0x1000U 
                                                          & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                             >> 0x13U)) 
                                                         | ((0x800U 
                                                             & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                                     >> 7U))))))) 
                                                  | ((- (IData)(
                                                                (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->riscx__DOT__ifu__DOT__instr)))) 
                                                     & (((- (IData)(
                                                                    (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | ((0x100000U 
                                                            & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->riscx__DOT__ifu__DOT__instr) 
                                                              | ((0x800U 
                                                                  & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                                       >> 0x14U)))))))) 
                                                 | ((- (IData)(
                                                               (0x67U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->riscx__DOT__ifu__DOT__instr)))) 
                                                    & (((- (IData)(
                                                                   (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                          >> 0x14U))));
    vlSelf->riscx__DOT__ifu__DOT__prdt_taken = (((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->riscx__DOT__ifu__DOT__instr)) 
                                                 | (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->riscx__DOT__ifu__DOT__instr))) 
                                                | ((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->riscx__DOT__ifu__DOT__instr)) 
                                                   & (vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm 
                                                      >> 0x1fU)));
    vlSelf->riscx__DOT__ifu__DOT__pc_add_op1 = (((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                                 & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                                 ? 
                                                ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->riscx__DOT__ifu__DOT__instr))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                       >> 0xfU)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscx__DOT__ifu__DOT__instr 
                                                        >> 0xfU)))
                                                    ? 1U
                                                    : 2U))
                                                  : vlSelf->riscx__DOT__pru__DOT__pc_r)
                                                 : vlSelf->riscx__DOT__pru__DOT__pc_r);
}

void Vriscx___024root___eval_initial(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vriscx___024root___eval_settle(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___eval_settle\n"); );
    // Body
    Vriscx___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vriscx___024root___final(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___final\n"); );
}

void Vriscx___024root___ctor_var_reset(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__if2if_id_reg_instr = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__if2if_id_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__pru__DOT__pc_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ifu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ifu__DOT__dec_bjp = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ifu__DOT__prdt_taken = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ifu__DOT__pc_add_op1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
