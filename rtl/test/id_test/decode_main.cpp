#include "verilated_vcd_c.h" //添加VCD头文件
#include "Vdecode.h"  //这里因为新建的rtl文件为top.c，所以需要改为Vtop.h即可。
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string>
#include <iostream>

using namespace std;

vluint64_t main_time = 0;  //initial 仿真时间

double sc_time_stamp()
{
	return main_time;
}

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vdecode* decode = new Vdecode{contextp};
    //VCD波形设置  start
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    decode->trace(tfp, 0);
    tfp->open("wave.vcd");
    //VCD波形设置  end

    while (sc_time_stamp() < 20 && !contextp->gotFinish()) {
        
        int instr = 30;
        decode->instr_i = instr;

        decode->eval();
        
        printf("instr = %d, imm = %d\n", instr, decode->dec_imm_o);
        
        //contextp->timeInc(1);
        tfp->dump(main_time);
        main_time++;

    }
    delete decode;
    tfp->close();	
    delete contextp;
    return 0;
}