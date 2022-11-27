// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode.h for the primary calling header

#include "Vdecode___024root.h"
#include "Vdecode__Syms.h"

//==========

VL_INLINE_OPT void Vdecode___024root___combo__TOP__1(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___combo__TOP__1\n"); );
    // Body
    if ((0x40U & vlSelf->instr_i)) {
        vlSelf->dec_rs1_idx_o = (0x1fU & (vlSelf->instr_i 
                                          >> 0xfU));
        vlSelf->dec_rd_en_o = (1U & (IData)(((0x20U 
                                              == (0x38U 
                                                  & vlSelf->instr_i)) 
                                             & ((4U 
                                                 & vlSelf->instr_i)
                                                 ? 
                                                ((vlSelf->instr_i 
                                                  >> 1U) 
                                                 & vlSelf->instr_i)
                                                 : 
                                                ((vlSelf->instr_i 
                                                  >> 1U) 
                                                 & vlSelf->instr_i)))));
        vlSelf->dec_rs2_idx_o = (0x1fU & ((0x20U & vlSelf->instr_i)
                                           ? ((0x10U 
                                               & vlSelf->instr_i)
                                               ? (vlSelf->instr_i 
                                                  >> 0x14U)
                                               : ((8U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  (vlSelf->instr_i 
                                                   >> 0x14U)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->instr_i)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->instr_i 
                                                      >> 0x14U))
                                                     : 
                                                    (vlSelf->instr_i 
                                                     >> 0x14U))
                                                    : 
                                                   (vlSelf->instr_i 
                                                    >> 0x14U))))
                                           : (vlSelf->instr_i 
                                              >> 0x14U)));
        vlSelf->dec_rs1_en_o = (1U & (IData)(((0x20U 
                                               == (0x30U 
                                                   & vlSelf->instr_i)) 
                                              & ((8U 
                                                  & vlSelf->instr_i)
                                                  ? (IData)(
                                                            (7U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->instr_i)))
                                                  : (IData)(
                                                            (7U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->instr_i)))))));
        vlSelf->dec_rs2_en_o = (1U & (IData)((0x2fU 
                                              == (0x3fU 
                                                  & vlSelf->instr_i))));
        vlSelf->dec_imm_o = ((0x20U & vlSelf->instr_i)
                              ? ((0x10U & vlSelf->instr_i)
                                  ? 0U : ((8U & vlSelf->instr_i)
                                           ? ((4U & vlSelf->instr_i)
                                               ? ((2U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->instr_i 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->instr_i 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->instr_i) 
                                                          | ((0x800U 
                                                              & (vlSelf->instr_i 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->instr_i 
                                                                   >> 0x14U))))))
                                                    : 0U)
                                                   : 0U)
                                               : 0U)
                                           : ((4U & vlSelf->instr_i)
                                               ? ((2U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->instr_i 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->instr_i 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->instr_i 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->instr_i 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->instr_i 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->instr_i 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->instr_i 
                                                                   >> 7U))))))
                                                    : 0U)
                                                   : 0U))))
                              : 0U);
    } else {
        vlSelf->dec_rs1_idx_o = (0x1fU & ((0x20U & vlSelf->instr_i)
                                           ? ((0x10U 
                                               & vlSelf->instr_i)
                                               ? ((8U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  (vlSelf->instr_i 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->instr_i)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->instr_i 
                                                      >> 0xfU))
                                                     : 
                                                    (vlSelf->instr_i 
                                                     >> 0xfU))
                                                    : 
                                                   (vlSelf->instr_i 
                                                    >> 0xfU)))
                                               : (vlSelf->instr_i 
                                                  >> 0xfU))
                                           : ((0x10U 
                                               & vlSelf->instr_i)
                                               ? ((8U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  (vlSelf->instr_i 
                                                   >> 0xfU)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->instr_i)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->instr_i 
                                                      >> 0xfU))
                                                     : 
                                                    (vlSelf->instr_i 
                                                     >> 0xfU))
                                                    : 
                                                   (vlSelf->instr_i 
                                                    >> 0xfU)))
                                               : (vlSelf->instr_i 
                                                  >> 0xfU))));
        vlSelf->dec_rd_en_o = (1U & ((0x20U & vlSelf->instr_i)
                                      ? (IData)(((0x10U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->instr_i)) 
                                                 & ((4U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((vlSelf->instr_i 
                                                      >> 1U) 
                                                     & vlSelf->instr_i)
                                                     : 
                                                    ((vlSelf->instr_i 
                                                      >> 1U) 
                                                     & vlSelf->instr_i))))
                                      : (IData)(((0x10U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->instr_i)) 
                                                 & ((4U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((vlSelf->instr_i 
                                                      >> 1U) 
                                                     & vlSelf->instr_i)
                                                     : 
                                                    ((vlSelf->instr_i 
                                                      >> 1U) 
                                                     & vlSelf->instr_i))))));
        vlSelf->dec_rs2_idx_o = (0x1fU & ((0x20U & vlSelf->instr_i)
                                           ? ((0x10U 
                                               & vlSelf->instr_i)
                                               ? ((8U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  (vlSelf->instr_i 
                                                   >> 0x14U)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->instr_i)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->instr_i 
                                                      >> 0x14U))
                                                     : 
                                                    (vlSelf->instr_i 
                                                     >> 0x14U))
                                                    : 
                                                   (vlSelf->instr_i 
                                                    >> 0x14U)))
                                               : (vlSelf->instr_i 
                                                  >> 0x14U))
                                           : ((0x10U 
                                               & vlSelf->instr_i)
                                               ? ((8U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  (vlSelf->instr_i 
                                                   >> 0x14U)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->instr_i)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->instr_i 
                                                      >> 0x14U))
                                                     : 
                                                    (vlSelf->instr_i 
                                                     >> 0x14U))
                                                    : 
                                                   ((2U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->instr_i)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->instr_i 
                                                      >> 0x14U))
                                                     : 
                                                    (vlSelf->instr_i 
                                                     >> 0x14U))))
                                               : (vlSelf->instr_i 
                                                  >> 0x14U))));
        vlSelf->dec_rs1_en_o = (1U & ((0x20U & vlSelf->instr_i)
                                       ? (IData)((0x13U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->instr_i)))
                                       : (IData)((0x13U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->instr_i)))));
        vlSelf->dec_rs2_en_o = (1U & (IData)((0x33U 
                                              == (0x3fU 
                                                  & vlSelf->instr_i))));
        vlSelf->dec_imm_o = ((0x20U & vlSelf->instr_i)
                              ? ((0x10U & vlSelf->instr_i)
                                  ? ((8U & vlSelf->instr_i)
                                      ? 0U : ((4U & vlSelf->instr_i)
                                               ? ((2U 
                                                   & vlSelf->instr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->instr_i)
                                                    : 0U)
                                                   : 0U)
                                               : 0U))
                                  : 0U) : ((0x10U & vlSelf->instr_i)
                                            ? ((8U 
                                                & vlSelf->instr_i)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->instr_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->instr_i)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->instr_i)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->instr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->instr_i)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->instr_i 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->instr_i 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))
                                            : 0U));
    }
}

void Vdecode___024root___eval(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval\n"); );
    // Body
    Vdecode___024root___combo__TOP__1(vlSelf);
}

QData Vdecode___024root___change_request_1(Vdecode___024root* vlSelf);

VL_INLINE_OPT QData Vdecode___024root___change_request(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___change_request\n"); );
    // Body
    return (Vdecode___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdecode___024root___change_request_1(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdecode___024root___eval_debug_assertions(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
