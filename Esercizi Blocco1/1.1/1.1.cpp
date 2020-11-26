#include <iostream>

using namespace std;

int main() {
    int base, esponente, risultato=1;

    cout << "Inserisci base: " << endl;
    cin >> base;

    cout << "Inserisci esponente: " << endl;
    cin >> esponente;

    if (esponente== 0) {
        cout << "Il risultato e': 1" << endl;
    }

    while (esponente!=0) {
       
        risultato*= base;
        --esponente;
        cout << "Il risultato e': " << risultato << endl;
    }

    return 0;
}
