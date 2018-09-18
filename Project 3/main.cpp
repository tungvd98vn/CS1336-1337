// CS 1336.016 Project 3 <tdv160130> <Tung Vu>

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main (){

    ifstream inputFile;
    string filename;
    float number, sum = 0, average;
    int count = 0;

    do{ // Make sure the user enter something for the filename
        cout << "Please enter the name of a file containing a list of numbers: ";
        getline(cin, filename);
    } while (filename.length() == 0);


    inputFile.open(filename.c_str()); // open the file

    if (inputFile.fail()){ // if the file does not exist, display a message
        cout << "Error opening the file.\n";
    }
    else{ // if the file is successfully opened
        while (inputFile >> number){
            count++;
            sum += number;
        }

    if (count == 0){ // if there are no numbers in the file
        cout << "No numbers were found is the file. Cannot calculate the average." << endl;
    }
    else {
        cout << "There are " << count << " numbers read from the file" << endl;
        cout << "The sum of the numbers read from the file is " << sum << endl;
        average = sum / count;
        cout << "The average of the numbers from the file is " << average;

        inputFile.close(); // close the file
        }
    }
    return 0;
}
