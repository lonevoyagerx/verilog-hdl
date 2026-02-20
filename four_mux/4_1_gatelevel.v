module mux4_1 (
    input i0, i1, i2, i3,   // 4 Inputs
    input [1:0] sel,         // 2 Selection Lines
    output y                 // Output
);

    wire s0_n, s1_n;         // Inverted select lines
    wire w0, w1, w2, w3;     // Intermediate AND outputs

    // Invert select lines
    not n1 (s0_n, sel[0]);
    not n2 (s1_n, sel[1]);

    // AND gates to select inputs
    and a1 (w0, i0, s1_n, s0_n); // sel = 00
    and a2 (w1, i1, s1_n, sel[0]); // sel = 01
    and a3 (w2, i2, sel[1], s0_n); // sel = 10
    and a4 (w3, i3, sel[1], sel[0]); // sel = 11

    // OR gate to combine results
    or o1 (y, w0, w1, w2, w3);

endmodule