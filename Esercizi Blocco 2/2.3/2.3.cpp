#include <iostream>

using namespace std;


int main() {

    char frase;
    char a[99];
    int indice;

    
    cout << "Inserisci la tua frase: ";
    cin >> a;

    cin >> indice;
 
    cout << "Ecco il tuo carattere: "<< a[indice-1];
    return 0;
}