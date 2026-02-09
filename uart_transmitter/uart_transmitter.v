module uart_tx (
    input  wire clk,
    input  wire rst,
    input  wire tx_start,
    input  wire [7:0] data,
    output reg  tx,
    output reg  busy
);

reg [3:0] bit_cnt;
reg [9:0] shift_reg;

always @(posedge clk) begin
    if (rst) begin
        tx <= 1'b1;
        busy <= 0;
        bit_cnt <= 0;
    end else if (tx_start && !busy) begin
        shift_reg <= {1'b1, data, 1'b0}; // stop, data, start
        busy <= 1;
        bit_cnt <= 0;
    end else if (busy) begin
        tx <= shift_reg[0];
        shift_reg <= shift_reg >> 1;
        bit_cnt <= bit_cnt + 1;
        if (bit_cnt == 9)
            busy <= 0;
    end
end

endmodule
