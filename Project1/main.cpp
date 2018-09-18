// CS 1336.504 Program 1 tdv160130 Tung Vu

#include <iostream>
#include <iomanip>
using namespace std;

// Overall purpose of this program is to calculate the total price of 6 items with tax included
int main ()
{
    double item1, item2, item3, item4, item5, item6, subtotal, tax, total;
    double const Taxpercent = 0.0825;

    item1 = 15.95;
    item2 = 24.95;
    item3 = 69.50;
    item4 = 12.95;
    item5 = 3.95;
    item6 = 40.15;

    // Display the price of each item on the screen

    cout << "Item 1 price: " << "$" << item1 << endl;
    cout << "Item 2 price: " << "$" << item2 << endl;
    cout << "Item 3 price: " << "$" << item3 << endl;
    cout << "Item 4 price: " << "$" << item4 << endl;
    cout << "Item 5 price: " << "$" << item5 << endl;
    cout << "Item 6 price: " << "$" << item6 << endl;

    // Calculate the subtotal, tax, total and print out, left aligned, in series of 14 spaces

    subtotal = item1 + item2 + item3 + item4 + item5 + item6;
    tax = subtotal * Taxpercent;
    total = subtotal + tax;

    cout << left << setw(14) << "Subtotal: " << "$" << subtotal << endl;
    cout << left << setw(14) << "Tax: " << "$" << tax << endl;
    cout << left << setw(14) << "Total: " << "$" << total << endl;

}
