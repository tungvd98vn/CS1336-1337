// CS 1337.003 Project 2 tdv160130 Tung Vu

#include <iostream>

using namespace std;

struct heatlhInfo{
    float temperature;
    float voltage;
};
struct expInfo{
    unsigned int radiation_count;
    unsigned int latchup_events;
};

union packet{
    heatlhInfo Health;
    expInfo Exp;
};
int menu(int);

int main(){
    int choice


    return 0;
}

int menu(int Choice){
    cout << "1 - Enter a packet of satellite health information" << endl;
    cout << "2 - Enter a packet of experiment information" << endl;
    cout << "3 - Print Summary information on the telemetry and exit the program" << endl;


}

