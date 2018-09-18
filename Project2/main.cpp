
// CS 1336.504 Project 2 tdv160130 Tung Vu

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
    // Print out the menu
    cout << "Enter A, B or C to indicate the plan purchased by the user: " << endl;
    cout << right << setw(7) << "A - " << "$29.99 per month with 5000 megabytes." << endl;
    cout << right << setw(46) << "$0.05 per additional megabyte, but only" << endl;
    cout << right << setw(46) << "$0.03 per additional megabyte if 50% or" << endl;
    cout << right << setw(44) << "more of the data was used on weekends" << endl;
    cout << right << setw(7) << "B - " << "$39.99 per month with 7500 megabytes." << endl;
    cout << right << setw(36) << "$0.01 per additional megabyte" << endl;
    cout << right << setw(7) << "C - " << "$49.99 per month for unlimited megabyte." << endl;

    char plan, moredata;

    cin.get(plan);
    if (plan == '\n'){
        cout << "Invalid input! Please try again." << endl;
        return 0;
    }
    cin.ignore(100,'\n');

    int dataAmount; // the amount of data used
    float totalA, totalB; // the total cost of plan A and plan B respectively
    const float totalC = 49.99;// the total cost of plan C
    float save; // the money that could be saved

    switch (plan) {
        // if the user choose plan A
        case 'a':
        case 'A':   cout << "You selected Package: A" << endl;
                    cout << "Please enter the amount of data used by the customer" << endl;
                    cout << "(Should be a whole, non-negative number): " << endl;
                    cin >> dataAmount;
                    if (dataAmount < 0){ // if the user input negative value
                        cout << "Invalid input! Please try again." << endl;
                        break;
                    }

                    else if (dataAmount > 5000) {
                        cout << "Did the customer use 50% or more of the data" << endl;
                        cout << " on the weekend? (Y/N)";
                        cin >> moredata;
                        cin.ignore(100,'\n');
                        if (moredata == 'y' || moredata == 'Y'){ // if the user does use data on the weekend
                             cout << "Customer will receive a weekend discount: True" << endl;
                             totalA = 29.99 + (dataAmount - 5000)*0.03;
                             cout << "The customer's cost for the month is $" << fixed << setprecision(2) <<  totalA << endl;
                        }
                        else if (moredata == 'n' || moredata == 'N'){ // if the user doesn't use data on the weekend
                             cout << "Customer will receive a weekend discount: False" << endl;
                             totalA = 29.99 + (dataAmount - 5000)*0.01;
                             cout << "The customer's cost for the month is $" << fixed << setprecision(2) <<  totalA << endl;
                        }
                        else // if the user enter none of Y, N, y, n
                             cout << "Invalid input! Please try again." << endl;
                    }
                    else // the amount of data used <= 5000
                         cout << "The customer's cost for the month is 29.99$" << endl;

                    // Check if the user could save any money on other packages
                    totalB = 39.99 + (dataAmount - 7500)*0.01;
                    if (totalA > totalB){
                        save = totalA - totalB;
                        cout << "Customer would saved $" << fixed << setprecision(2) << save << " on Package B" << endl;
                    }
                    if (totalA > totalC){
                        save = totalA - totalC;
                        cout << "Customer would saved $" << fixed << setprecision(2) << save << " on Package C" << endl;
                    }
                    break;


        // if the user choose plan B
        case 'b':
        case 'B':   cout << "You selected Package: B" << endl;
                    cout << "Please enter the amount of data used by the customer" << endl;
                    cout << "(Should be a whole, non-negative number): " << endl;
                    cin >> dataAmount;
                    if (dataAmount < 0){ // if the user enter negative value
                        cout << "Invalid input! Please try again." << endl;
                        break;
                    }
                    if (dataAmount < 7500) {
                        cout << "The customer's cost for the month is 39.99$" << endl;
                    }
                    else { // dataAmount > 7500
                        totalB = 39.99 + (dataAmount - 7500)*0.01;
                        cout << "The customer's cost for the month is $" << fixed << setprecision(2) <<  totalB << endl;
                        if (totalB > totalC){ // check if user could save money on package C
                            save = totalB - totalC;
                            cout << "Customer would saved $" << fixed << setprecision(2) << save << " on PackageC" << endl;
                        }
                    }
                    break;

        // if user choose plan C
        case 'c':
        case 'C':   cout << "You selected Package: C" << endl;
                    cout << "The customer's cost for the month is $" << totalC << endl;
                    break;

        // if the user entered none of A, B, C, a, b, c
        default:    cout << "Invalid input! Please try again." << endl;
    }
    return 0;
}


