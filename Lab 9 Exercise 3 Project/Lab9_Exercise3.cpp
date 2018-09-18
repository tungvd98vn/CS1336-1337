
// Lab 9 Exercise 3
// Currency conversions
//
// Program by:     Tung Vu
#include <iostream>
#include <iomanip>

using namespace std;

// This program will get an amount in US dollars and convert it
// to another currency

// Prototypes of the functions
// Prototypes of the functions
float convertToYen(float dollars);
void convertToEurosAndPesos(float dollars, float& euros, float& pesos);

int main ()
{
   float dollars, euros, pesos, yen;
   cout << fixed << showpoint << setprecision(2);
   cout << "Please input the amount of US Dollars "
        << "you want converted: ";
   cin >> dollars;
   cout << "The value of " << dollars << " Dollars is:" << endl;
   yen = convertToYen(dollars); // function call
   cout << yen << " Yen" << endl;

   convertToEurosAndPesos(dollars, euros, pesos); // function call
   cout << euros << " Euros" << endl;
   cout << pesos << " Pesos" << endl;

   return 0;
}

float convertToYen(float dollars){ // convert to yen function
    return dollars * 104.75;
}
void convertToEurosAndPesos(float dollars, float& euros, float& pesos){ // convert to euros and pesos function
    euros = dollars * 0.77;
    pesos = dollars * 13.07;
}
