#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_fsm.h"

// vbuddy
#include "vbuddy.cpp"

// definitions
#define MAX_SIM_CYCLES 1000000

int main(int argc, char** argv, char** env){
    Verilated::commandArgs(argc, argv);
    Vf1_fsm* top = new Vf1_fsm;

    // init trace dump
    Verilated::traceEverOn(true);  // turn on signal tracing
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("f1_fsm.vcd");  // dump waveform data into 'counter.vcd'

    // init Vbuddy
    if(vbdOpen() != 1){return (-1);}
    vbdHeader("Lab 3.2: F1");
    vbdSetMode(1);

    // initialisations
    top->clk = 1;
    top->en = 1;
    top->rst = 1;

    for(int simcycles = 0; simcycles < MAX_SIM_CYCLES; simcycles++){

        for(int tick = 0; tick < 2; tick++){
            top->clk = !top->clk;
            tfp->dump(2*simcycles + tick);
            top->eval();
        }

        top->en = vbdFlag();
        top->rst = simcycles < 2;

        vbdBar(top->data_out & 0xFF);
        
        if(Verilated::gotFinish()){
            exit(0);
        }

    }

    vbdClose();
    tfp->close();
    exit(0);
}