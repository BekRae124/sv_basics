module full_sbox (
    input  logic [127:0] in,
    output logic [127:0] out
);

    generate
        for (genvar i = 0; i < 16; i++) begin : gen_sbox
            sbox sb (
                .in  (in[i*8 +: 8]),
                .out (out[i*8 +: 8])
            );
        end
    endgenerate

endmodule