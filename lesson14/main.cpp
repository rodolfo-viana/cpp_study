// Challenge

/* Instructions:
 *
 * 1. Declare 2 empty vectors of int named
 * vector1 and vector2.
 * 2. Add 10 and 20 to vector1 dynamically
 * using push_back().
 * 3. Display the elems in vector1 using at()
 * method as well as its size using size()
 * method.
 * 4. Add 100 and 200 to vector2 dynamically
 * using push_back().
 * 5. Display the elems in vector2 using at()
 * method as well as its size using size()
 * method.
 * 6. Declare an empty 2D vector called
 * vector_2d. it must be a vector of vectors
 * containing int.
 * 7. Add vector1 to vector_2d dynamically
 * using push_back().
 * 8. Add vector2 to vector_2d dynamically
 * using push_back().
 * 9. Display the elems in vector_2d using
 * the at() method
 * 10. Change vector1.at(0) to 1000.
 * 11. Display the elems in vector_2d again
 * using the at() method.
 * 12. Display the elems in vector1. */

 #include <iostream>
 #include <vector>
 using namespace std;

 int main() {
     vector <int> vector1; // 1
     vector <int> vector2; // 1
     vector1.push_back(10); // 2
     vector1.push_back(20); // 2
     cout << vector1.at(0) << endl
          << vector1.at(1) << endl
          << vector1.size() << endl; // 3
     vector2.push_back(100); // 4
     vector2.push_back(200); // 4
     cout << vector2.at(0) << endl
          << vector2.at(1) << endl
          << vector2.size() << endl; // 5
     vector <vector <int>> vector_2d; // 6
     vector_2d.push_back(vector1); // 7
     vector_2d.push_back(vector2); // 8
     cout << vector_2d.at(0).at(0) << endl
          << vector_2d.at(0).at(1) << endl
          << vector_2d.at(1).at(0) << endl
          << vector_2d.at(1).at(1) << endl; // 9
     vector1.at(0) = 1000; // 10
     cout << vector_2d.at(0).at(0) << endl
          << vector_2d.at(0).at(1) << endl
          << vector_2d.at(1).at(0) << endl
          << vector_2d.at(1).at(1) << endl; // 11
     cout << vector1.at(0) << endl
          << vector1.at(1) << endl; // 12
     return 0;
 }