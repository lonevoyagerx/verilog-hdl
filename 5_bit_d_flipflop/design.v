module dff_async #(
    parameter N = 5        // default 5-bit
)(
    input              clk,
    input              rst, // asynchronous reset (active high)
    input      [N-1:0] d,
    output reg [N-1:0] q
);

    always @(posedge clk or posedge rst) begin
        if (rst)
            q <= {N{1'b0}};
        else
            q <= d;
    end

endmodule


module dff_sync #(
    parameter N = 5        // default 5-bit
)(
    input              clk,
    input              rst, // synchronous reset (active high)
    input      [N-1:0] d,
    output reg [N-1:0] q
);

    always @(posedge clk) begin
        if (rst)
            q <= {N{1'b0}};
        else
            q <= d;
    end

endmodule


 