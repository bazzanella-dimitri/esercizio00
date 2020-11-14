#include <iostream>

using namespace std;

int main(){
    int numero; // inizializzo numero
    int sum=0; // inizializzo sommatoria a 1 

    // faccio ciclo for di 10  cicli, aumentando ad ogni ciclo i di 1 
    for (int i = 0; i < 10; i++)
    {
        cout << "Dammi un numero: " << endl;
        cin >> numero;

        sum+=numero; // la somma equivale a somma + il numero messo per ogni ciclo 

    }
    cout << "La somma dei numeri equivale a: " << sum << endl;
    return 0;
}