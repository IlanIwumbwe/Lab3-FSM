#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlights_out.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char** argv, char** env){
    int time_elapsed = 0;
    
    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vlights_out* top = new Vlights_out;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("lights_out.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("L3:T4");
    vbdSetMode(1);        // Flag mode set to one-shot

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->trigger = 1;

    for(int sim_cycles = 0; sim_cycles < MAX_SIM_CYC; sim_cycles++){
        
        for(int tick = 0; tick < 2; tick++){
            tfp->dump(2*sim_cycles+tick);
            top->clk = !top->clk;
            top->eval();
        }

        // show output on vbdBAR
        vbdBar(top->data_out & 0xFF);

        if(top->data_out == 0){
            vbdInitWatch();
        }
        time_elapsed = vbdElapsed();

        vbdHex(1, time_elapsed & 0xF);
        vbdHex(2, (time_elapsed >> 4) & 0xF);
        vbdHex(3, (time_elapsed >> 8) & 0xF);
        vbdHex(4, (time_elapsed >> 12) & 0xF);

        vbdCycle(sim_cycles+1);

        top->rst = sim_cycles < 2;
        top->clktickN = vbdValue();
        top->trigger = vbdFlag();

        if(Verilated::gotFinish()){exit(0);}

    }

    vbdClose();
    tfp->close();
    exit(0);
}