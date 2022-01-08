// Assignment operator

/* Symbol: = (equal sign, but it does NOT represent equality)
 * Model: lhs = rhs;
 *
 * rhs is an expression that is evaluated to a value
 *      - example: 3 + 2 (which is evaluated to 5)
 * the value of rhs is stored to lhs
 *      - example: fingers (which holds the value of the expression)
 *
 * Steps:
 * calc = (((3 * 12) ** 2) + 100) / (5 ** 3);
 *
 * 1. the program evaluates the expression
 * (((3 * 12) ** 2) + 100) / (5 ** 3) and
 * provides the result 11.168
 * 2. the value 11.168 is stored to the
 * location in memory named "calc"
 *
 * Remember: the variable must be initialized
 * using the type of resulting value. For the
 * example above, "calc" should have been
 * initialized as double:
 * double calc;
 */

#include <iostream>
using namespace std;

int main() {
    /* Lines below ARE NOT assignment. They are
     * initialization -- it is, I am defining
     * variables, taking a location in memory
     * and naming it "num1" and "num2". It
     * may or may not contain a value. */
    int num1 {10};
    int num2 {20};

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    /* The line below IS assignment. I am taking
     * the location in memory that already exists
     * under the name "num1" to where I am moving
     * a value. */
    num1 = 100;

    /* In other words, as stated by learncpp.com,
     * "initialization gives a variable an initial
     * value at the point when it is created;
     * assignment gives a variable a value at some
     * point after the variable is created." */

    cout << "Assigned new value. Now num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    num1 = num2;

    cout << "Assigned num2 to num1. Now num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    /* The line below is a chained assigment. It works
     * from left to right: first assign the value of
     * expression to "num2", then assign the value of
     * "num2" to "num1". */
    num1 = num2 = 1000;

    cout << "Chain assigned 1000 to num2 and num1. Now num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    return 0;
}