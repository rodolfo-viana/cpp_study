// Using namespace directive

#include <iostream>

// using namespace std;  // use entire std
using std::cout;         // use only what you need from std
using std::cin;
using std::endl;

int main() {
    int fav_number;
    cout << "Enter your favorite number: ";
    cin >> fav_number;
    cout << "Really? " << fav_number
         << " is my favorite number too!" << endl;
    return 0;
}