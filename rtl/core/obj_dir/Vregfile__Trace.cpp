// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


void Vregfile___024root__traceChgSub0(Vregfile___024root* vlSelf, VerilatedVcd* tracep);

void Vregfile___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vregfile___024root* const __restrict vlSelf = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vregfile___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vregfile___024root__traceChgSub0(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->regfile__DOT__reg_data[0]),32);
            tracep->chgIData(oldp+1,(vlSelf->regfile__DOT__reg_data[1]),32);
            tracep->chgIData(oldp+2,(vlSelf->regfile__DOT__reg_data[2]),32);
            tracep->chgIData(oldp+3,(vlSelf->regfile__DOT__reg_data[3]),32);
            tracep->chgIData(oldp+4,(vlSelf->regfile__DOT__reg_data[4]),32);
            tracep->chgIData(oldp+5,(vlSelf->regfile__DOT__reg_data[5]),32);
            tracep->chgIData(oldp+6,(vlSelf->regfile__DOT__reg_data[6]),32);
            tracep->chgIData(oldp+7,(vlSelf->regfile__DOT__reg_data[7]),32);
            tracep->chgIData(oldp+8,(vlSelf->regfile__DOT__reg_data[8]),32);
            tracep->chgIData(oldp+9,(vlSelf->regfile__DOT__reg_data[9]),32);
            tracep->chgIData(oldp+10,(vlSelf->regfile__DOT__reg_data[10]),32);
            tracep->chgIData(oldp+11,(vlSelf->regfile__DOT__reg_data[11]),32);
            tracep->chgIData(oldp+12,(vlSelf->regfile__DOT__reg_data[12]),32);
            tracep->chgIData(oldp+13,(vlSelf->regfile__DOT__reg_data[13]),32);
            tracep->chgIData(oldp+14,(vlSelf->regfile__DOT__reg_data[14]),32);
            tracep->chgIData(oldp+15,(vlSelf->regfile__DOT__reg_data[15]),32);
            tracep->chgIData(oldp+16,(vlSelf->regfile__DOT__reg_data[16]),32);
            tracep->chgIData(oldp+17,(vlSelf->regfile__DOT__reg_data[17]),32);
            tracep->chgIData(oldp+18,(vlSelf->regfile__DOT__reg_data[18]),32);
            tracep->chgIData(oldp+19,(vlSelf->regfile__DOT__reg_data[19]),32);
            tracep->chgIData(oldp+20,(vlSelf->regfile__DOT__reg_data[20]),32);
            tracep->chgIData(oldp+21,(vlSelf->regfile__DOT__reg_data[21]),32);
            tracep->chgIData(oldp+22,(vlSelf->regfile__DOT__reg_data[22]),32);
            tracep->chgIData(oldp+23,(vlSelf->regfile__DOT__reg_data[23]),32);
            tracep->chgIData(oldp+24,(vlSelf->regfile__DOT__reg_data[24]),32);
            tracep->chgIData(oldp+25,(vlSelf->regfile__DOT__reg_data[25]),32);
            tracep->chgIData(oldp+26,(vlSelf->regfile__DOT__reg_data[26]),32);
            tracep->chgIData(oldp+27,(vlSelf->regfile__DOT__reg_data[27]),32);
            tracep->chgIData(oldp+28,(vlSelf->regfile__DOT__reg_data[28]),32);
            tracep->chgIData(oldp+29,(vlSelf->regfile__DOT__reg_data[29]),32);
            tracep->chgIData(oldp+30,(vlSelf->regfile__DOT__reg_data[30]),32);
            tracep->chgIData(oldp+31,(vlSelf->regfile__DOT__i),32);
        }
        tracep->chgBit(oldp+32,(vlSelf->clk));
        tracep->chgBit(oldp+33,(vlSelf->rst_n));
        tracep->chgBit(oldp+34,(vlSelf->rd_en_i));
        tracep->chgCData(oldp+35,(vlSelf->rd_idx_i),6);
        tracep->chgIData(oldp+36,(vlSelf->rd_wdata_i),32);
        tracep->chgCData(oldp+37,(vlSelf->rs1_idx_i),5);
        tracep->chgCData(oldp+38,(vlSelf->rs2_idx_i),5);
        tracep->chgIData(oldp+39,(vlSelf->rs1_rdata_o),32);
        tracep->chgIData(oldp+40,(vlSelf->rs2_rdata_o),32);
        tracep->chgIData(oldp+41,(vlSelf->rs1_x1_rdata_o),32);
    }
}

void Vregfile___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vregfile___024root* const __restrict vlSelf = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
