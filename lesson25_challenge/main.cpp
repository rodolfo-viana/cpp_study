/* Challenge
 *
 * Disclaimer: For this program we use US dollars and cents.
 *
 * Write a program that asks the user to enter an int
 * representing the amount in cents. You may assume that the
 * amount in cents is greater than or equal to zero.
 *
 * The program should display how to provide that change to
 * the user. In US:
 * - 1 dollar = 100 cents
 * - 1 quarter = 25 cents
 * - 1 dime = 10 cents
 * - 1 nickel = 5 cents
 * - 1 penny = 1 cent
 *
 * Here is an example run:
 *
 * $ Enter an amount in cents: 92
 * dollars  : 0
 * quarters : 3
 * dimes    : 1
 * nickels  : 1
 * pennies  : 2
 */

#include <iostream>
using namespace std;

int main(){
    int amt_cents{0}, balance{0}, dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};
    const int dol_v{100}, q_v{25}, dim_v{10}, n_v{5};

    cout << "Enter an amount in cents: ";
    cin >> amt_cents;
    cout << "You can provide change for " << amt_cents
         << " as follows:" << endl;

    dollars = amt_cents / dol_v; // values will have decimals dropped for it is int
    balance = amt_cents - (dollars * dol_v);
    quarters = balance / q_v;
    balance -= quarters * q_v;
    dimes = balance / dim_v;
    balance -= dimes * dim_v;
    nickels = balance / n_v;
    balance -= nickels * n_v;
    pennies = balance;

    cout << "dollars\t\t:" << dollars << endl;
    cout << "quarters\t:" << quarters << endl;
    cout << "dimes\t\t:" << dimes << endl;
    cout << "nickels\t\t:" << nickels << endl;
    cout << "pennies\t\t:" << pennies << endl;
    return 0;
}

