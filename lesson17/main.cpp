// Arithmetic operators

/* + (addition)
 * - (subtraction)
 * * (multiplication)
 * / (division)
 * % (modulo or remainder) - obviously works only with int
 *
 * Order of operations: PEMDAS
 * - parentheses,
 * - exponents,
 * - multiplication and division (from left to right)
 * - addition and subtraction (from left to right)
 * */

#include <iostream>
using namespace std;

int main() {
    int num1 {200};
    int num2 {100};

    // cout << "Having num1 = 200 and num2 = 100:" << endl;
    // cout << "Addition: " << num1 + num2 << endl;
    // cout << "Subtraction: " << num1 - num2 << endl;
    // cout << "Multiplication: " << num1 * num2 << endl;
    // cout << "Division: " << num1 / num2 << endl;

    int result {0};

    result = num1 + num2;
    cout << "Addition: " << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << "Division: " << num1 << " / " << num2 << " = " << result << endl;

    /* Careful with division: as "result", "num1" and "num2" are int,
     * num2 / num1 (which should lead to 0.5) will be 0 -- decimal
     * part will be ignored. It happens even when we are not dealing
     * with variables, but literals. */
    result = num2 / num1;
    cout << "Wrong division w/ vars - decimals cut off: "
         << num2 << " / " << num1 << " = " << result << endl;

    cout << "Wrong division w/ literals - decimals cut off: 100 / 200 = "
         << 100 / 200 << endl;

    double num3 {100}; // No need to write decimal value as "double" is stated
    double num4 {200};
    double result2 {0};

    result2 = num3 / num4;
    cout << "Right division w/ vars: "
         << num3 << " / " << num4 << " = " << result2 << endl;

    cout << "Right division w/ literals: 100.0 / 200.0 = "
         << 100.0 / 200.0 << endl;

    result = num1 % num2;
    cout <<  "Modulo: " << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;
    result = num1 % num2;
    cout <<  "Modulo: " << num1 << " % " << num2 << " = " << result << endl;

    cout << "Trying PEMDAS:" << endl;
    cout << "3 * 10 + 5 = " << 3 * 10 + 5 << endl;
    cout << "3 * (10 + 5) = " << 3 * (10 + 5) << endl;
    return 0;
}
