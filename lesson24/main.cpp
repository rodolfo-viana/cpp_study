/* Operator precedence
 *
 * Higher to tower
 *  [] -> . {}                                  left to right
 *  ++ -- not -(unary) *(de-ref) & sizeof       right to left
 *  * / %                                       left to right
 *  + -                                         left to right
 *  << >>                                       left to right
 *  < <= > =>                                   left to right
 *  == !=                                       left to right
 *  &                                           left to right
 *  ^                                           left to right
 *  |                                           left to right
 *  &&                                          left to right
 *  ||                                          left to right
 *  = op= ?:                                    right to left
 *
 * Explaining...
 *
 * expr1 op1 expr2 op2 expr3    precedence rules apply
 * expr1 op1 expr2 op1 expr3    precedence and associativity rules apply
 *
 * Using parenthesis remove any doubt absolutely.
 *
 * Examples:
 *
 * result = num1 + num2 * num3;
 * (multiplication has higher precedence, so this operation comes first.)
 *
 * result = num1 + num2 - num3;
 * (addition and subtraction have the same precedence, so we take
 * associativity rules into consideration; in this caso, the operation
 * that comes on the left is done before the one on the right.)
 */