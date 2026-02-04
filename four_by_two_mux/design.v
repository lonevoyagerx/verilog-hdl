 module mux2_1 (
    input  i0,
    input  i1,
    input  sel,
    output y
);
    assign y = (~sel & i0) | (sel & i1);
endmodule


 
module mux4_1_using_2_1 (
    input        a,
    input        b,
    input        c,
    input        d,
    input  [1:0] sel,
    output       z
);

    wire y1, y2;

    mux2_1 m1 (.i0(a),  .i1(b),  .sel(sel[0]), .y(y1));
    mux2_1 m2 (.i0(c),  .i1(d),  .sel(sel[0]), .y(y2));
    mux2_1 m3 (.i0(y1), .i1(y2), .sel(sel[1]), .y(z));

endmodule


 