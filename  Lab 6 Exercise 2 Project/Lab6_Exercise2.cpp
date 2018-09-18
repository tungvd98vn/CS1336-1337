// Lab 6 Exercise 2
// Calculate investment amount
//
// Program by: Tung Vu

#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    double investAmount;
    cout << "Enter the amount of the investment" << endl;
    cout << endl;
    cout << "The minimum investment is $10,000.00." << endl;
    cin >> investAmount; // enter the initial investment amount
    while  (investAmount < 10000) { // input validation
        cout << "Error, the minimum investment is $10,000.00." << endl;
        cout << "Enter the amount of the investment: " << endl;
        cin >> investAmount; // re-enter the number
    }

    double annualInterestRate;
    cout << "Enter the annual interest rate: ";
    cin >> annualInterestRate; // enter the annual interest rate
    while  (annualInterestRate < 0) { // input validation
        cout << "Error, the interest rate should be positive." << endl;
        cout << "Enter the annual interest rate: ";
        cin >> annualInterestRate;  // re-enter the annual interest rate
    }

    int month;
    cout << "Enter the number of months of the investment: ";
    cin >> month; // enter number of months
    while  (month < 0) { // input validation
        cout << "Error, the number of months should be positive." << endl;
        cout << "Enter the number of months of the investment: ";
        cin >> month; // re-enter number of months
    }

    float monthlyInterestRate, investBalance, interestEarned;
    monthlyInterestRate = (annualInterestRate/12)/100; // calculate the monthly interest rate
    investBalance = 1 * investAmount; // save the initial invest amount into invest balance

    for(int minMonth = 0; minMonth < month; ++minMonth){
        interestEarned = investBalance * monthlyInterestRate; // calculate the interest earned
        investBalance += interestEarned; // increase the value of investment balance by earned interest
    }

    // dis play the message
    cout << "After " << month << " months your investment of $" << investAmount << " will be worth $" << fixed << setprecision(2) << investBalance <<"." << endl;

    return 0;
}
