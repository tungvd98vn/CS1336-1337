// Lab 10 Exercise 1
// An array of 10 integers
//
// Program by: Tung Vu

#include <iostream>

using namespace std;
void intInput (int [], int); // function prototypes0
void display (int []);       //

int main (){
    const int Number_of_integers = 10; // number of integers is a constant
    int integers[10]; // create the main array

    intInput(integers, Number_of_integers); // function call

    cout << endl;
    cout << "The values in reverse order are:" << endl;

    display(integers); // function call

    return 0;
}

void intInput(int integers[], int Number_of_integers ){ // get the integers from user and store them in the array
        for (int index = 0; index < Number_of_integers; ++index){
            cout << "Enter number " << index + 1 << ": ";
            cin >> integers[index];
        }
}

void display(int integers[]){ // display the elements in the array in inverse order
    for (int index = 9; index >= 0; --index){
        cout << "Value number " << index + 1 << " is " << integers[index] << endl;
    }
}
