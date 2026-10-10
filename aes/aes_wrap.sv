module aes_wrap (
    input logic clk,
    input logic rst_n,

    input logic[127:0] plaintext,
    input logic plaintext_valid,
    input logic[127:0] key,
    output logic[127:0] ciphertext,
    output logic ciphertext_valid

);

    logic[127:0] plaintext_d1;
    logic plaintext_valid_d1;

    logic[127:0] key_d1;

    logic[127:0] ciphertext_out;
    logic ciphertext_valid_out;

    always_ff @( posedge clk ) begin 
        plaintext_d1 <= plaintext;
        plaintext_valid_d1 <= plaintext_valid;

        key_d1 <= key;

        ciphertext <= ciphertext_out;
        ciphertext_valid <= ciphertext_valid_out;
    end

    aes aes_in(
        .clk(clk),
        .rst_n(rst_n), 

        .plaintext(plaintext_d1),
        .plaintext_valid(plaintext_valid_d1),

        .key(key_d1),

        .ciphertext(ciphertext_out),
        .ciphertext_valid(ciphertext_valid_out)
    );
    
endmodule