
module detect_pulse  (
    input logic clk,
    input logic reset,
    input logic signal_in,
    output logic signal_out

);

    logic past;

    always_ff @(posedge clk) begin
        if (reset) begin 
            past <= 1'b0;
            signal_out <= 1'b0;
        end else begin 
            signal_out <= past != signal_in;
        end 
    end 
endmodule