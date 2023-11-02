#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_delay.h"

// vbuddy
#include "vbuddy.cpp"

// definitions
#define MAX_SIM_CYCLES 1000000

int main(int argc, char** argv, char** env){
    Verilated::commandArgs(argc, argv);
    Vf1_delay* top = new Vf1_delay;

    // init trace dump
    Verilated::traceEverOn(true);  // turn on signal tracing
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("f1_delay.vcd");  // dump waveform data into 'counter.vcd'

    // init Vbuddy
    if(vbdOpen() != 1){return (-1);}
    vbdHeader("Lab3.3:F1 delay");

    // initialisations
    top->_clk = 1;
    top->_en = 1;
    top->_rst = 1;
    top->_N = 14; // clock tick after N+1 cycles to produce 1 pulse every second

    for(int simcycles = 0; simcycles < MAX_SIM_CYCLES; simcycles++){

        for(int tick = 0; tick < 2; tick++){
            top->_clk = !top->_clk;
            tfp->dump(2*simcycles + tick);
            top->eval();
        }

        top->_rst = simcycles < 2;
        top->_N = vbdValue();

        vbdBar(top->_data_out & 0xFF);
        
        if(Verilated::gotFinish()){
            exit(0);
        }

    }

    vbdClose();
    tfp->close();
    exit(0);
}