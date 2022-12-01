// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscx.h for the primary calling header

#include "Vriscx___024root.h"
#include "Vriscx__Syms.h"

//==========

VL_INLINE_OPT void Vriscx___024root___sequent__TOP__1(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst_n) {
        vlSelf->riscx__DOT__if_idu__DOT__instr_dff_lr__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__if_idu__DOT__pc_dff_lr__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__pru__DOT__pc_r = (vlSelf->riscx__DOT__ifu__DOT__pc_add_op1 
                                              + (((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                                  & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                                  ? vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm
                                                  : 4U));
    } else {
        vlSelf->riscx__DOT__if_idu__DOT__instr_dff_lr__DOT__qout_r 
            = vlSelf->riscx__DOT__if_instr;
        vlSelf->riscx__DOT__if_idu__DOT__pc_dff_lr__DOT__qout_r 
            = vlSelf->riscx__DOT__pru__DOT__pc_r;
        vlSelf->riscx__DOT__pru__DOT__pc_r = 0U;
    }
    vlSelf->riscx__DOT__ifu__DOT__pc_add_op1 = (((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                                 & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                                 ? 
                                                ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                       >> 0xfU)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                        >> 0xfU)))
                                                    ? 1U
                                                    : 2U))
                                                  : vlSelf->riscx__DOT__pru__DOT__pc_r)
                                                 : vlSelf->riscx__DOT__pru__DOT__pc_r);
}

void Vriscx___024root___eval(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vriscx___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vriscx___024root___change_request_1(Vriscx___024root* vlSelf);

VL_INLINE_OPT QData Vriscx___024root___change_request(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___change_request\n"); );
    // Body
    return (Vriscx___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vriscx___024root___change_request_1(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vriscx___024root___eval_debug_assertions(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
