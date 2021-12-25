// Global var vs local var

/* Global
 * ------
 * Vars outside the scope of main or any function.
 * It is read/overwritten by any function.
 * Therefore debugging is more complex.
 *
 * Local
 * -----
 * Vars inside the scope of main function or any
 * other function. It is read/overwritten only by
 * the specific function it is in. It is the first
 * var accessed by the function.
 *
 * LOCAL VAR TAKES PRECEDENCE OVER GLOBAL VAR. */

#include <iostream>
using namespace std;

int age {18}; // global var

int main() {
    int age {16}; // local var
    cout << age << endl;
    return 0;
}