#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr.h"

// vbuddy
#include "vbuddy.cpp"

// definitions
#define MAX_SIM_CYCLES 1000000

int main(int argc, char** argv, char** env){
    int simcycles = 0;
    int tick = 0; // each clock cycle has 2 ticks, one for each edge (rising and falling)

    Verilated::commandArgs(argc, argv);
    Vlfsr* top = new Vlfsr;

    // init trace dump
    Verilated::traceEverOn(true);  // turn on signal tracing
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("lfsr.vcd");  // dump waveform data into 'counter.vcd'

    // init Vbuddy
    if(vbdOpen() != 1){return(-1);}
    vbdHeader("Lab3.1: FSM");
    vbdSetMode(1); // put flag into one-shot mode

    // initialisations
    top->clk = 1;
    top->en = 1;
    top->rst = 0;

    for(; simcycles < MAX_SIM_CYCLES; simcycles++){

        for(tick = 0; tick < 2; tick++){
            tfp->dump(2*simcycles + tick);
            top->clk = !top->clk;
            top->eval();
        }

        vbdHex(1, top->data_out & 0xF);
        vbdHex(2, (top->data_out >> 4) & 0xF);
        vbdBar(top->data_out & 0xFF);
        vbdCycle(simcycles+1);

        top->rst = simcycles < 2;
        top->en = vbdFlag();

        if(Verilated::gotFinish()){
            exit(0);
        }   

    }

    vbdClose();
    tfp->close();
    exit(0);
}