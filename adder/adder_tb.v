// Verilog-2001 testbench for adder
module top;

  reg  [15:0] a;
  reg  [15:0] b;
  wire [16:0] c;

  // Instantiate the DUT
  adder DUT (
    .a(a),
    .b(b),
    .c(c)
  );

  initial begin
    // Initialize inputs
    a = 16'h45;
    b = 16'h12;

    // Wait for a short simulation time
    #10;

    // Print values
    $display("a = %0d, b = %0d, c = %0d", a, b, c);

    // Finish simulation
    $finish;
  end

endmodule
