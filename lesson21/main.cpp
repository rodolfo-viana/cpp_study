// Comparison operators

/* They are:
 * - >
 * - >=
 * - <
 * - <=
 * - <=> (C++20 only: if equal, 0; less than 0 on the left and greater on the right)
 */
#include <iostream>
using namespace std;

int main(){
    int num1 {}, num2 {};
    cout << boolalpha;
    cout << "Enter two integers separated by space: ";
    cin >> num1 >> num2;
    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;
    return 0;
}