`include "fifo.sv"

module uart_tx (
    input logic clk,
    input logic rst,

    input logic[7:0] data,
    input logic valid,
    output logic ready,

    output logic tx
);

    typedef enum logic[4:0] {IDLE, START, BIT_0, BIT_1, BIT_2, BIT_3, BIT_4, BIT_5, BIT_6, BIT_7, STOP} state_t;

    logic full;
    logic empty;
    logic read_fifo;
    logic [7:0] fifo_out;
    state_t state;
    state_t next_state;
    logic next_tx;

    fifo #(.DATA_WIDTH(8)) byte_fifo (
        .clk(clk),
        .reset(rst),

        .write_en(valid && ready),
        .write_data(data),

        .read_en(read_fifo),
        .read_data(fifo_out),

        .full(full),
        .empty(empty)
    );

    assign ready = !full;

    //Shift block
    always_ff @(posedge clk) begin 
        if (rst) begin
            state <= IDLE; 
        end else begin 
            state <= next_state;
        end 
    end 
    
    always_comb begin : state_machine
        next_state = state;
        tx = 1'b1;
        read_fifo = 1'b0;

        case (state)  

            IDLE : begin 
                if (!empty) begin 
                    next_state = START;
                    read_fifo = 1'b1;
                end 
                tx = 1'b1;
            end 

            START : begin 
                next_state = BIT_0;
                tx = 1'b0;
                read_fifo = 1'b0;
            end 

            BIT_0 : begin 
                next_state = BIT_1;
                tx = fifo_out[0];
            end 
        
            BIT_1 : begin 
                next_state = BIT_2;
                tx = fifo_out[1];
            end 
        
            BIT_2 : begin 
                next_state = BIT_3;
                tx = fifo_out[2];
            end 
        
            BIT_3 : begin 
                next_state = BIT_4;
                tx = fifo_out[3];
            end 
        
            BIT_4 : begin 
                next_state = BIT_5;
                tx = fifo_out[4];
            end 
        
            BIT_5 : begin 
                next_state = BIT_6;
                tx = fifo_out[5];
            end 
        
            BIT_6 : begin 
                next_state = BIT_7;
                tx = fifo_out[6];
            end 
        
            BIT_7 : begin 
                next_state = STOP;
                tx = fifo_out[7];
            end 
        
            STOP : begin 
                next_state = IDLE;
                tx = 1'b1;
            end 

            default : begin 
                next_state = IDLE;
                read_fifo = 1'b0;
            end 
        
        endcase
    end

endmodule