// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode__Syms.h"


void Vdecode___024root__traceChgSub0(Vdecode___024root* vlSelf, VerilatedVcd* tracep);

void Vdecode___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdecode___024root* const __restrict vlSelf = static_cast<Vdecode___024root*>(voidSelf);
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vdecode___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdecode___024root__traceChgSub0(Vdecode___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgIData(oldp+0,(vlSelf->instr_i),32);
        tracep->chgCData(oldp+1,(vlSelf->dec_rs1_idx_o),5);
        tracep->chgCData(oldp+2,(vlSelf->dec_rs2_idx_o),5);
        tracep->chgCData(oldp+3,(vlSelf->dec_rd_idx_o),5);
        tracep->chgBit(oldp+4,(vlSelf->dec_rs1_en_o));
        tracep->chgBit(oldp+5,(vlSelf->dec_rs2_en_o));
        tracep->chgBit(oldp+6,(vlSelf->dec_rd_en_o));
        tracep->chgIData(oldp+7,(vlSelf->dec_imm_o),32);
        tracep->chgIData(oldp+8,(vlSelf->dec_rs1_i),32);
        tracep->chgIData(oldp+9,(vlSelf->dec_rs2_i),32);
        tracep->chgCData(oldp+10,((0x7fU & vlSelf->instr_i)),7);
        tracep->chgCData(oldp+11,((0x1fU & (vlSelf->instr_i 
                                            >> 7U))),5);
        tracep->chgCData(oldp+12,((7U & (vlSelf->instr_i 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+13,((0x1fU & (vlSelf->instr_i 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+14,((0x1fU & (vlSelf->instr_i 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+15,((vlSelf->instr_i 
                                   >> 0x19U)),7);
    }
}

void Vdecode___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vdecode___024root* const __restrict vlSelf = static_cast<Vdecode___024root*>(voidSelf);
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
