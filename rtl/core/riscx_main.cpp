#include "verilated_vcd_c.h" //添加VCD头文件
#include "Vriscx.h"  //这里因为新建的rtl文件为top.c，所以需要改为Vtop.h即可。
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

vluint64_t main_time = 0;  //initial 仿真时间

double sc_time_stamp()
{
	return main_time;
}

int main(int argc, char** argv, char** env) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vriscx* riscx = new Vriscx{contextp};
    //VCD波形设置  start
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    riscx->trace(tfp, 0);
    tfp->open("wave.vcd");
    //VCD波形设置  end
    int clk = 1;
    int rst_n = 1;
    while (sc_time_stamp() < 20 && !contextp->gotFinish()) {
        int dnxt = rand() % 100;

        riscx->clk = clk;
        riscx->rst_n = rst_n;

        riscx->eval();
        
        printf("clk = %d, rst_n = %d\n", clk, rst_n);
        
        //contextp->timeInc(1);
        tfp->dump(main_time);
        main_time++;
        clk = 1 - clk;
    }
    delete riscx;
    tfp->close();	
    delete contextp;
    return 0;
}