// Mixed types exercise

/* Ask user for three int numbers, then
 * display the numbers, the sum of them
 * and the average value. */

#include <iostream>
using namespace std;

int main(){
    const int values {3};
    int a {}, b {}, c {}, sum {};
    double avg {};

    cout << "Enter 3 integer numbers separated by spaces: ";
    cin >> a >> b >> c;
    sum = a + b + c;
    avg = static_cast<double>(sum) / values;

    cout << "Numbers are "<< a << ", " << b
         << " and " << c << endl;
    cout << "Sum is " << sum << endl;
    cout << "Average value is " << avg << endl;
    return 0;
}