module up_counter_4bit(
    input clk,
    input reset,
    output reg [3:0] count
);

    // Synchronous Up Counter
    always @(posedge clk) begin
        if (reset) begin
            count <= 4'b0000; // Reset count
        end else begin
            count <= count + 1'b1; // Increment count
        end
    end

endmodule
