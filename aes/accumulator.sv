
module accumulator(
    input logic clk,
    input logic rst_n,

    input logic[31:0] input_data,
    input logic input_valid,
    input logic input_last,

    output logic[127:0] output_data,
    output logic output_valid

);

// Should make this generic but have not 

    logic [127:0] accumulator;
    logic [127:0] accumulator_next;
    logic [1:0] word_count;

    always @(posedge clk) begin
        if (!rst_n) begin 
            accumulator <= '0;
            word_count <= '0;
        end else begin 
            if (input_last) begin 
                word_count <= '0;
            end else if (input_valid) begin 
                word_count <= word_count + 1;
            end 
            accumulator <= accumulator_next;

            output_data <= accumulator_next;
            output_valid <= (word_count == 3 || input_last) && input_valid;
        end 
    end

    always_comb begin
        accumulator_next = '0;

        case (word_count)
            2'd0: accumulator_next = {input_data, 96'b0};

            2'd1: accumulator_next = {
                accumulator[127:96],
                input_data,
                64'b0
            };

            2'd2: accumulator_next = {
                accumulator[127:64],
                input_data,
                32'b0
            };

            2'd3: accumulator_next = {
                accumulator[127:32],
                input_data
            };

            default: accumulator_next = '0;
        endcase
    end

    // assign output_data = accumulator_next;
    // assign output_valid = (word_count == 3 || input_last) && input_valid;

endmodule