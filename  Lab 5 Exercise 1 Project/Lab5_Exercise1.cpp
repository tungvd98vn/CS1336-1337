
// Lab 5 Exercise 1
// Financial aid program
//
// Program by: Tung Vu

#include <iostream>

using namespace std;

int main () {

    char undergrad;

    cout << "Are you an undergraduate student? "; // ask if the user is an undergraduate student
    cin >> undergrad; // // input 'y' for yes, 'n' for no

    if (undergrad == 'y'){ // if the user is an undergraduate student
        int income;
        cout << "What is your current yearly income? ";
        cin >> income;
        if (income < 0){ // if the user input yearly income smaller than 0
            cout << "Invalid input! Your income must be greater than or equal to 0." << endl;
        }
        else if (income > 15000){ // if yearly income greater than 15000
            cout << "You qualify for $500 in financial aid." << endl;
        }
        else { // yearly income greater or equal than 0 and smaller or equal 15000
             cout << "You qualify for $1000 in financial aid." << endl;
        }
    }
    else if (undergrad == 'n'){ // if the user is not an undergraduate student
        cout << "You do not qualify for financial aid" << endl;
    }
    else { // if the user enter neither 'y' or 'n'
        cout << "Invalid input, please try again." << endl;
    }

    return 0;
}
