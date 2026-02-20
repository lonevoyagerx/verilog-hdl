module mux4_1 (
    input wire i0, i1, i2, i3, // 4 Data Inputs
    input wire [1:0] sel,      // 2-bit Select Line
    output wire y              // Output
);
 
    assign y = (sel == 2'b00) ? i0 :
               (sel == 2'b01) ? i1 :
               (sel == 2'b10) ? i2 :
               (sel == 2'b11) ? i3 : 1'bx; // 1'bx handles unexpected cases
endmodule

