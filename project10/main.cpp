// Constants

/* Unlike vars, constants have values
 * that once declared cannot be changed.
 * Types of constants and declarations:
 * - const (common constant)
 *  Examples:
 *      - const double pi {3.1415926};
 *      - const int months {12};
 * - constexpr (constant expression)
 * - enum (enumerated constant)
 * - #define (defined constant; should not be used in modern C++)
 *
 * There are also literal C++ constants,
 * such as U, L, LL, F, escape codes etc.
 * Examples:
 *  - 45        -> int
 *  - 45U       -> unsigned int
 *  - 45L       -> long int
 *  - 45LL      -> long long int
 *  - 12.1      -> double
 *  - 12.1L     -> long double
 *  - 12.1F     -> float
 *  - \n        -> newline
 *  - \t        -> tab
 *  - etc.
 *
 * Trying to change value of a constant
 * outputs a compiler error. */

 /* Scenario:
  * Rodolfo has a room cleaning service.
  * It costs 30 for room.
  * Sales tax rate is 6%.
  *
  * Prompt user to type the number of rooms he
  * wants to be cleaned and returns the total
  * amount for the service. */

#include <iostream>
using namespace std;

int main() {
    const short price_room {30};
    const double tax_rate {0.06};
    int num_rooms;
    cout << "Enter how many rooms you want to be cleaned: ";
    cin >> num_rooms;
    int total_service {num_rooms * price_room};
    double total_tax {total_service * tax_rate};
    cout << "PRICE" << endl << "-----" << endl;
    cout << "Number of rooms: " << num_rooms << endl;
    cout << "Price per room: US$ " << price_room << endl;
    cout << "Total service value: US$ " << total_service << endl;
    cout << "Total tax amount: US$ " << total_tax << endl;
    cout << "Total: US$ " << total_service + total_tax << endl;
    return 0;
}