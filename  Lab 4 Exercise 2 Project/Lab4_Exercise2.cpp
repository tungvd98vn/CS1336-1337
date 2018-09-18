// Lab 4 Exercise 2
// History grading project
//
// Program by: Tung Vu

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int test1, test2, test3, keptTest, points;

    // Put in the points of each test


    cout << "Enter the score for test #1: ";
    cin >> test1;

    cout << "Enter the score for test #2: ";
    cin >> test2;

    cout << "Enter the score for test #3: ";
    cin >> test3;

    // Print out the points of each test

    cout << "First test:" << right << setw(6) << test1 << endl;
    cout << "Second test:" << right << setw(5) << test2 << endl;
    cout << "Third test:" << right << setw(6) << test3 << endl;

    // Chose 1 of the first 2 tests and calculate the points


    if (test1 >= test2) {
        keptTest = test1;
        points = keptTest + test3;
        cout << "After dropping test #2, the points earned are " << points << " ." << endl;
    }
    else  {
        keptTest = test2;
        points = keptTest + test3;
        cout << "After dropping test #1, the points earned are " << points << " ." << endl;
    }

    // Transfer the points to letter grade

    if (points >= 92) {
        cout << "The letter grade is A." << endl;
    }
    else if (points >= 82) {
        cout << "The letter grade is B." << endl;
    }
    else if (points >= 72) {
        cout << "The letter grade is C." << endl;
    }
    else
        cout << "The letter grade is F." << endl;


    return 0;
}
