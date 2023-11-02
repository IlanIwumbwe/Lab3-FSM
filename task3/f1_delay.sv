module f1_delay #(
    parameter DATA_WIDTH = 8
) (
    input logic [15:0] _N,
    input logic _en,
    input logic _rst,
    input logic _clk,
    output logic [DATA_WIDTH-1:0] _data_out
);

    logic tick; 

    clktick Tick(
        .clk(_clk),
        .rst(_rst),
        .en(_en),
        .N(_N),
        .tick(tick)
    );

    f1_fsm FSM(
        .rst(_rst),
        .en(tick),
        .clk(_clk),
        .data_out(_data_out)
    );
    
endmodule