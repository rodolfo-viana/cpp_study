// Vector

/* Array is lenght-limited: once you set the quantity
 * of elements it will not grow or shrink. It does
 * not happen to vector, a type of dynamic array.
 *
 * Syntax:
 * #include <vector>
 * vector <type> name; // uninitialized
 * vector <type> name (size_elems); // uninitialized but w/ construct info
 * vector <type> name {elem1, elem2, ..., elemN}; // initialized
 * vector <type> name (size_elems, initial_value); // initial value repeats for every elem
 *
 * Examples:
 * vector <int> test_score;
 * vector <int> test_score (50, 5); // vector of 50 elems w/ initial value of 5
 *
 * When we create a vector, as it is an object, some methods
 * apply. For instance:
 * - vector_name.at(position);
 *      - retrieves vector data at specific index position
 *      - can be used to modify value:
 *          vector_name.at(position) = new_value;
 * - vector_name.push_back(new_elem);
 *      - adds new elem to the end of vector:
 *          (vector is {2, 3, 4})
 *          vector_name.push_back(5);
 *          (vector now is {2, 3, 4, 5})
 * - vector_name.size();
 *      - shows the size of vector
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <char> vowels; // uninitialized
    cout << "Vector has " << vowels.size() << " elements" << endl;
    vowels.push_back('a'); // added new value
    vowels.push_back('b'); // added new value
    cout << "Now vector has " << vowels.size() << " elements" << endl;
    cout << "The elem in position 0 is " << vowels.at(0) << endl;
    cout << "The elem in position 1 is " << vowels.at(1) << endl;
    cout << "Out-of-range exception and error are thrown when there is no elem at that position" << endl;
    cout << "If we run 'vowels.at(2)', we get this message:" << endl;
    cout << "terminate called after throwing an instance of 'std::out_of_range'" << endl;
    cout << "  what():  vector::_M_range_check: __n (which is 3) >= this->size() (which is 2)" << endl << endl;

    cout << "And now, a vector of vectors!" << endl;
    vector <vector <int>> scores {
        {1, 2, 3},
        {1, 3, 4},
        {2, 4, 5}
    };
    cout << "Elems can be accessed using '.at()' twice: first for rows, then for cols:" << endl;
    cout << "Second row, third column: " << scores.at(1).at(2) << endl;
    cout << "Third row, first column: " << scores.at(2).at(0) << endl;
    return 0;
}