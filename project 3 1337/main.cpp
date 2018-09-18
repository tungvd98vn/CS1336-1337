
// CS 1337.003 Project 3 tdv160130 Tung Vu

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <cstdlib>
#include <iomanip>

#include "ElectricComponent.h"
#include "Resistor.h"
#include "Capatitor.h"
#include "Battery.h"

using namespace std;

int getChoice(); // get the choice from the menu
double getValue(); // get the value of the component

int main () {

    ElectricComponent *Components[100]; // array of pointers to electric component
    double value;
    int choice = 0;
    int i = 0; // variable holds the count of instances of components
    do {
        choice = getChoice();
        if (choice == 1){
            cout << "Please enter a value for the component" << endl;
            value = getValue();
            Resistor *ptr = new Resistor(value); // dynamically create a resistor
            Resistor r(value);
            Components[i] = ptr;
            (*Components[i]).setUnits("Ohms(s)");
        }
        if (choice == 2){
            cout << "Please enter a value for the component" << endl;
            value = getValue();
            Capatitor *ptr = new Capatitor(value); // dynamically create a capatitor
            Capatitor c(value);
            Components[i] = ptr;
            (*Components[i]).setUnits("Farad(s)");
        }
        if (choice == 3){
            cout << "Please enter a value for the component" << endl;
            value = getValue();
            Battery *ptr = new Battery(value);// dynamically create a battery
            Battery b(value);
            Components[i] = ptr;
            (*Components[i]).setUnits("Volt(s)");
        }
        if (choice == 4 && i == 0){
            cout << "No data have been provided" << endl;
            exit(EXIT_FAILURE);
        }
        i++;

    } while (choice != 4);



    // 1st pass through the array, print value and unit of each component
    for (int j = 0; j < i - 1; j++){
        cout << "Component value is " << (*Components[j]).getVal() << " " << (*Components[j]).getUnit() << endl;
    }
    cout << endl;
    // 2nd past through array,  print information of components
    for (int index = 0, count = 1; index < i - 1; index++, count++ ){
         cout << "Component " << count << " " << *Components[index] << endl; // required code fragment
    }

    return 0;
}

int getChoice (){
    cout << "Please enter 1, 2 , 3 or 4:" << endl;
    cout << "  1 - Enter information about a resistor" << endl;
    cout << "  2 - Enter information about a capacitor" << endl;
    cout << "  3 - Enter information about a battery" << endl;
    cout << "  4 - Print component information and terminate the program" << endl;
    int Choice = 0;
    string choice;
    bool num = true;
    do{
        do{
            getline(cin, choice);
            if (choice.length() == 0){
            cout << "Please enter ONLY 1, 2, 3 or 4" << endl;
            }
        } while (choice.length() == 0);
        num = true;
        for (char& c : choice){
            if (isdigit(c) != true || c == '-' || c =='.') num = false;
        }
       if (num == false){
            cout << "Enter not accepted. Please enter ONLY 1, 2, 3 or 4" << endl;
            continue;
       }
        Choice = atof(choice.c_str());
        if (Choice < 1 || Choice > 4) {
            cout << "Enter not accepted. Please enter ONLY 1, 2, 3 or 4" << endl;
        }

    } while ((atof(choice.c_str()) == 0) || num == false || Choice < 1 || Choice > 4);
    return Choice;
}

double getValue(){
    double Value = 0;
    string value;
    bool num = true;
    do{
        do{
            getline(cin, value);
            if (value.length() == 0){
            cout << " Please enter ONLY a positive, floating point value" << endl;
            }
        } while (value.length() == 0);
        num = true;
        for (char& c : value){
            if (isdigit(c) != true && c!='.') num = false;
        }
       if (num == false){
            cout << "Entry not accepted. Please enter ONLY a positive, floating point value" << endl;
            continue;
       }
        Value = atof(value.c_str());
        if (atof(value.c_str()) == 0){
            cout << "Entry not accepted. Please enter ONLY a positive, floating point value" << endl;
        }
    } while ((atof(value.c_str()) == 0) || num == false);
    return Value;

}
