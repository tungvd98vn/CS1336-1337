
#include <iostream>
using namespace std;

int main (){
    int width;
    do {
        cout << "Enter the max width: ";
        cin >> width;
        cin.ignore(1000, '\n');
        if (cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "You must enter a number" << endl;
            continue;
        }
        if (width < 4 || width > 80) cout << "Invalid value. Value must be between 4 and 80" << endl;
    } while (width < 4 || width > 80);

    cout << "*" << endl << "**" << endl;
    for (int i = 1; i < (width - 2); i++){
        cout << "*";
        for (int j = 0; j < i; j++) cout << " ";
        cout << "*" << endl;
    }
    for (int k = 0; k < width; k++){
        cout << "*";
    }

    return 0;
}
