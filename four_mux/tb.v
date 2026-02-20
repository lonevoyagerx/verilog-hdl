module tb_mux4to1();
    reg i0, i1, i2, i3;
    reg [1:0] sel;
    wire y;

    // Instantiate the Unit Under Test (UUT)
    mux4_1 uut (
        .i0(i0), .i1(i1), .i2(i2), .i3(i3), 
        .sel(sel), .y(y)
    );

    initial begin
        // Monitor outputs
        $monitor("Time=%0t | sel=%b | Inputs=%b%b%b%b | Output=%b", 
                 $time, sel, i3, i2, i1, i0, y);

        // Test vectors
        i0 = 1; i1 = 0; i2 = 1; i3 = 0; // Initialize inputs
        
        sel = 2'b00; #10; // Select i0
        sel = 2'b01; #10; // Select i1
        sel = 2'b10; #10; // Select i2
        sel = 2'b11; #10; // Select i3
        
        $finish;
    end
endmodule

