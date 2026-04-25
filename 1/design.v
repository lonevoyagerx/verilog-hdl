module Adder3bit (
    input  [2:0] A,
    input  [2:0] B,
    input        Cin,   // Unused, kept to preserve original interface
    output [2:0] Sum,
    output       Cout
);

    assign {Cout, Sum} = A + B;

endmodule
