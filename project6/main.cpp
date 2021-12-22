// Built-in primitive types

/* int (integer): 1, 2, 987
 * double (float): 3.2, 99.01, 12.0
 * string (string): "Hello world"
 *
 * Example:
 * int main(){
 *   // int age1; // uninitialized var
 *   // int age2 = 21; // C-like initialization
 *   // int age3 (21); // constructor initialization
 *   int age4 {21}; // C++ list initialization
 *   cout << age4 << endl;
 *   return 0;
 * }
 */

#include <iostream>
using namespace std;

int main() {

    cout << "Enter the width in meters: ";
    int width {0};  //initialized with value 0; to be replaced later
    cin >> width;

    cout << "Enter the lenght in meters: ";
    int lenght {0}; //initialized with value 0; to be replaced later
    cin >> lenght;

    cout << "The area is " << width * lenght
         << "m2.\n";
    return 0;
}

