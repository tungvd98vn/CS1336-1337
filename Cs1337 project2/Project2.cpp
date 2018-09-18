// CS 1337.003 Project 2 tdv160130 Tung Vu

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cctype>
using namespace std;

struct healthInfo{ // structure contains health information
    float temperature;
    float voltage;
};
struct expInfo{    // structure contains experiment information
    unsigned int radiation_count;
    unsigned int latchup_events;
};

union packet{      // union contains health information and experiment information
    healthInfo Health;
    expInfo Exp;
};

int menu();        // function for getting choice from user
void selectionSort (float [], int); // function for sorting
int getExp();   // function for getting experiment information
float getHealth(); // function for getting health information

int main(){

    int choice = 0;
    int sumRAD = 0, sumLAT = 0; // sum of radiation count, sum of latchup events, initialized to 0
    int countHealth = 0, countExp = 0; // number of health info packets, number of exp info packets
    float Temp[100] = {0}; // array for temperature
    float Vol[100] = {0};;  // array for voltage
    packet Packet;

    do{ // repeat until user choses option 3
        choice = menu();

        if (choice == 1){ // option 1
        //  get the temperature and assign it to temperature array
            cout << "Enter the temperature: ";
            Packet.Health.temperature = getHealth();
            Temp[countHealth] = Packet.Health.temperature;


            cout << "Enter the voltage: ";
            Packet.Health.voltage = getHealth();
            Vol[countHealth] = Packet.Health.voltage;

            countHealth++;  // counter of number of health packets
            cout << endl;
        }

        if (choice == 2){ // option 2
        //  get the radiation count and add it to sumRAD
            cout << "Enter the radiation count: ";
            Packet.Exp.radiation_count = getExp();
            sumRAD += Packet.Exp.radiation_count;

            cout << "Enter the latchup events: ";
            Packet.Exp.latchup_events = getExp();
            sumLAT += Packet.Exp.latchup_events;

            countExp ++; // counter of number of experiment packets
            cout << endl;
        }
    } while (choice != 3);

    // when user has chosen 3
    selectionSort(Temp, countHealth); // sort the temperatures
    selectionSort(Vol, countHealth);  // sort the voltages

    // Print the results to the screen
    if (countHealth == 0){
        cout << "No health information packet has been entered" << endl;
        cout << endl;
    }
    else {
        cout << "Number of satellite health information packets: " << countHealth << endl;
        cout << left << setw(48) << "  Maximum temperature:" << fixed << setprecision(1) << Temp[countHealth - 1] << endl;
        cout << left << setw(48) << "  Minimum temperature:" << fixed << setprecision(1) << Temp[0] << endl;
        cout << left << setw(48) << "  Maximum voltage:" << Vol[countHealth - 1] << endl;
        cout << left << setw(48) << "  Minimum voltage:" << Vol[0] << endl;
        cout << endl;
    }
    if (countExp == 0){
        cout << "No experiment information packet has been entered" << endl;
    }
    else {
        cout << left << setw(48) << "Number of experiment information packets: " << countExp << endl;
        cout << left << setw(48) << "  Total radiation count:" << sumRAD << endl;
        cout << left << setw(48) << "  Total latchup events:" << sumLAT << endl;
    }

    return 0;
}

int menu(){
    string choice;
    int Choice = 0;
    bool num = true;
    cout << "Please enter the number for the desired action (1, 2, 3)" << endl;
    cout << "  1 - Enter a packet of satellite health information" << endl;
    cout << "  2 - Enter a packet of experiment information" << endl;
    cout << "  3 - Print Summary information on the telemetry and exit the program" << endl;

    do{
        do{ // check if user just hit enter
            getline(cin, choice);
            if (choice.length() == 0){
            cout << "Please enter a number" << endl;
            }
        } while (choice.length() == 0);
        num = true;
        for (char& c : choice){
                if (isdigit(c) != true && c != '-' && c!='.') num = false;
        }
        if (num == false){
            cout << "Invalid choice. Please enter a number" << endl;
            continue;
        }
        Choice = atoi(choice.c_str());
        if (!(atoi(choice.c_str()))) { // user dont enter a number
                cout << "Invalid choice. Please select option 1-3" << endl;
                continue;
        }
        if (Choice < 1 || Choice > 3){
            cout << "Invalid choice. Please select option 1-3" << endl;
        }
    } while (Choice < 1 || Choice > 3);

    return Choice;
}

void selectionSort (float hpinfo[], int size){
    int startScan;
    float minValue;
    int minIndex;
    for (startScan = 0; startScan < (size -1); startScan++){
        minIndex = startScan;
        minValue = hpinfo[startScan];
        for (int index = startScan +1; index < size; index++){
            if (hpinfo[index] < minValue){
                minValue = hpinfo[index];
                minIndex = index;
            }
        }
        hpinfo[minIndex] = hpinfo[startScan];
        hpinfo[startScan] = minValue;
    }
}



int getExp(){
    int Choice = 0;
    string choice;
    bool num = true;
    do{
        do{
            getline(cin, choice);
            if (choice.length() == 0){
            cout << "enter an unsigned integer" << endl;
            }
        } while (choice.length() == 0);
        num = true;
        for (char& c : choice){
                if (isdigit(c) != true && c != '-') num = false;
        }
        if (num == false){
            cout << "Invalid choice. Please enter an unsigned integer" << endl;
            continue;
        }
        Choice = atoi(choice.c_str());
        if ((atoi(choice.c_str()) == 0)) {
            bool zero = true;
            for (char& c : choice){
                if (c != '0') zero = false;
            }
            if (zero == true) {Choice = 0; break;}
            else cout << "Invalid choice. Please enter an unsigned integer" << endl;
        }
        if (Choice < 0){
            cout << "Invalid choice. Please enter an unsigned integer" << endl;
        }
    } while (Choice < 0 || (atoi(choice.c_str()) == 0) || num == false);
    return Choice;
}

float getHealth(){
    float Choice = 0;
    string choice;
    bool num = true;
    do{
        do{
            getline(cin, choice);
            if (choice.length() == 0){
            cout << "Please enter a number" << endl;
            }
        } while (choice.length() == 0);
        num = true;
        for (char& c : choice){
            if (isdigit(c) != true && c != '-' && c!='.') num = false;
        }
       if (num == false){
            cout << "Invalid choice. Please enter a number" << endl;
            continue;
       }
        Choice = atof(choice.c_str());
        if ((atof(choice.c_str()) == 0)) {
            bool zero = true;
            for (char& c : choice){
                if (c != '0') zero = false;
            }
            if (zero == true) {Choice = 0; break;}
            else cout << "Invalid choice. Please enter a number" << endl;
        }
    } while ((atof(choice.c_str()) == 0) || num == false);
    return Choice;
}
