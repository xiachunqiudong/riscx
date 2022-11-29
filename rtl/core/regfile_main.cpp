#include "verilated_vcd_c.h" //添加VCD头文件
#include "Vregfile.h"  //这里因为新建的rtl文件为top.c，所以需要改为Vtop.h即可。
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
    Vregfile* top = new Vregfile{contextp};
    //VCD波形设置  start
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");
    //VCD波形设置  end
    int clk = 0;
    int rst_n = 1;
    while (sc_time_stamp() < 20 && !contextp->gotFinish()) {
        int dnxt = rand() % 100;

        top->clk = clk;
        top->rst_n = rst_n;

        top->rd_en_i = 1;
        top->rd_idx_i = 1;
        top->rd_wdata_i = 10;

        top->rs1_idx_i = 1;

        top->eval();
        
        printf("clk = %d, rst_n = %d, rs1 = %d\n", clk, rst_n, top->rs1_rdata_o);
        
        //contextp->timeInc(1);
        tfp->dump(main_time);
        main_time++;
        clk = 1 - clk;
    }
    delete top;
    tfp->close();	
    delete contextp;
    return 0;
}