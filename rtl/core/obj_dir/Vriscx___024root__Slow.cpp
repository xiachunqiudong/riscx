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

void Vriscx___024root___initial__TOP__1(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x636f6465U;
    __Vtemp1[2U] = 0x2e2fU;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 ,  &(vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem)
                 , 0, ~0ULL);
}

void Vriscx___024root___settle__TOP__3(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->riscx__DOT__mem_rd_wdata = ((3U == (0x7fU 
                                                & vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r))
                                         ? ((vlSelf->riscx__DOT__mem_u__DOT__memory
                                             [(0x3ffU 
                                               & ((IData)(3U) 
                                                  + vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r))] 
                                             << 0x18U) 
                                            | ((vlSelf->riscx__DOT__mem_u__DOT__memory
                                                [(0x3ffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r))] 
                                                << 0x10U) 
                                               | ((vlSelf->riscx__DOT__mem_u__DOT__memory
                                                   [
                                                   (0x3ffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r))] 
                                                   << 8U) 
                                                  | vlSelf->riscx__DOT__mem_u__DOT__memory
                                                  [
                                                  (0x3ffU 
                                                   & vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r)])))
                                         : 0U);
    vlSelf->riscx__DOT__ex_u__DOT__al_ali = ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                             | (0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)));
    vlSelf->riscx__DOT__ex_u__DOT__alu_op1 = ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))
                                               ? 0U
                                               : ((
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                   | (0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))
                                                   ? vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r
                                                   : vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r));
    vlSelf->riscx__DOT__ex_u__DOT__alu_op2 = (((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                               | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))
                                               ? vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r
                                               : ((
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                                   | (0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))
                                                   ? 4U
                                                   : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r));
    if ((0x40U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)) {
        vlSelf->riscx__DOT__dec_imm = ((0x20U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                        ? ((0x10U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                            ? 0U : 
                                           ((8U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                             ? ((4U 
                                                 & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r) 
                                                         | ((0x800U 
                                                             & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                  >> 0x14U))))))
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : ((4U 
                                                 & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0x14U))
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((2U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                  >> 7U))))))
                                                   : 0U)
                                                  : 0U))))
                                        : 0U);
        vlSelf->riscx__DOT__dec_rs2_en = (1U & (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))));
        vlSelf->riscx__DOT__dec_rd_en = (1U & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                >> 5U) 
                                               & ((0x10U 
                                                   & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                   ? (IData)(
                                                             (3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? (IData)(
                                                              (7U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                    : (IData)(
                                                              (7U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))))));
        vlSelf->riscx__DOT__dec_rs1_en = (1U & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                 >> 5U) 
                                                & ((0x10U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? (IData)(
                                                              (3U 
                                                               == 
                                                               (0x400fU 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                    : 
                                                   ((~ 
                                                     (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 3U)) 
                                                    & ((4U 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                        ? 
                                                       ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 1U) 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                        : 
                                                       ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 1U) 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))));
    } else {
        vlSelf->riscx__DOT__dec_imm = ((0x20U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                        ? ((0x10U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                            ? ((8U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))
                                            : ((8U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                        : ((0x10U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                            ? ((8U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))
                                            : ((8U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))));
        vlSelf->riscx__DOT__dec_rs2_en = (1U & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                 >> 5U) 
                                                & ((0x10U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? (IData)(
                                                              (3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                    : (IData)(
                                                              (3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))));
        vlSelf->riscx__DOT__dec_rd_en = (1U & ((0x20U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? (IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x18U 
                                                             & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)) 
                                                           & ((4U 
                                                               & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                               ? 
                                                              ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 1U) 
                                                               & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                               : 
                                                              ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 1U) 
                                                               & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 
                                                   ((~ 
                                                     (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 3U)) 
                                                    & ((4U 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                        ? 
                                                       ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 1U) 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                        : 
                                                       ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 1U) 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                    : (IData)(
                                                              (3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))));
        vlSelf->riscx__DOT__dec_rs1_en = (1U & ((0x20U 
                                                 & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                 ? 
                                                ((0x10U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                  : (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                  : (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))));
    }
    vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
        = ((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem
            [(0x3ffU & ((IData)(3U) + vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r))] 
            << 0x18U) | ((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem
                          [(0x3ffU & ((IData)(2U) + vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r))] 
                          << 0x10U) | ((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem
                                        [(0x3ffU & 
                                          ((IData)(1U) 
                                           + vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r))] 
                                        << 8U) | vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem
                                       [(0x3ffU & vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)])));
    vlSelf->riscx__DOT__ex_rd_en = (((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                     | (0x37U == (0x7fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)));
    vlSelf->riscx__DOT__ex_u__DOT__sub_res = ((IData)(1U) 
                                              + (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                                 + 
                                                 (~ vlSelf->riscx__DOT__ex_u__DOT__alu_op2)));
    vlSelf->riscx__DOT__ex_u__DOT__xor_res = (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                              ^ vlSelf->riscx__DOT__ex_u__DOT__alu_op2);
    vlSelf->riscx__DOT__rf_rs1_rdata = ((1U & ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                    >> 0xfU))) 
                                               | (~ (IData)(vlSelf->riscx__DOT__dec_rs1_en))))
                                         ? 0U : (((0x1fU 
                                                   & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i))
                                                  ? vlSelf->riscx__DOT__regfile_u__DOT__rd_wdata_i
                                                  : 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                        >> 0xfU) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->riscx__DOT__regfile_u__DOT__reg_data
                                                  [
                                                  (0x1fU 
                                                   & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                   : 0U)));
    vlSelf->riscx__DOT__if_u__DOT__dec_bjp = (((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)) 
                                               | (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)));
    vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm = ((
                                                   ((- (IData)(
                                                               (0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)))) 
                                                    & (((- (IData)(
                                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
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
                                                                      >> 7U))))))) 
                                                   | ((- (IData)(
                                                                 (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)))) 
                                                      & (((- (IData)(
                                                                     (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0x15U) 
                                                         | ((0x100000U 
                                                             & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                >> 0xbU)) 
                                                            | ((0xff000U 
                                                                & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr) 
                                                               | ((0x800U 
                                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                        >> 0x14U)))))))) 
                                                  | ((- (IData)(
                                                                (0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)))) 
                                                     & (((- (IData)(
                                                                    (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                           >> 0x14U))));
    vlSelf->riscx__DOT__ex_u__DOT__branch_res = (((
                                                   ((((IData)(
                                                              (0x63U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->riscx__DOT__ex_u__DOT__xor_res)))) 
                                                     | ((IData)(
                                                                (0x1063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                        & (0U 
                                                           != vlSelf->riscx__DOT__ex_u__DOT__xor_res))) 
                                                    | ((IData)(
                                                               (0x4063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                       & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                                          >> 0x1fU))) 
                                                   | ((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                      & (~ 
                                                         (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                                          >> 0x1fU)))) 
                                                  | ((IData)(
                                                             (0x6063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                     & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                                        >> 0x1fU))) 
                                                 | ((IData)(
                                                            (0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                    & (~ 
                                                       (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                                        >> 0x1fU))));
    vlSelf->riscx__DOT__ex_alu_res = (((((((((((- (IData)(
                                                          (((((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                                     >> 0xcU)))) 
                                                             | ((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                                                | (0x23U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))) 
                                                            | (0x37U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                           | (0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))) 
                                               & (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                                  + vlSelf->riscx__DOT__ex_u__DOT__alu_op2)) 
                                              | ((- (IData)((IData)(
                                                                    (0x40000033U 
                                                                     == 
                                                                     (0x4000707fU 
                                                                      & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))) 
                                                 & vlSelf->riscx__DOT__ex_u__DOT__sub_res)) 
                                             | ((- (IData)(
                                                           ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                            & (1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                                   >> 0xcU)))))) 
                                                & vlSelf->riscx__DOT__ex_u__DOT__sll_res)) 
                                            | ((- (IData)(
                                                          ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                           & (IData)(
                                                                     (0x5000U 
                                                                      == 
                                                                      (0x40007000U 
                                                                       & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))))) 
                                               & vlSelf->riscx__DOT__ex_u__DOT__srl_res)) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                          & (IData)(
                                                                    (0x40005000U 
                                                                     == 
                                                                     (0x40007000U 
                                                                      & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))))) 
                                              & vlSelf->riscx__DOT__ex_u__DOT__sra_res)) 
                                          | ((- (IData)(
                                                        ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                         & (7U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0xcU)))))) 
                                             & (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                                & vlSelf->riscx__DOT__ex_u__DOT__alu_op2))) 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                        & (6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                               >> 0xcU)))))) 
                                            & (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                               | vlSelf->riscx__DOT__ex_u__DOT__alu_op2))) 
                                        | ((- (IData)(
                                                      ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                       & (4U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                              >> 0xcU)))))) 
                                           & vlSelf->riscx__DOT__ex_u__DOT__xor_res)) 
                                       | ((- (IData)(
                                                     ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                      & (2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                             >> 0xcU)))))) 
                                          & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                             >> 0x1fU))) 
                                      | ((- (IData)(
                                                    ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                     & (3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                            >> 0xcU)))))) 
                                         & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                            >> 0x1fU)));
    vlSelf->riscx__DOT__if_u__DOT__prdt_taken = (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))) 
                                                 | ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)) 
                                                    & (vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm 
                                                       >> 0x1fU)));
    vlSelf->riscx__DOT__if_u__DOT__pc_add_op1 = (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                                  & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                                  ? 
                                                 ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                        >> 0xfU)))
                                                    ? 0U
                                                    : 4U)
                                                   : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                                  : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r);
}

void Vriscx___024root___eval_initial(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___eval_initial\n"); );
    // Body
    Vriscx___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vriscx___024root___eval_settle(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___eval_settle\n"); );
    // Body
    Vriscx___024root___settle__TOP__3(vlSelf);
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
    vlSelf->riscx__DOT__if_id_prdt_taken = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__dec_rs1_en = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__dec_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__rf_rs1_rdata = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__dec_imm = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__dec_rd_en = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ex_pipe_flush = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ex_alu_res = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_rd_en = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ex_mem_rs2_rdata = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__mem_rd_wdata = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__if_u__DOT__dec_bjp = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__if_u__DOT__prdt_taken = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__if_u__DOT__pc_add_op1 = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->riscx__DOT__if_id_u__DOT__pc_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__regfile_u__DOT__rd_en_i = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i = VL_RAND_RESET_I(5);
    vlSelf->riscx__DOT__regfile_u__DOT__rd_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__regfile_u__DOT__rs1_x1_rdata_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscx__DOT__regfile_u__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__id_ex_u__DOT__rd_idx_dff__DOT__qout_r = VL_RAND_RESET_I(5);
    vlSelf->riscx__DOT__id_ex_u__DOT__rd_en_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ex_u__DOT__al_ali = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ex_u__DOT__alu_op1 = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_u__DOT__alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_u__DOT__sub_res = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_u__DOT__sll_res = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_u__DOT__srl_res = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_u__DOT__sra_res = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_u__DOT__xor_res = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_u__DOT__branch_res = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ex_mem_u__DOT__pc_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r = VL_RAND_RESET_I(5);
    vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->riscx__DOT__mem_u__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->riscx__DOT__mem_u__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
