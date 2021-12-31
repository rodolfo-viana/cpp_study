// Arrays

/* Compound data type or data structure;
 * collection of elements.
 *
 * Characteristics:
 * - fixed size (cannot grow, cannot shrink)
 * - elements of the same data type
 * - stored contiguously in memory
 * - individual elements can be accessed by position or index
 * - first element is 0
 * - last element is size-1
 * - no out-of-bounds checking
 *
 * Declaring an array:
 *  - w/ no initialization
 *      - example: double grades[3];
 *  - w/ initialization
 *      - example: double grades[3] {7.8, 9.1, 8.5};
 *  - w/ less elems than specified
 *      - missing elements filled with 0
 *      - example: double grades[3] {7.8, 9.1};
 *  - w/ no number of elements
 *      - number of elements is automatically calculated
 *      - example: double grades[] {7.8, 9.1, 8.5};
 *  - w/ number of elems as var
 *      - example:
 *          short students {3};
 *          double grades[students]; // all values in array = 0
 *
 * Accessing individual element:
 *  - syntax: array[position]
 *  - example: grades[1]; // accesses second elem
 *
 * Assigning value to a specific position:
 *  - syntax: array[position] = value
 *  - example: grades[0] = 8.3; // value of first elem in array changes to 8.3 */

#include <iostream>
using namespace std;

int main() {
    char vowels[] {'a', 'e', 'i', 'o', 'u'}; // array w/ no size specified
    cout << "The second vowel is " << vowels[1] << endl;
    cout << "But let's change it: I want my second vowel to be 'u'" << endl;
    vowels[1] = 'u';
    cout << "Now the second vowel is " << vowels[1] << endl;
    return 0;
}

