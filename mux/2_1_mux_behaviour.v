module two_mux(
    input wire a,
    input wire b,
    input wire sel,
    output reg y
);

always @(*) begin
    if (sel == 1'b1) begin
        y = b;
    end
    else begin
        y = a;
    end
end

endmodule

