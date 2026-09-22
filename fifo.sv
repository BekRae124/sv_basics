module fifo #(
    parameter int unsigned DATA_WIDTH = 8,
    parameter int unsigned DEPTH      = 8
) (
    input  logic                  clk,
    input  logic                  reset,

    input  logic                  write_en,
    input  logic [DATA_WIDTH-1:0] write_data,

    input  logic                  read_en,
    output logic [DATA_WIDTH-1:0] read_data,

    output logic                  full,
    output logic                  empty
);

    logic [DATA_WIDTH - 1:0] mem [DEPTH-1:0];
    logic [$clog2(DEPTH)-1:0] rd_pntr;
    logic [$clog2(DEPTH)-1:0] wr_pntr;

    always_ff @(posedge clk) begin 
        if (reset) begin
            wr_pntr   <= '0;
            rd_pntr   <= '0;
            read_data <= '0;
        end else begin
            if(write_en && !full) begin 
                mem[wr_pntr] <= write_data;
                wr_pntr <= wr_pntr + 1;
            end 

            if(read_en && !empty) begin 
                read_data <= mem[rd_pntr];
                rd_pntr <= rd_pntr + 1;
            end 

        end
    end 

    assign empty = (rd_pntr == wr_pntr);
    assign full  = ((wr_pntr + 1'b1) == rd_pntr);
endmodule