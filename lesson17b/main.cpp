// Converting EUR to BRL

#include <iostream>
using namespace std;

int main() {
    const double eur_per_brl {6.399}; // For this exercise, let's suppose it is a fixed value
    double eur {0};

    cout << "Euro to Brazilian Real converter" << endl;
    cout << "--------------------------------" << endl;
    cout << "Enter the amount in EUR: ";
    cin >> eur;
    double value = eur * eur_per_brl;
    cout << "You entered EUR " << eur << "." << endl;
    cout << "This amount is worth BRL " << value << "." << endl;
    cout << endl;
    cout << "Extra info" << endl;
    cout << "----------" << endl;
    cout << "The value of EUR 1 is BRL " << eur_per_brl << "." << endl;
    double value2 = 1.00 / eur_per_brl;
    cout << "The value of BRL 1 is EUR " << value2 << "." << endl;
    return 0;
}