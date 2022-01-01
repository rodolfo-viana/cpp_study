// Multidimensional array

/* There is a limit for dimensions in
 * multidimensional arrays, but it varies
 * according to the machine -- and it is
 * unlikely to reach the limit.
 *
 * Syntax:
 * type name[dim1_size][dim2_size];
 *
 * Example: let's take a movie review ndarray:
 *
 * const int reviewers {4};
 * const int movies {5};
 * int rating[reviewers][movies] {
 *  {8, 7, 6, 3, 1},
 *  {5, 4, 4, 4, 6},
    {0, 0, 2, 4, 5},
 *  {2, 1, 3, 7, 9}
 * };
 *
 * Drawn output:
 *                  (movies)
 *                | 0   1   2   3   4
 *              ---------------------
 * (reviewers)  0 | 8   7   6   3   1
 *              1 | 5   4   4   4   6
 *              2 | 0   0   2   4   5
 *              3 | 2   1   3   7   9
 *
 * Accessing specific position in array:
 * Example: rating[2][3] = 10;
 *
 *                  (movies)
 *                | 0   1   2   3   4
 *              ---------------------
 * (reviewers)  0 | 8   7   6   3   1
 *              1 | 5   4   4   4   6
 *              2 | 0   0   2   10  5
 *              3 | 2   1   3   7   9
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Fictional soccer table\n----------------------" << endl;
    int teams {3};
    int seasons {4};
    double table[teams][seasons] {
        {2.1, 4.4, 6.3, 8.1},
        {7.2, 5.2, 8.1, 3.4},
        {3.6, 3.8, 9.1, 7.3}
    };
    cout << "Memory address: " << table << endl;
    cout << "|\t" << table[0][0] << "\t|\t"
         << table[0][1] << "\t|\t" << table[0][2]
         << "\t|\t" << table[0][3] << "\t|" << endl
         << "|\t" << table[1][0] << "\t|\t"
         << table[1][1] << "\t|\t" << table[1][2]
         << "\t|\t" << table[1][3] << "\t|" << endl
         << "|\t" << table[2][0] << "\t|\t"
         << table[2][1] << "\t|\t" << table[2][2]
         << "\t|\t" << table[2][3] << "\t|" << endl;
    return 0;
}