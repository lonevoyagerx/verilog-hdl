module adder (
    input  [15:0] a,
    input  [15:0] b,
    output [16:0] c
);

    assign c = a + b;

endmodule
