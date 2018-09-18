// Lab 8 Exercise 2
// Determine if your heart beat rate is within the
// target heart rate.
//
// Program by: Tung Vu

#include <iostream>
int targetRate(int, int); // function prototype

using namespace std;

int main(){
    int age, heartbeats, within; // declare the variables

    do{
        cout << "Enter your age: "; cin >> age;
        if (age > 0){
            cout << "Enter your heart beats per minute: "; cin >> heartbeats;
            within = targetRate(age, heartbeats); // call function targetRate
            if (within == 1) cout << "You are in your target heart rate"<< endl;
            else cout << "You are not in your target heart rate" << endl;
        }
    } while (age > 0);

    return 0;
}

int targetRate(int age, int heartbeats){
    int maxRate, mintargetRate, maxtargetRate, within; // declare the variables

    // calculation
    maxRate = 220 - age;
    mintargetRate = maxRate * 0.6;
    maxtargetRate = maxRate * 0.7;

    // if not in target heart rate
    if (heartbeats < mintargetRate || heartbeats > maxRate) within = 0;
    else within = 1;

    return within; // return value to main

}
