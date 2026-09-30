include "sub_bytes.sv"
include "shift_rows.sv"
include "mix_m.sv"

module aes (
    input logic clk,
    input logic rst_n,
    input logic[127:0] plaintext,
    input logic plaintext_valid,
    input logic[127:0] key,
    output logic[127:0] ciphertext,
    output logic ciphertext_valid
);

logic[127:0] round_keys[0:10]; 
logic[127:0] state[0:10]; 

assign round_keys[0] = key;
assign state[0] = plaintext ^ round_keys[0];

generate
    genvar i;
    for (i = 0; i < 10; i++) begin : round
        logic[127:0] sub_bytes_out;
        logic[127:0] shift_rows_out;
        logic[127:0] mix_columns_out;

        // SubBytes
        sub_bytes sb (
            .data_i(state[i]),
            .data_o(sub_bytes_out)
        );

        // ShiftRows
        shift_rows sr (
            .data_i(sub_bytes_out),
            .data_o(shift_rows_out)
        );

        // MixColumns (skip for the last round)
        if (i < 9) begin
            mix_m mc (
                .in(shift_rows_out),
                .out(mix_columns_out)
            );
            assign state[i + 1] = mix_columns_out ^ round_keys[i + 1];
        end else begin
            assign state[i + 1] = shift_rows_out ^ round_keys[i + 1];
        end
    end
endgenerate

endmodule