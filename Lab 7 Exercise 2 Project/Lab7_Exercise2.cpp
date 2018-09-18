
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main (){
    ifstream inputFile;
    double number, count = 0.0; //  count is the amount of number
    double countNe = 0.0, countZe = 0.0, countPo = 0.0; // the amount if negative numbers, zero and positive numbers

    inputFile.open("numbers.txt"); // open file
    if (inputFile){ // if file opened successfully
        while (inputFile >> number){ // number is read
            count++;
            if (number < 0) countNe++;
            if (number == 0) countZe++;
            if (number > 0) countPo++;
        }

        double perNe, perZe, perPo; // percentage of negative numbers, zero and positive numbers

        // Calculation
        perNe = countNe/count * 100.0;
        perZe = countZe/count * 100.0;
        perPo = countPo/count * 100.0;

        // Print out the results
        cout << "There were " << fixed << setprecision(1) << perNe << "% negative numbers." << endl;
        cout << "There were " << fixed << setprecision(1) << perZe << "% numbers equal to zero." << endl;
        cout << "There were " << fixed << setprecision(1) << perPo << "% numbers greater than zero." << endl;

        inputFile.close(); // close file
    }
    else cout << "Unable to open input file\n" << endl; // if file is not opened successfully

    return 0;
}
