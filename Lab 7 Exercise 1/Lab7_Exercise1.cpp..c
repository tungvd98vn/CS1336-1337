// CS 1136 Lab 7 - Nested Loop Sample
#include <iostream>
using namespace std;
int main()
{
 int x, y;
 cout << "Enter an integer in the range 1-20: ";
 cin >> x;
 cout << "Enter another integer in the range "
 << "1-20: ";
 cin >> y;
 for (int i = 1; i <= y; i++)
 {
 for (int j = 1; j <= x; j++)
 {
 cout << '@';
 }
 cout << endl;
 }
 return 0;
}

