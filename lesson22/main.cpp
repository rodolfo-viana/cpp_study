// Logical operators

/* Tey are:
 * - negation: not, ! -> negates the result of the expression
 * - logical and: and, &&
 * - logical or: or, ||
 * --- operator symbols are more common.
 *
 * Precedence: ! -> && -> ||
 *
 * Examples:
 * - num1 > 10 && num2 <= 8 (both expressions must be true)
 * - num1 > 10 || num2 <=8 (one of the expressions or both must be true)
 * - !is_raining && temp > 32.0
 *      (both the negation of is_raining and temp higher than 32 must be true)
 * - temp > 100 && is_humid || is_raining
 *      (first evaluation: temp > 100 && is_humid; second evaluation: result of first || is_raining)
 *
 * Short-circuit evaluation:
 * - C++ stops the evaluation as soon as the result is known
 *
 * Examples: suppose exp_a is true, exp_b is false and exp_c is true
 * - exp_a && exp_b && exp_c
 *      (the result is known right after "exp_a && exp_b" -- it is false --,
 *      so the last logical operation is not necessary and not evaluated)
 * - exp_a || exp_b || exp_c
 *      (the result is known right after "exp_a || exp_b" -- it is true --,
 *      so the last logical operation is not necessary and not evaluated)
 * */
#include <iostream>
using namespace std;

int main(){
    int num {};
    const int lower {10};
    const int higher {20};
    cout << "Enter a number within 0 and 30: ";
    cin >> num;
    cout << "Suppose a range between " << lower << " and " << higher << "." << endl;

    cout << boolalpha;
    bool bound_check {false};
    bound_check = num >= lower && num <= higher;
    cout << "Is the number within the range? "
         << bound_check << endl;
    bound_check = num < lower || num > higher;
    cout << "Is the number outside the range? "
         << bound_check << endl;
    cout << "The answer to last question is " << bound_check
         << ", so its negation is " << !bound_check << endl;
    return 0;
}