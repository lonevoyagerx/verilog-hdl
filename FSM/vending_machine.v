module vending_machine (
    input clk,
    input reset,
    input [4:0] coin,      
    output reg dispense,
    output reg change
);
    
     parameter IDLE = 2'b00;
    parameter S10  = 2'b01;
    parameter S20  = 2'b10;
    parameter DISP = 2'b11;
    
    reg [1:0] current_state, next_state;

     reg give_change;


 
always @(posedge clk or posedge reset) begin
    if (reset) begin
        current_state <= IDLE;
        give_change   <= 1'b0;
    end 
    else begin
        current_state <= next_state;

         if (current_state == S20 && coin == 20)
            give_change <= 1'b1;

         else if (next_state == IDLE)
            give_change <= 1'b0;
    end
end


// --------------------------------------------------
// Combinational block: Next state logic
// --------------------------------------------------
always @(*) begin
    case (current_state)

        IDLE: begin
            if (coin == 10)      next_state = S10;
            else if (coin == 20) next_state = S20;
            else                 next_state = IDLE;
        end
        
        S10: begin
            if (coin == 10)      next_state = S20;
            else if (coin == 20) next_state = DISP;
            else                 next_state = S10;
        end
        
        S20: begin
            if (coin == 10)      next_state = DISP;
            else if (coin == 20) next_state = DISP;
            else                 next_state = S20;
        end
        
        DISP: next_state = IDLE;
        
        default: next_state = IDLE;
    endcase
end


 always @(*) begin
     dispense = 1'b0;
    change   = 1'b0;
    
    case (current_state)
        DISP: begin
            dispense = 1'b1;
            change   = give_change;   
        end
    endcase
end

endmodule