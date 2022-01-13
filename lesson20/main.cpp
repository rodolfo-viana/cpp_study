// Testing for equality

/* Operators:
 * - ==
 * - !=
 *
 * Evaluates expression to a boolean (default: 1 and 0)
 * If I use std::boolalpha, possible results are true and false.
 * If I use std::noboolalpha, possible results are 1 and 0.
 *
 * */

 #include <iostream>
 using namespace std;

int main(){
    bool equal {false}, notequal {false};
    int num1 {}, num2 {};

    cout << "Enter two int numbers separated by space: ";
    cin >> num1 >> num2;
    equal = (num1 == num2);
    notequal = (num1 != num2);
    cout << "Comparison (equal): " << equal << endl;
    cout << "Comparison (not equal): " << notequal << endl;
    cout << boolalpha; // changing from 0/1 to false/true
    cout << "Comparison (equal): " << equal << endl;
    cout << "Comparison (not equal): " << notequal << endl;
    cout << endl;
    cout << "Comparison w/ approximation" << endl;
    cout << "---------------------------" << endl;
    /* Double is stored as approximation, so 0.9999999999999999
     * (17-digit decimal), in my machine, is equal to 1.0, for
     * the representation of both values is the same. Note: the
     * amount of decimal digits varies according to machine. */
    cout << "10-digit: 1.0 == 0.9999999999:\t\t" << (1.0 == 0.9999999999) << endl;
    cout << "15-digit: 1.0 == 0.999999999999999:\t" << (1.0 == 0.999999999999999) << endl;
    cout << "16-digit: 1.0 == 0.9999999999999999:\t" << (1.0 == 0.9999999999999999) << endl;
    cout << "17-digit: 1.0 == 0.99999999999999999:\t" << (1.0 == 0.99999999999999999) << endl;
    cout << endl;
    cout << "Comparison btw distinct numeric types" << endl;
    cout << "-------------------------------------" << endl;
    /* When int and double are compared, int is promoted. It
     * means 10 is equal to 10.0, for 10 is promoted to 10.0. */
    cout << "int vs double: 10 == 10.0\t" << (10 == 10.0) << endl;
    return 0;
}