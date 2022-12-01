// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscx__Syms.h"


void Vriscx___024root__traceChgSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep);

void Vriscx___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscx___024root* const __restrict vlSelf = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vriscx___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscx___024root__traceChgSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlSelf->riscx__DOT__ifu__DOT__dec_bjp));
            tracep->chgIData(oldp+1,(vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm),32);
            tracep->chgBit(oldp+2,(vlSelf->riscx__DOT__ifu__DOT__prdt_taken));
            tracep->chgIData(oldp+3,((((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                       & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                       ? vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm
                                       : 4U)),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+4,(((((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                        ? ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                    >> 0xfU)))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                        >> 0xfU)))
                                                    ? 1U
                                                    : 2U))
                                            : vlSelf->riscx__DOT__pru__DOT__pc_r)
                                        : vlSelf->riscx__DOT__pru__DOT__pc_r) 
                                      + (((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                          & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                          ? vlSelf->riscx__DOT__ifu__DOT__dec_bjp_imm
                                          : 4U))),32);
            tracep->chgIData(oldp+5,(vlSelf->riscx__DOT__pru__DOT__pc_r),32);
            tracep->chgIData(oldp+6,(vlSelf->riscx__DOT__if_idu__DOT__pc_dff_lr__DOT__qout_r),32);
            tracep->chgIData(oldp+7,(vlSelf->riscx__DOT__if_idu__DOT__instr_dff_lr__DOT__qout_r),32);
            tracep->chgIData(oldp+8,(((0x67U == (0x7fU 
                                                 & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))
                                       ? ((0U == (0x1fU 
                                                  & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                     >> 0xfU)))
                                           ? 0U : (
                                                   (1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                        >> 0xfU)))
                                                    ? 1U
                                                    : 2U))
                                       : vlSelf->riscx__DOT__pru__DOT__pc_r)),32);
            tracep->chgIData(oldp+9,((((IData)(vlSelf->riscx__DOT__ifu__DOT__dec_bjp) 
                                       & (IData)(vlSelf->riscx__DOT__ifu__DOT__prdt_taken))
                                       ? ((0x67U == 
                                           (0x7fU & vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i))
                                           ? ((0U == 
                                               (0x1fU 
                                                & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                   >> 0xfU)))
                                               ? 0U
                                               : ((1U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscx__DOT__ifu__DOT__if_resp_instr_i 
                                                       >> 0xfU)))
                                                   ? 1U
                                                   : 2U))
                                           : vlSelf->riscx__DOT__pru__DOT__pc_r)
                                       : vlSelf->riscx__DOT__pru__DOT__pc_r)),32);
        }
        tracep->chgBit(oldp+10,(vlSelf->clk));
        tracep->chgBit(oldp+11,(vlSelf->rst_n));
    }
}

void Vriscx___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vriscx___024root* const __restrict vlSelf = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
