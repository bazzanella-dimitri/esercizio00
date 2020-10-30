/*
Program that splits number into digits
*/

#include <iostream>
#include "splitter.hpp"
using namespace std;

int main () {
    int number, index;
    cout << "Inserisci numero da splittare: " << endl;
    cin >> number;

    cout << "Inserisci indeice: " << endl;
    cin >> index;

    cout << splitter(number,index);
}