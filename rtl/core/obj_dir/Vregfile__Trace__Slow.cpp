// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


void Vregfile___024root__traceInitSub0(Vregfile___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vregfile___024root__traceInitTop(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vregfile___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vregfile___024root__traceInitSub0(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+33,"clk", false,-1);
        tracep->declBit(c+34,"rst_n", false,-1);
        tracep->declBit(c+35,"rd_en_i", false,-1);
        tracep->declBus(c+36,"rd_idx_i", false,-1, 5,0);
        tracep->declBus(c+37,"rd_wdata_i", false,-1, 31,0);
        tracep->declBus(c+38,"rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+39,"rs2_idx_i", false,-1, 4,0);
        tracep->declBus(c+40,"rs1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+41,"rs2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+42,"rs1_x1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+43,"regfile reg_num", false,-1, 31,0);
        tracep->declBit(c+33,"regfile clk", false,-1);
        tracep->declBit(c+34,"regfile rst_n", false,-1);
        tracep->declBit(c+35,"regfile rd_en_i", false,-1);
        tracep->declBus(c+36,"regfile rd_idx_i", false,-1, 5,0);
        tracep->declBus(c+37,"regfile rd_wdata_i", false,-1, 31,0);
        tracep->declBus(c+38,"regfile rs1_idx_i", false,-1, 4,0);
        tracep->declBus(c+39,"regfile rs2_idx_i", false,-1, 4,0);
        tracep->declBus(c+40,"regfile rs1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+41,"regfile rs2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+42,"regfile rs1_x1_rdata_o", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+1+i*1,"regfile reg_data", true,(i+1), 31,0);}}
        tracep->declBus(c+32,"regfile i", false,-1, 31,0);
    }
}

void Vregfile___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vregfile___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vregfile___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vregfile___024root__traceRegister(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vregfile___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vregfile___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vregfile___024root__traceCleanup, vlSelf);
    }
}

void Vregfile___024root__traceFullSub0(Vregfile___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vregfile___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vregfile___024root* const __restrict vlSelf = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vregfile___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vregfile___024root__traceFullSub0(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->regfile__DOT__reg_data[0]),32);
        tracep->fullIData(oldp+2,(vlSelf->regfile__DOT__reg_data[1]),32);
        tracep->fullIData(oldp+3,(vlSelf->regfile__DOT__reg_data[2]),32);
        tracep->fullIData(oldp+4,(vlSelf->regfile__DOT__reg_data[3]),32);
        tracep->fullIData(oldp+5,(vlSelf->regfile__DOT__reg_data[4]),32);
        tracep->fullIData(oldp+6,(vlSelf->regfile__DOT__reg_data[5]),32);
        tracep->fullIData(oldp+7,(vlSelf->regfile__DOT__reg_data[6]),32);
        tracep->fullIData(oldp+8,(vlSelf->regfile__DOT__reg_data[7]),32);
        tracep->fullIData(oldp+9,(vlSelf->regfile__DOT__reg_data[8]),32);
        tracep->fullIData(oldp+10,(vlSelf->regfile__DOT__reg_data[9]),32);
        tracep->fullIData(oldp+11,(vlSelf->regfile__DOT__reg_data[10]),32);
        tracep->fullIData(oldp+12,(vlSelf->regfile__DOT__reg_data[11]),32);
        tracep->fullIData(oldp+13,(vlSelf->regfile__DOT__reg_data[12]),32);
        tracep->fullIData(oldp+14,(vlSelf->regfile__DOT__reg_data[13]),32);
        tracep->fullIData(oldp+15,(vlSelf->regfile__DOT__reg_data[14]),32);
        tracep->fullIData(oldp+16,(vlSelf->regfile__DOT__reg_data[15]),32);
        tracep->fullIData(oldp+17,(vlSelf->regfile__DOT__reg_data[16]),32);
        tracep->fullIData(oldp+18,(vlSelf->regfile__DOT__reg_data[17]),32);
        tracep->fullIData(oldp+19,(vlSelf->regfile__DOT__reg_data[18]),32);
        tracep->fullIData(oldp+20,(vlSelf->regfile__DOT__reg_data[19]),32);
        tracep->fullIData(oldp+21,(vlSelf->regfile__DOT__reg_data[20]),32);
        tracep->fullIData(oldp+22,(vlSelf->regfile__DOT__reg_data[21]),32);
        tracep->fullIData(oldp+23,(vlSelf->regfile__DOT__reg_data[22]),32);
        tracep->fullIData(oldp+24,(vlSelf->regfile__DOT__reg_data[23]),32);
        tracep->fullIData(oldp+25,(vlSelf->regfile__DOT__reg_data[24]),32);
        tracep->fullIData(oldp+26,(vlSelf->regfile__DOT__reg_data[25]),32);
        tracep->fullIData(oldp+27,(vlSelf->regfile__DOT__reg_data[26]),32);
        tracep->fullIData(oldp+28,(vlSelf->regfile__DOT__reg_data[27]),32);
        tracep->fullIData(oldp+29,(vlSelf->regfile__DOT__reg_data[28]),32);
        tracep->fullIData(oldp+30,(vlSelf->regfile__DOT__reg_data[29]),32);
        tracep->fullIData(oldp+31,(vlSelf->regfile__DOT__reg_data[30]),32);
        tracep->fullIData(oldp+32,(vlSelf->regfile__DOT__i),32);
        tracep->fullBit(oldp+33,(vlSelf->clk));
        tracep->fullBit(oldp+34,(vlSelf->rst_n));
        tracep->fullBit(oldp+35,(vlSelf->rd_en_i));
        tracep->fullCData(oldp+36,(vlSelf->rd_idx_i),6);
        tracep->fullIData(oldp+37,(vlSelf->rd_wdata_i),32);
        tracep->fullCData(oldp+38,(vlSelf->rs1_idx_i),5);
        tracep->fullCData(oldp+39,(vlSelf->rs2_idx_i),5);
        tracep->fullIData(oldp+40,(vlSelf->rs1_rdata_o),32);
        tracep->fullIData(oldp+41,(vlSelf->rs2_rdata_o),32);
        tracep->fullIData(oldp+42,(vlSelf->rs1_x1_rdata_o),32);
        tracep->fullIData(oldp+43,(0x20U),32);
    }
}
