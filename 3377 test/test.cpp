
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;

int main(){

    string input;
    do{
        cout << "enter command: " << endl;
        getline(cin, input);
        if (input == "exit") break;
        istringstream iss(input);
        int k = 0;
        do {
            string subs;
            iss >> subs;
            if (k == 0){ // command
                cout << "Command: " + subs << endl;
                k++;
            }
            if (subs.find(".") != string::npos) cout << "Argument: " + subs << endl;
            if (subs.find("$") != string::npos) cout << "Argument: " + subs << endl;

            int n = subs.length(); // bat dau option thi bi bug
          //  cout<<"sub is "<<subs<<endl;
            if (subs[0] == '-'){
                for (int i = 1; i < n; i++){
                    cout << "Option: " <<subs[i] << endl;
                }
            }

            if (subs == "<" || subs == ">" || subs == ">>") cout << "File Redirection: " + subs << endl;
            if (subs == "|"){
                cout << "Pipe" << endl;
                k = 0;
            }


        } while (iss);
    } while (input != "exit");
}
