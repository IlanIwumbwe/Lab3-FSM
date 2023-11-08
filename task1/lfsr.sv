module lfsr #(
    parameter DATA_WIDTH = 7
) (
    input logic clk,
    input logic en, 
    input logic rst,
    output logic [DATA_WIDTH:1] data_out
);

logic [DATA_WIDTH:1] sreg;

initial begin
    sreg = {{DATA_WIDTH-1{1'b0}}, 1'b1};
end

always_ff @(posedge clk)  begin
    if(rst) 
        sreg <= {{DATA_WIDTH-1{1'b0}}, 1'b1};
    else if(en) 
        sreg <= {sreg[6:1], sreg[3] ^ sreg[7]};

    data_out <= sreg;
    
end
endmodule
