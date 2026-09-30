module mix_m (
    input [31:0] in,
    output [31:0] out
);

// Galois Field Multiplication
// [02 03 01 01]
// [01 02 03 01]
// [01 01 02 03]
// [03 01 01 02]
function automatic logic [7:0] xtime(input logic [7:0] a);
    if (a[7])
        return (a << 1) ^ 8'h1B;
    else
        return a << 1;
endfunction

assign out[7:0] = xtime(in[7:0])^ xtime(in[15:8]) ^ in[15:8] ^ in[23:16] ^ in[31:24];
assign out[15:8] = in[7:0] ^ xtime(in[15:8]) ^ xtime(in[23:16]) ^ in[23:16] ^ in[31:24];
assign out[23:16] = in[7:0] ^ in[15:8] ^ xtime(in[23:16]) ^ xtime(in[31:24]) ^ in[31:24];
assign out[31:24] = xtime(in[7:0]) ^ in[7:0] ^ in[15:8] ^ in[23:16] ^ xtime(in[31:24]);

endmodule