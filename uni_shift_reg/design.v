module universal_shift_reg (
    input  wire clk,
    input  wire rst,
    input  wire [1:0] sel,
    input  wire [3:0] pdata,
    input  wire sin,
    output reg  [3:0] q
);

always @(posedge clk) begin
    if (rst)
        q <= 4'b0000;
    else begin
        case (sel)
            2'b00: q <= q;                    // Hold
            2'b01: q <= {q[2:0], sin};        // Shift left
            2'b10: q <= {sin, q[3:1]};        // Shift right
            2'b11: q <= pdata;                // Parallel load
        endcase
    end
end

endmodule
