// CS 1337.003 Project1 tdv160130 Tung Vu
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void askName();
void rowAcol();
void symmetry(float[], int);

float NUM_ROW = 0.0, NUM_COL = 0.0; // number of rows and columns
float number;
const int MAX_NUMBER = 20;
float numbers[MAX_NUMBER][MAX_NUMBER] = {}; // create an array for numbers in file
int row = 0, column = 0;
float sum[] = {}; // create an array for the sum of each column, initialized to 0
ifstream inputFile;
string filename;

int main(){

    do{
        askName();// ask the user to enter file name
        rowAcol();// check the validation of the file
    }while (NUM_ROW > 20 || NUM_COL > 20 || NUM_ROW == 0 || NUM_COL == 0);

    for (row = 1; row < NUM_ROW + 1; row++){ // assign numbers in the file to an array
        for (column = 0; column < NUM_COL; column++){
            inputFile >> number;
            numbers[row][column] = number;
        }
    }

    for (column = 0; column < NUM_COL; column++){ // calculate the sum of each column
        for (row = 1; row < NUM_ROW + 1; row++){
             sum[column] += numbers[row][column];
        }
    }

    symmetry(sum,NUM_COL); // Determine if file is symmetry or not

    for (row = 1; row < NUM_ROW + 1; row++){ // Sorting
        int startScan;
        float maxValue;
        int maxIndex;
        for (startScan = 0; startScan < (NUM_COL -1); startScan++){
            maxIndex = startScan;
            maxValue = numbers[row][startScan];
            for (int index = startScan +1; index < NUM_COL; index++){
                if (numbers[row][index] > maxValue){
                    maxValue = numbers[row][index];
                    maxIndex = index;
                }
            }
        numbers[row][maxIndex] = numbers[row][startScan];
        numbers[row][startScan] = maxValue;
        }
    }

    for (row = 1; row < NUM_ROW + 1; row++){ // print the sorted rows to the screen
        for (column = 0; column < NUM_COL; column++){
            cout << numbers[row][column] << " ";
        }
        cout << endl;
    }
    return 0;
}

void askName (){
    do{
        cout << "Please enter the name of a file: ";
        getline(cin, filename);

        if (filename.length() == 0) continue; // if the user just hit enter

        inputFile.open(filename.c_str());

        if (inputFile.fail()){ // fail to open the file
            cout << "Error opening the file" << endl;
        }
    } while (filename.length() == 0 || inputFile.fail());
}
void rowAcol(){
     do { // get the first 2 numbers of the file and assign them to row and column
            inputFile >> number;
            if ((inputFile >> number).fail()) {
                cout << "an lon";
            }
            numbers[row][column] = number;
            column++;
            NUM_ROW = numbers[0][0];
            NUM_COL = numbers[0][1];

        } while (column < 2);
    int num_row = NUM_ROW;
    int num_col = NUM_COL;
    if (NUM_ROW - num_row != 0 || NUM_COL - num_col != 0 ){ // if row and column is not integer
        cout << "Invalid input file, please open another file";
        exit(EXIT_FAILURE);
    }
    if (NUM_ROW > 20 || NUM_COL > 20 || NUM_ROW == 0 || NUM_COL == 0) // if there is more than 20 rows or columns or row or column equal 0
        cout << "Invalid input file, please open another file" << endl;
}

void symmetry (float sum[], int col){ // compare each pair of first and last number
    int first = 0;
    int last = col -1;
    bool symmetry = true;
    while (symmetry && first <= last){
        if (sum[first] == sum[last]){ first++; last--;}
        else symmetry = false;
    }
    if (symmetry){
        cout << "vertical additive symmetry" << endl;
    }
    else {
        cout << "no vertical additive symmetry" << endl;
    }
}






