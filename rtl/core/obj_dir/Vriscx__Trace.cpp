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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 4U)
                                            : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r) 
                                      + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                          & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                          ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                          : 4U))),32);
            tracep->chgIData(oldp+1,(vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+2,(vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr),32);
            tracep->chgBit(oldp+3,(vlSelf->riscx__DOT__if_u__DOT__prdt_taken));
            tracep->chgIData(oldp+4,(vlSelf->riscx__DOT__if_id_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+5,(vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r),32);
            tracep->chgBit(oldp+6,(vlSelf->riscx__DOT__dec_rs1_en));
            tracep->chgBit(oldp+7,((1U & ((0x40U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                           ? (IData)(
                                                     (0x23U 
                                                      == 
                                                      (0x3fU 
                                                       & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                           : (IData)(
                                                     (0x33U 
                                                      == 
                                                      (0x3fU 
                                                       & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))))));
            tracep->chgCData(oldp+8,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+9,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0x14U))),5);
            tracep->chgIData(oldp+10,(vlSelf->riscx__DOT__rf_rs1_rdata),32);
            tracep->chgIData(oldp+11,(vlSelf->riscx__DOT__rf_rs2_rdata),32);
            tracep->chgIData(oldp+12,(vlSelf->riscx__DOT__dec_imm),32);
            tracep->chgCData(oldp+13,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgBit(oldp+14,(vlSelf->riscx__DOT__dec_rd_en));
            tracep->chgIData(oldp+15,(vlSelf->riscx__DOT__id_ex_pc),32);
            tracep->chgIData(oldp+16,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+17,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+18,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r),32);
            tracep->chgBit(oldp+19,(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r));
            tracep->chgCData(oldp+20,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_idx_dff__DOT__qout_r),5);
            tracep->chgBit(oldp+21,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_en_dff__DOT__qout_r));
            tracep->chgIData(oldp+22,(((IData)(vlSelf->riscx__DOT__ex_pipe_flush)
                                        ? vlSelf->riscx__DOT__ex_pipe_flush_pc
                                        : ((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                             & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                             ? ((0x67U 
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
                                             : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r) 
                                           + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                               & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                               ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                               : 4U)))),32);
            tracep->chgBit(oldp+23,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp));
            tracep->chgBit(oldp+24,((0x63U == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgBit(oldp+25,((0x6fU == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgBit(oldp+26,((0x67U == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgCData(oldp+27,((0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                >> 0xfU))),5);
            tracep->chgIData(oldp+28,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm),32);
            tracep->chgBit(oldp+29,((0U == (0x1fU & 
                                            (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                             >> 0xfU)))));
            tracep->chgBit(oldp+30,((1U == (0x1fU & 
                                            (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                             >> 0xfU)))));
            tracep->chgIData(oldp+31,(((0x67U == (0x7fU 
                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                        ? ((0U == (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                      >> 0xfU)))
                                            ? 0U : 4U)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
            tracep->chgIData(oldp+32,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 4U)
                                            : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
            tracep->chgIData(oldp+33,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                        : 4U)),32);
            tracep->chgCData(oldp+34,((0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)),7);
            tracep->chgIData(oldp+35,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 7U))))))),32);
            tracep->chgIData(oldp+36,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0x15U) | 
                                       ((0x100000U 
                                         & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr) 
                                           | ((0x800U 
                                               & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x14U))))))),32);
            tracep->chgIData(oldp+37,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                        >> 0x14U))),32);
            tracep->chgCData(oldp+38,((0x7fU & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)),7);
            tracep->chgCData(oldp+39,((7U & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+40,((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                       >> 0x19U)),7);
            tracep->chgIData(oldp+41,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[0]),32);
            tracep->chgIData(oldp+42,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[1]),32);
            tracep->chgIData(oldp+43,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[2]),32);
            tracep->chgIData(oldp+44,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[3]),32);
            tracep->chgIData(oldp+45,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[4]),32);
            tracep->chgIData(oldp+46,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[5]),32);
            tracep->chgIData(oldp+47,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[6]),32);
            tracep->chgIData(oldp+48,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[7]),32);
            tracep->chgIData(oldp+49,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[8]),32);
            tracep->chgIData(oldp+50,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[9]),32);
            tracep->chgIData(oldp+51,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[10]),32);
            tracep->chgIData(oldp+52,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[11]),32);
            tracep->chgIData(oldp+53,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[12]),32);
            tracep->chgIData(oldp+54,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[13]),32);
            tracep->chgIData(oldp+55,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[14]),32);
            tracep->chgIData(oldp+56,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[15]),32);
            tracep->chgIData(oldp+57,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[16]),32);
            tracep->chgIData(oldp+58,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[17]),32);
            tracep->chgIData(oldp+59,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[18]),32);
            tracep->chgIData(oldp+60,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[19]),32);
            tracep->chgIData(oldp+61,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[20]),32);
            tracep->chgIData(oldp+62,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[21]),32);
            tracep->chgIData(oldp+63,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[22]),32);
            tracep->chgIData(oldp+64,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[23]),32);
            tracep->chgIData(oldp+65,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[24]),32);
            tracep->chgIData(oldp+66,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[25]),32);
            tracep->chgIData(oldp+67,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[26]),32);
            tracep->chgIData(oldp+68,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[27]),32);
            tracep->chgIData(oldp+69,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[28]),32);
            tracep->chgIData(oldp+70,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[29]),32);
            tracep->chgIData(oldp+71,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[30]),32);
            tracep->chgIData(oldp+72,(vlSelf->riscx__DOT__regfile_u__DOT__i),32);
            tracep->chgIData(oldp+73,(vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+74,(vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r),32);
        }
        tracep->chgBit(oldp+75,(vlSelf->clk));
        tracep->chgBit(oldp+76,(vlSelf->rst_n));
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
