// Updated version of Lab 5 Exercise 2
// Convert to Roman numerals
//
// Program by: Tung Vu

#include <iostream>

using namespace std;

int main (){
    int number;
    cout << "Enter a number from 1 to 5: ";
    cin >> number; // input the number
    if (number == 1) cout << "The Roman numeral equivalent is : I" << endl;
    else if (number == 2) cout << "The Roman numeral equivalent is : II" << endl;
    else if (number == 3) cout << "The Roman numeral equivalent is : III" << endl;
    else if (number == 4) cout << "The Roman numeral equivalent is : IV" << endl;
    else if (number == 5) cout << "The Roman numeral equivalent is : V" << endl;
    else cout << "The number must be in range of 1 through 5 inclusive." << endl; // if input value is not 1 through 5

    return 0;
}



/*#include <iostream>

using namespace std;

int main (){
    int number;
    cout << "Enter a number from 1 to 5: ";
    cin >> number; // input the number
    switch (number){
        case 1:   cout << "The Roman numeral equivalent is : I" << endl;
                    break;
        case 2:   cout << "The Roman numeral equivalent is : II" << endl;
                    break;
        case 3:   cout << "The Roman numeral equivalent is : III" << endl;
                    break;
        case 4:   cout << "The Roman numeral equivalent is : IV" << endl;
                    break;
        case 5:   cout << "The Roman numeral equivalent is : V" << endl;
                    break;
        // if input value is not 1 through 5
        default:    cout << "The number must be in range of 1 through 5 inclusive." << endl;

    }
    return 0;
}
*/


