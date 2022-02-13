// Compound assignment operators

/* The syntax is: op=
 * Examples:
 * - lhs += rhs; -> lhs = lhs + rhs;
 * - lhs -= rhs; -> lhs = lhs - rhs;
 * - lhs *= rhs; -> lhs = lhs * rhs;
 * - lhs /= rhs; -> lhs = lhs / rhs;
 * - lhs %= rhs; -> lhs = lhs % rhs;
 * - lhs <<= rhs; -> lhs = lhs << rhs;
 * - lhs >>= rhs; -> lhs = lhs >> rhs;
 * Bitwise operations:
 * - lhs &= rhs; -> lhs = lhs & rhs;
 * - lhs ^= rhs; -> lhs = lhs ^ rhs;
 * - lhs |= rhs; -> lhs = lhs | rhs;
 */

#include <iostream>
using namespace std;

int main(){
    double price {}, total {};
    int qty {};

    // First purchase
    qty = 3;
    price = 12.15;
    total = price * qty; // 36.45
    cout << total << endl;
    // Second purchase
    qty = 5;
    price = 14.05;
    total += (price * qty); // 36.45 + 70.25 = 106.7
    cout << total << endl;
    return 0;
}