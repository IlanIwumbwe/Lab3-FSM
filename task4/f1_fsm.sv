module f1_fsm #(
    parameter DATA_WIDTH = 8
) (
    input logic rst, 
    input logic en,
    input logic clk,
    input logic trigger,
    output logic cmd_seq,
    output logic cmd_delay,
    output logic [DATA_WIDTH-1:0] data_out
);

    // define states
    typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8} state;
    state current_state, next_state;

    always_ff @(posedge clk) begin
        if (rst) current_state <= S0;
        else current_state <= next_state;
    end

    // next state logic
    always_comb 
        case (current_state)
            S0 : if(en && trigger) next_state = S1; else next_state = current_state;
            S1 : if(en) next_state = S2; else next_state = current_state;
            S2 : if(en) next_state = S3; else next_state = current_state;
            S3 : if(en) next_state = S4; else next_state = current_state;
            S4 : if(en) next_state = S5; else next_state = current_state;
            S5 : if(en) next_state = S6; else next_state = current_state;
            S6 : if(en) next_state = S7; else next_state = current_state;
            S7 : if(en) next_state = S8; else next_state = current_state;
            S8 : if(en) next_state = S0; else next_state = current_state;
            default: next_state = S0; 
        endcase

    // output logic
    always_comb 
        case (current_state)
            S0 : data_out = 8'b0; 
            S1 : data_out = 8'b1; 
            S2 : data_out = 8'b11;
            S3 : data_out = 8'b111;
            S4 : data_out = 8'b1111;
            S5 : data_out = 8'b11111;
            S6 : data_out = 8'b111111;
            S7 : data_out = 8'b1111111; 
            S8 : data_out = 8'b11111111; 
            default: data_out = 8'b0; 
        endcase

    // cmd_seq output logic
    always_comb
        case (current_state)
            // cmd_delay set to 0 not actually needed here. could just hard code it to 1. done like this because it seems more 'correct'
            S0 | S1 | S2 | S3 | S4 | S5 | S6 | S7 : begin cmd_seq = 1'b1; cmd_delay = 1'b0; end  
            S8 : begin cmd_seq = 1'b0; cmd_delay = 1'b1; end
            default : begin cmd_seq = 1'b1; cmd_delay = 1'b0; end  
        endcase
    
endmodule
