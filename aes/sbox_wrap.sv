module sbox_wrap (
    input logic clk,
    input  logic [127:0] in,
    output logic [127:0] out
);

logic [127:0] in_d1;
logic [127:0] out_early;

full_sbox inst (.in(in_d1), .out(out_early));

always_ff @( posedge clk ) begin 
    in_d1 <= in;
    out <= out_early;
end

endmodule