// sizeof

/* Returns the size in bytes of a type or var
 * Requires <climits>, <cfloat>
 * Examples:
 * - sizeof(int)
 * - sizeof(double)
 * - sizeof(var) / sizeof var
 */

#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "sizeof info\n-----------" << endl;
    cout << "char: " << sizeof(char) << " bytes\n";
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes\n";
    cout << "short: " << sizeof(short) << " bytes\n";
    cout << "long: " << sizeof(long) << " bytes\n";
    cout << "long long: " << sizeof(long long) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    cout << "long double: " << sizeof(long double) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n" << endl;

    cout << "Minimum values\n--------------" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << "\n" << endl;

    cout << "Maximum values\n--------------" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

    return 0;
}