module key_gen (
     input [127:0] key,
     input [7:0] rcon,
     output [127:0] round_key
 );

logic [31:0] words_in [3:0];
logic [31:0] words_out [3:0];
logic [31:0] shifted_word;
logic [31:0] sub_word;
logic [31:0] rcon_word;

assign rcon_word = {rcon, 24'h000000};
assign words_in[0] = key[127:96];
assign words_in[1] = key[95:64];
assign words_in[2] = key[63:32];
assign words_in[3] = key[31:0];

assign shifted_word = {words_in[3][23:0], words_in[3][31:24]}; 

logic [7:0] sbox_out [0:3];

sbox sbox_0 (
    .in  (shifted_word[31:24]),
    .out (sbox_out[0])
);

sbox sbox_1 (
    .in  (shifted_word[23:16]),
    .out (sbox_out[1])
);

sbox sbox_2 (
    .in  (shifted_word[15:8]),
    .out (sbox_out[2])
);

sbox sbox_3 (
    .in  (shifted_word[7:0]),
    .out (sbox_out[3])
);

assign sub_word = {
    sbox_out[0],
    sbox_out[1],
    sbox_out[2],
    sbox_out[3]
};

assign words_out[0] = words_in[0] ^ (sub_word ^ rcon_word);
assign words_out[1] = words_in[1] ^ words_out[0];
assign words_out[2] = words_in[2] ^ words_out[1];
assign words_out[3] = words_in[3] ^ words_out[2];

assign round_key = {words_out[0], words_out[1], words_out[2], words_out[3]};

endmodule