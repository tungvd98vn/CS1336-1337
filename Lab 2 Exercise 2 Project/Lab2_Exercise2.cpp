
// CS 1136 Lab 2 Exercise 2
// Program by: Tung Vu

#include <iostream>
using namespace std;

int main ()
{
    float manufacturePrice, markupAmount, sellingPrice;

    double markupPercentage;

    manufacturePrice = 38.71;

    markupPercentage = 42.5;

    markupAmount = manufacturePrice * (markupPercentage/100);

    sellingPrice = manufacturePrice + markupAmount;

    cout << "The markup for the circuit board is: " << markupAmount << endl;

    cout << "The selling price of the circuit boards is: " << sellingPrice << endl;


    return 0;
}
