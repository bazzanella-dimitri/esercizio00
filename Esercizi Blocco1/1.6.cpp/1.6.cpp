#include <iostream>

using namespace std;

int main () {
    int n;
    float fattoriale=1.0;
    float e=1.0;
    

    cout << "Dammi un numero: ";
    cin >> n;

    for (int i=1; i<n; i++) //inizializza a 1 perchè se a 0 da errore (1/0=imp.)
                            
    {
        fattoriale*=i;
        e+= 1/fattoriale; //ad ogni ciclo somma e al reciproco del fattoriale, approssimando il risultato
    }
    cout << "e= " << e;
    return 0;

}