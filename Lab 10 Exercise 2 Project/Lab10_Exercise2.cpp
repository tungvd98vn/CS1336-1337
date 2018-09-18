
// Lab 10 Exercise 2
// Still more counting
//
// Program by: Tung Vu

#include <iostream>

using namespace std;
int counter(int [], int, int, int []); // function prototypes
void display (int, int);               //


int main(){
    int const Max_number = 1000;
    int value,number_of_elements;
    int numbers[Max_number]; // array of qualified numbers
    int index = 0;
    int num_occ = 0; // number of occurrence
    int already [Max_number] = {0}; // initialize all elements to 0
    do { // get the values from user
        cout << "Enter a one-digit number or 10 to exit: ";
        cin >> value;

        if (value >= 0 && value <= 9){
           numbers[index] = value;
           ++index;
        }
        else if (value == 10) break;
        else cout << "The value " << value << " is not valid." << endl;
    } while (value != 10);

    number_of_elements = index;

    for (int i = 0; i < number_of_elements; ++i){
        num_occ = counter(numbers, number_of_elements, numbers[i], already); // function call
        if (num_occ){
            already[i] = 1; // first time, set to 1
            display(numbers[i], num_occ); // function call
        }
    }
    return 0;
}

int counter(int numbers[], int number_of_elements, int value, int already[]){ // count the occurrence
    int count = 0;
    for (int i = 0; i < number_of_elements; ++i){
        if (numbers[i] == value) {
            if (already[i] != 0) return 0; // if already counted, set to 0
            ++count; // if found
        }
    }
   return count;
}

void display(int value, int num_occ){ // display
    cout << "You entered " << num_occ << " " << value << " (s)" << endl;
}
