import aes_pkg::*;

module aes (
    input logic clk,
    input logic rst_n,
    input logic[127:0] plaintext,
    input logic plaintext_valid,
    input logic[127:0] key,
    output logic[127:0] ciphertext,
    output logic ciphertext_valid
);

logic[127:0] round_key_current; 
logic[127:0] round_key_next;
logic[127:0] state_current; 
logic[127:0] state_next;
logic[7:0] rcon_current;
logic[7:0] rcon_next;

logic[3:0] round_num;

logic[127:0] test_state;
logic[127:0] test_sub_bytes;
logic[127:0] test_shift_rows;
logic[127:0] test_mix_columns;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n || plaintext_valid) begin
            round_key_current <= key;
            rcon_current <= 8'h01; 
            state_current <= plaintext ^ key;
            round_num <= 1;

        end else begin
            round_key_current <= round_key_next;
            rcon_current <= rcon_next;
            state_current <= state_next;

            round_num <= round_num + 1;
        
        end
    end

    assign rcon_next = xtime(rcon_current);

    assign test_state = to_state(state_current);
    assign test_sub_bytes = to_state(sub_bytes_out);
    assign test_shift_rows = to_state(shift_rows_out);
    assign test_mix_columns = to_state(mix_columns_out);

    key_gen kg (
        .key(round_key_current),
        .rcon(rcon_current),
        .round_key(round_key_next)
    );

    logic[127:0] sub_bytes_out;
    logic[127:0] shift_rows_out;
    logic[127:0] mix_columns_out;

    full_sbox sb (
        .in(state_current),
        .out(sub_bytes_out)
    );

    assign shift_rows_out = shift_matrix(sub_bytes_out);
    assign mix_columns_out= mix_matrix(shift_rows_out);

    always_comb begin
        if (round_num < 10) begin
            state_next = mix_columns_out ^ round_key_next;
        end else begin
            state_next = shift_rows_out ^ round_key_next;
        end
    end

    assign ciphertext = state_next;
    assign ciphertext_valid = (round_num == 10);


endmodule