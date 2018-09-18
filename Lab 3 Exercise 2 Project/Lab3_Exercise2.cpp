// Lab 3 Exercise 2
// Calculate MPH (Miles Per Hour) and KPH (Kilometers Per Hour).
//
// Program by: Tung Vu

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double startingMileage, endingMileage, hours;

    // Enter the values and print them out onto the screen

    cout << "Enter the starting mileage: ";
    cin >> startingMileage;
    cout << "Enter the ending mileage: ";
    cin>> endingMileage;
    cout << "Enter the number of hours traveled: ";
    cin >> hours;

    double totalMiles, milesPhour, totalKilometers, kilometersPhour;
    const double rate = 1.609344;

    // Calculate the values that needs to be calculated

    totalMiles = endingMileage - startingMileage;
    milesPhour = totalMiles / hours;
    totalKilometers = totalMiles * rate;
    kilometersPhour = milesPhour * rate;

    // Print the results out using right, setw, fixed and setprecision to put the numbers
    // into 1 column.

    cout << "Total miles" << right << setw(15) << fixed << setprecision(1) << totalMiles << endl;
    cout << " Miles/Hour" << right << setw(15) << fixed << setprecision(1) << milesPhour << endl;
    cout << "Total kilometers" << setw(10) << fixed << setprecision(1) << totalKilometers << endl;
    cout << " Kilometers/Hour" << setw(10) << fixed << setprecision(1) << kilometersPhour << endl;

    return 0;
}
