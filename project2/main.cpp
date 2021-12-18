/* Challenge
 * 
 * Create a C++ program that asks the user
 * for his favorite number between 1 and 100,
 * then reads this number from the console.
 */
 
#include <iostream>

int main(){
    int fav_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> fav_number;
    std::cout << "Amazing! Did you know that " << fav_number << " is my favorite number too?" << std::endl;
    return 0;
} 
