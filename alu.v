module alu (
    input  [3:0] a,
    input  [3:0] b,
    input  [2:0] sel,
    output reg [4:0] y
);

always @(*) begin
    case(sel)
        3'b000: y = a + b;
        3'b001: y = a - b;
        3'b010: y = {1'b0,(a & b)};
        3'b011: y = {1'b0,(a | b)};
        3'b100: y = {1'b0,(a ^ b)};
        3'b101: y = {1'b0,(~(a | b))};
        3'b110: y = (a > b) ? 5'b00001 : 5'b00000;
        3'b111: y = (a == b) ? 5'b00001 : 5'b00000;
        default: y = 5'b00000;
    endcase
end

endmodule
