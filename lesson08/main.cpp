// Primitive data types

/* Char
 * ----
 * Single character
 * Single quotes!
 *
 * char is, by default, at least 8 bits, unless specified as:
 * - char16_t (at least 16 bits)
 * - char32_t (at least 32 bits)
 * - wchar_t (the largest size available)
 *
 * Int
 * ---
 * Integer, whole numbers
 *
 * int can be signed (default) or unsigned:
 * - unsigned/signed short int (at least 16 bits)
 * - unsigned/signed int (at least 16 bits)
 * - unsigned/signed long int (at least 32 bits)
 * - unsigned/signed long long int (at least 64 bits)
 *
 * Floating-point
 * --------------
 * Non-integer numbers; precision and size
 * are compiler dependent
 * - float (7 decimal digits)
 * - double (no less than float until 15 decimal digits)
 * - long double (no less than double until 19 decimal digits)
 *
 * Boolean
 * -------
 * True and false
 * 0 is false; non-zero is true
 * - bool (usually 8 bits) */

#include <iostream>

using namespace std;

int main() {
    char middle_initial {'J'}; // single quotes
    cout << "My middle initial is " << middle_initial << endl;

    unsigned short int score {55};
    cout << "My score is " << score << endl;

    int countries {65};
    cout << "There were " << countries << " countries in the meeting"
         << endl;

    // long people {20610000};
    long people {20'610'000}; // using tick marks for clarity
    cout << "There were " << people << " people in Florida"
         << endl;

    long long distance {9'461'000'000'000}; // ' is not parsed
    cout << "The distance to alpha centauri is " << distance
         << "kms" << endl;

    float payment {401.12};
    cout << "You must pay US$ " << payment << endl;

    double pi {3.14159};
    cout << "The value of pi is " << pi << endl;

    long double large_amt {2.7e120};
    cout << "A very large amount is " << large_amt << endl;

    bool false_as_zero {false};
    bool true_non_zero {true};
    cout << "False is 0. Look: " << false_as_zero << endl
         << "Otherwise it is " << true_non_zero << endl;

    /* OVERFLOW
     *
     * 1.
     * Data type of var which calculated value will
     * be assigned to must be specified according to
     * the resulting value (calculated value).
     *
     * Example: num1 is 30000 (short), num2 is 1000
     * (short). Although both are short, the product
     * (30000 * 1000) is not. Let's try:
     */
    short num1 {30000};
    short num2 {1000};
    short product {num1 * num2};

    cout << "The value of product should be 30M, but the value shown is "
         << product << "\n, which is wrong. It is an overflow." << endl;

    /* 2.
     * C-like initialization (=) allows overflow
     * when data type is not properly set.
     * Prefer using C++-list style initialization.
     *
     * Example: 7.600.000.000 is long long. If I
     * initialize it as long (wrong data type) in
     * C-like style (with = sign), a warning will
     * be shown, but no error at all, although
     * the value will be altered. Let's check
     * with long var = 7600000000:
     */
    long var = 7600000000;
    cout << "The number is 7.6B, but it is shown as " << var
         << "\n. It is an overflow." << endl;

    return 0;
}