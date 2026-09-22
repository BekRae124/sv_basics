
module counter #(
   parameter integer WIDTH = 3
)(
    input logic clk,
    input logic reset,
    input logic enable,
    output logic[WIDTH-1:0] count  
);

    always_ff @(posedge clk) begin 
        if (reset) begin
            count <= '0; 
        end else if (enable) begin 
            count <= count + 1'b1;
        end 
    end 
    
endmodule