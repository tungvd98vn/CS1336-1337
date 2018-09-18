// Lab 6 Optional
//
// Program by: Tung Vu

#include <iostream>
using namespace std;

int main (){
    int number1, number2,sum;
    cout << "Please enter the first number: ";
    cin >> number1;
    cout << "Please enter the second number: ";
    cin >> number2;

    if (number1 < number2){
        sum = 0;
        while (number1 <= number2){
            sum += number1++;
        }
        cout << "The result is: " << sum << endl;
    }
    else if (number2 < number1){
        sum = 0;
        while (number2 <= number1){
            sum += number2++;
        }
        cout << "The result is: " << sum << endl;
    }
    else
        cout << "The result is: " << number1 << endl;

    return 0;
}
