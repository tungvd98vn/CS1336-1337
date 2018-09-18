// Lab 6 Exercise 1
// Calculate the product
//
// Program by: Tung Vu

#include <iostream>
using namespace std;

int main (){
    int number, product = 1, count = 0;
    do {
        cout << "Enter an integer number to be included in the product" << endl << "or enter 0 to end the input: ";
        cin >> number; // enter the number
        if (number != 0) {
            product = product * number; // multiply the number with previous ones
            count++;
        }
    } while (number != 0); // if number is not 0 repeat the loop
    if (count > 0)
    cout << endl << "The product is " << product << "." << endl;

    return 0;
}

