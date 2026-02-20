module mux4_1 (
    input wire [3:0] i,      // 4 input bits
    input wire [1:0] sel,    // 2 select lines
    output reg y             // Output
);
    // Behavioral modeling using case statement
    always @(i or sel) begin
        case (sel)
            2'b00 : y = i[0];
            2'b01 : y = i[1];
            2'b10 : y = i[2];
            2'b11 : y = i[3];
            default : y = 1'b0; // Default case
        endcase
    end
endmodule

