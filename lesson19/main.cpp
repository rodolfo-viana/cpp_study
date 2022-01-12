// Mixed type expressions

/* Expressions w/ operands of different types.
 * Example:
 * int a {2};
 * double b {0.33};
 * cout << a * b;
 *
 * C++ will try to convert (coercion) one of the
 * operands. If it is not possible, compiler will
 * throw an error.
 *
 * Conversions: higher types vs lower types
 *
 * --- Automatic --- *
 * - classification (higher or lower) is based on
 * the size of values the type can hold. (see
 * lesson 9), and the ideia is that we can convert
 * lower type to higher type automaticaly, but not
 * the opposite. For example:
 *      - size of value: long double > long > int
 *      - possible automatic coercion:
 *          int -> long,
 *          long -> long double,
 *          etc.
 *      - lossy/wrong automatic conversion:
 *          long -> int,
 *          long double -> long
 *          etc.
 * - promotion is when a lower type is converted
 * to a higher type. Example:
 *      - 2 * 5.0;
 *          int (2) is promoted to double (2.0) to
 *          provide result as double (10.0)
 * - demotion is when a higher type is converted
 * to a lower type. Example:
 *      - int num1 {0}; num1 = 100.2;
 *          double (100.2) is demoted to int (num1)
 *          to fit its type. DECIMAL IS ERASED
 *          (num1 becomes 100, not 100.2)
 *
 * --- Manual ---
 * Explict type casting using static_cast.
 *
 * Syntax:
 *  - static_cast<type_you_desire>(value_to_be_converted)
 *
 * PS. Older C++ syntax would do
 *      (type_you_desire)value_to_be_converted
 * instead of
 *      static_cast<type_you_desire>(value_to_be_converted)
 * The older way should be avoided for static_cast checks if
 * the value can be effectively converted */

#include <iostream>
using namespace std;

int main() {
    int total_amt{100};
    int installments{8};
    double inst_value{0.0};

    inst_value = total_amt / installments;
    /* as total_amt and installments are int, compiler will
     * do integer division, and the result will be int (12)
     * even if inst_value is double */
    cout << inst_value << endl; // 12

    inst_value = static_cast<double>(total_amt) / installments;
    /* manually promoting total_amt to double leads compiler
     * to automaticaly promote installments -- both here
     * become double; therefore, the result will be double */
    cout << inst_value << endl; // 12.5
    return 0;
}