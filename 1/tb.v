// Verilog-2001 testbench for Adder3bit
module testbench;

  parameter BITS = 11;
  parameter word = 2;

  // Memory to store test vectors
  reg [1:BITS] Vmem [1:word];

  // DUT inputs and expected outputs
  reg  [2:0] A;
  reg  [2:0] B;
  reg        Cin;
  reg  [2:0] Sum_ex;
  reg        Cout_ex;

  // DUT outputs
  wire [2:0] Sum;
  wire       Cout;

  integer j;

  // Instantiate DUT (explicit port mapping – no .* in Verilog-2001)
  Adder3bit F1 (
    .A(A),
    .B(B),
    .Cin(Cin),
    .Sum(Sum),
    .Cout(Cout)
  );

  initial begin
    // Read stimulus vectors
    $readmemb("test.vec", Vmem);

    // Loop through test vectors
    for (j = 1; j <= word; j = j + 1) begin
      {A, B, Cin, Sum_ex, Cout_ex} = Vmem[j];

      $display("Test Vector %b %b %b %b %b",
               A, B, Cin, Sum_ex, Cout_ex);

      #5;

      if ((Sum != Sum_ex) || (Cout != Cout_ex))
        $display("Mismatch: A=%b B=%b Cin=%b | Exp Sum=%b Cout=%b | Got Sum=%b Cout=%b",
                 A, B, Cin, Sum_ex, Cout_ex, Sum, Cout);
      else
        $display("Match
         OK: A=%b B=%b Cin=%b | Sum=%b Cout=%b",
                 A, B, Cin, Sum, Cout);
    end

    $finish;
  end

endmodule