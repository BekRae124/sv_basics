package aes_pkg;

    function automatic logic [127:0] to_state(input logic [127:0] data);
        logic [7:0] b [0:15];

        for (int i = 0; i < 16; i++)
            b[i] = data[127 - i*8 -: 8];

        return {
            b[0],  b[4],  b[8],  b[12],
            b[1],  b[5],  b[9],  b[13],
            b[2],  b[6],  b[10], b[14],
            b[3],  b[7],  b[11], b[15]
        };
    endfunction

    function automatic logic [7:0] xtime(input logic [7:0] a);
        logic [7:0] result;

        if (a[7]) begin
            result = (a << 1) ^ 8'h1b; // Polynomial reduction
        end else begin
            result = a << 1;
        end

        return result;
    endfunction

function automatic logic [127:0] shift_matrix(input logic [127:0] s);
    logic [7:0] b [0:15];

    for (int i = 0; i < 16; i++)
        b[i] = s[127 - i*8 -: 8];

    return {
        b[0],  b[5],  b[10],  b[15],
        b[4],  b[9],  b[14], b[3],
        b[8],  b[13], b[2],  b[7],
        b[12], b[1],  b[6],  b[11]
    };
endfunction

function automatic logic [31:0] mix_column(input logic [31:0] col);
    logic [7:0] s0, s1, s2, s3;
    logic [7:0] s0_out, s1_out, s2_out, s3_out;

    s0 = col[31:24];
    s1 = col[23:16];
    s2 = col[15:8];
    s3 = col[7:0];

    s0_out = xtime(s0) ^ (xtime(s1) ^ s1) ^ s2         ^ s3;
    s1_out = s0         ^ xtime(s1)      ^ (xtime(s2) ^ s2) ^ s3;
    s2_out = s0         ^ s1         ^ xtime(s2)      ^ (xtime(s3) ^ s3);
    s3_out = (xtime(s0) ^ s0) ^ s1         ^ s2         ^ xtime(s3);

    return {s0_out, s1_out, s2_out, s3_out};
endfunction

function automatic logic [127:0] mix_matrix(input logic [127:0] in);
    logic [31:0] col0, col1, col2, col3;
    logic [31:0] mixed_col0, mixed_col1, mixed_col2, mixed_col3;

    col0 = in[127:96];
    col1 = in[95:64];
    col2 = in[63:32];
    col3 = in[31:0];

    mixed_col0 = mix_column(col0);
    mixed_col1 = mix_column(col1);
    mixed_col2 = mix_column(col2);
    mixed_col3 = mix_column(col3);

    return {mixed_col0, mixed_col1, mixed_col2, mixed_col3};
endfunction


endpackage