// Increment and decrement operators

/* Increment: ++
 * Decrement: --
 *
 * They work for int, float types and pointers.
 *
 * Prefix: ++var    -> increment before var is used in following operations
 * Postfix: var++   -> increment after var is used in following operations
 *
 * NEVER use these operators more than once for the same variable in the same statement.
 */
#include <iostream>
using namespace std;

int main() {
    int counter {10};
    int result {0};

    // Example 1: simple increment
    // cout << "Counter is at " << counter << endl;
    // counter = counter + 1; // counter = 11
    // cout << "Counter now is at " << counter << endl;
    // counter++; // counter = 12
    // cout << "Counter now is at " << counter << endl;
    // ++counter; // counter = 13
    // cout << "Counter now is at " << counter << endl;

    // Example 2: preincrement
    // cout << "Counter is at " << counter << endl; // 10
    // cout << "Result is at " << result << endl; // 0
    // result = ++counter; // counter = counter + 1; result = counter
    // cout << "Now counter is at " << counter << endl; // 11
    // cout << "Now result is at " << result << endl; // 11

    // Example 3: post-increment
    // cout << "Counter is at " << counter << endl; // 10
    // cout << "Result is at " << result << endl; // 0
    // result = counter++; // result = counter; counter = counter + 1
    // cout << "Now counter is at " << counter << endl; // 11
    // cout << "Now result is at " << result << endl; // 10

    // Example 4: preincrement and post-increment w/ arithmetic expression
    cout << "Counter is at " << counter << endl; // 10
    cout << "Result is at " << result << endl; // 0
    result = counter++ * 2 - 1;
    /* Explaining of processing order:
     * 1. result took counter (10), multiplied by 2 and subtracted 1;
     * 2. counter (10) incremented by 1 */
    cout << "Now counter is at " << counter << endl; // 11
    cout << "Now result is at " << result << endl; // 19
    cout << "Resetting values..." << endl;
    counter = 10; // resetting original values
    result = 0;
    cout << "Counter is at " << counter << endl; // 10
    cout << "Result is at " << result << endl; // 0
    result = ++counter * 2 - 1;
    /* Explaining of processing order:
     * 1. counter (10) incremented by 1;
     * 2. result took counter (11), multiplied by 2 and subtracted 1 */
    cout << "Now counter is at " << counter << endl; // 11
    cout << "Now result is at " << result << endl; // 21

    return 0;
}