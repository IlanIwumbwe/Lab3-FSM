#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f f1_fsm.vcd

# run Verilator to translate Verlig into C++, including C++ testbench
verilator -Wall --trace --cc f1_fsm.sv --exe f1_fsm_tb.cpp

# build C++ project via make file automatically generated by Verilator
make -j -C obj_dir/ -f Vf1_fsm.mk Vf1_fsm

# run the executable simulation file
obj_dir/Vf1_fsm