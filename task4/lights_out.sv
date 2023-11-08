module lights_out #(
    parameter DATA_WIDTH = 8,
    parameter RANDOM_N_WIDTH = 7
) (
    input logic clk,
    input logic rst,
    input logic trigger,
    input logic [15:0] clktickN,
    output logic [DATA_WIDTH-1:0] data_out
);

    logic [RANDOM_N_WIDTH-1:0] random_n;
    logic random_pulse;
    logic one_second_pulse;
    logic cmd_seq = 1'b1;
    logic cmd_delay = 1'b0;

    lfsr LFSR(
        .clk(clk),
        .data_out(random_n)
    );  

    delay Delay(
        .n(random_n),
        .trigger(cmd_delay),
        .rst(rst),
        .clk(clk),
        .time_out(random_pulse)
    );

    clktick ClkTick(
        .clk(clk),
        .rst(rst),
        .en(cmd_seq),
        .N(clktickN),
        .tick(one_second_pulse)
    );

    f1_fsm F1FSM(
        .rst(rst),
        .trigger(trigger),
        .clk(clk),
        .en((cmd_seq) ? one_second_pulse : random_pulse),
        .cmd_seq(cmd_seq),
        .cmd_delay(cmd_delay),
        .data_out(data_out)
    );   

endmodule
