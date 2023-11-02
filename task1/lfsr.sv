module lfsr #(
    parameter DATA_WIDTH = 4
) (
    input logic clk,
    input logic en, 
    input logic rst,
    output logic [DATA_WIDTH-1:0] data_out
);

logic [DATA_WIDTH-1:0] sreg;

initial begin
    sreg = {{DATA_WIDTH-1{1'b0}}, 1'b1};
end

always_ff @(posedge clk)  begin
    if(rst) 
        sreg <= 4'b1;
    else if(en) 
        sreg <= {sreg[2:0], sreg[3] ^ sreg[2]};

    data_out <= sreg;
    
end
endmodule
