// cout, cin, cerr, clog

/* They are objects representing streams
 *
 * cout: standard output stream; console
 * - examples:
 *      cout << data; -> to show data var value onto console
 *      cout << "data is " << data;
 *      cout << "data is " << data << endl; -> to insert newline
 *      cout << "data is " << data << "\n"; -> to insert newline
 *
 * cin: standard input stream; keyboard, buffer
 * - examples:
 *      cin >> data; -> to store keyboard value into data var
 *      cin >> data1 >> data2; -> to store multiple values into multiple vars
 *
 * <<: insertion operator; output streams
 * >>: extraction operator; input streams */

#include <iostream>

using namespace std;

int main() {
    int number1;
    int number2;

    cout << "Type two numbers separated with a space: ";
    cin >> number1 >> number2;
    cout << "Ok. I assigned your first number to variable 'number1'. It is " << number1 << "." << endl;
    cout << "And your second number is stored as 'number2'. It is " << number2 << "." << endl;
    return 0;
}