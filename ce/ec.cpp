
// CS 1336.504 Project 4 <tdv160130> <Tung Vu>

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int menu();
int random();
void choice(int);
int result(int, int);
const int rock = 1, paper = 2, scissors = 3, lizard = 4, spock = 5;

int main (){
    int userChoice, comChoice; // define variables
    userChoice = menu();  // display the menu and get the user's choice
    comChoice = random(); // get the computer's choice

    // display the choices
    cout << "The computer selected "; choice(comChoice);
    cout << "The user selected "; choice(userChoice);

    // display the result
    int winner = result(userChoice, comChoice);
    if (winner == 1) cout << "The user won :)" << endl;
    else if (winner == 2) cout << "The computer won :(" << endl;
    else cout << "The game was a tie" << endl;

    return 0;
}

int menu (){ // display the menu and get the user's choice
        int option = 0;
        cout << "1 - rock" << endl << "2 - paper" << endl << "3 - scissors" << endl
             << "4 - lizard" << endl << "5 - spock" << endl;
        do{
            cout << "Please select your desired option for this round: ";
            cin >> option;
            if (cin.fail()){ // if the user enters something that is not a number
                cin.clear();
                cin.ignore(100,'\n');
                cout << "Wrong input. Please select option 1 - 5." << endl;
                continue;
            }
            if (option < 1 || option > 5){
                cout << "Wrong input. Please select option 1 - 5." << endl;
            }
        } while (option < 1 || option > 5);
    return option;
}

int random(){ // get a random number
    int r;
    unsigned seed = time(0);
    srand(seed);
    r = (rand() % (5 - 1 + 1)) + 1;
    return r;
}

void choice(int c){ // the choices
    if (c == 1) cout << "rock." << endl;
    if (c == 2) cout << "paper." << endl;
    if (c == 3) cout << "scissors." << endl;
    if (c == 4) cout << "lizard." << endl;
    if (c == 5) cout << "spock." << endl;
}

int result(int P1, int P2){ // compare the choices and return the result
    if(P1 == scissors && P2 == paper || P2 == scissors && P1 == paper )
        return (P1 == scissors && P2 == paper ? 1 :2);
    else if(P1 == paper && P2 == rock || P2 == paper && P1 == rock )
        return (P1 == paper && P2 == rock ? 1 :2);
    else if(P1 == rock && P2 == lizard || P2 == rock && P1 == lizard )
        return (P1 == rock && P2 == lizard ? 1 :2);
    else if(P1 == lizard && P2 == spock || P2 == lizard && P1 == spock )
        return (P1 == lizard && P2 == spock ? 1 :2);
    else if(P1 == spock && P2 == scissors || P2 == spock && P1 == scissors )
        return  (P1 == spock && P2 == scissors ? 1 :2);
    else if(P1 == scissors && P2 == lizard || P2 == scissors && P1 == lizard )
        return (P1 == scissors && P2 == lizard ? 1 :2);
    else if(P1 == lizard && P2 == paper || P2 == lizard && P1 == paper )
        return (P1 == lizard && P2 == paper ? 1 :2);
    else if(P1 == paper && P2 == spock || P2 == paper && P1 == spock )
        return(P1 == paper && P2 == spock ? 1 :2);
    else if(P1 == spock && P2 == rock || P2 == spock && P1 == rock )
        return (P1 == spock && P2 == rock ? 1 :2);
    else if(P1 == rock && P2 == scissors || P2 == rock && P1 == scissors )
        return (P1 == rock && P2 == scissors ? 1 :2);
    else
        return 0;
}


