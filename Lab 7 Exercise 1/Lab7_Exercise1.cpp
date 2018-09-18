// Lab 7 Exercise 1
// Display a row of $ characters based on user input
//
// Program by: Tung Vu

#include <iostream>


using namespace std;

int main (){
    int number;
        for (int i = 0; i < 5; i++){
            cout << "Enter the next number (1-10): "; // ask user to enter the number
            cin >> number;
            cin.ignore (200, '\n');
            if (cin.fail()){ //if the input is not number
                cin.clear();
                cin.ignore(200, '\n');
                cout << "You must enter a number" << endl;
                i--;
                continue;
            }
            if (number < 1 || number > 10){ // if the input is number that not in range
                cout << "That is an invalid number" << endl;
                i--;
                continue;
            }
            for (int j = 0; j < number; j++){
                cout << "$"; // print out the amount of $
            }
            cout << endl;
        }
    return 0;
}
