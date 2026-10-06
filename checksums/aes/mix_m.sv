module mix_m (
    input [127:0] in,
    output [127:0] out
);

// Galois Field Multiplication for each column of the state matrix in AES MixColumns operation
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

function automatic logic [31:0] mix_column(input logic [31:0] col);
    logic [31:0] out;

    out[7:0] = xtime(in[7:0])^ xtime(in[15:8]) ^ in[15:8] ^ in[23:16] ^ in[31:24];
    out[15:8] = in[7:0] ^ xtime(in[15:8]) ^ xtime(in[23:16]) ^ in[23:16] ^ in[31:24];
    out[23:16] = in[7:0] ^ in[15:8] ^ xtime(in[23:16]) ^ xtime(in[31:24]) ^ in[31:24];
    out[31:24] = xtime(in[7:0]) ^ in[7:0] ^ in[15:8] ^ in[23:16] ^ xtime(in[31:24]);

    return out;
endfunction

assign out[127:96] = mix_column(in[127:96]);
assign out[95:64] = mix_column(in[95:64]);
assign out[63:32] = mix_column(in[63:32]);
assign out[31:0] = mix_column(in[31:0]);

endmodule