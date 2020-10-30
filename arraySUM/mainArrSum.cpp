/*
    Il programma legge N numeri e fa la somma
*/


#include <iostream>
#define N 10

using namespace std;

int main () {
    int numbers[N];

    cout <<"Inserisci " << N << " numbers: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    
    int sum= 0;
    for (int i = 0; i < N; i++)
    {
        sum += numbers[i];
    }
    
    cout << "Somma dei numeri: " << sum << endl;
    
}