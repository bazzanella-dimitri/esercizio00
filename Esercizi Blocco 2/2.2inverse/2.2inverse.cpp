#include <iostream>

using namespace std;
  

int main() {
    
    int massimoCifre;
    int somma=0;
    int numero;

    cout << "Quante cifre vuoi inserire? ";
    cin >> massimoCifre;

    int i=massimoCifre;
    int a[i];

     for (int i=massimoCifre; i > 0; i--)
     {
        cout << "Inserisci numero"<< endl;
        cin >> numero;
        somma+= numero;
     }
     
     cout << "La somma dei numeri equivale a: " << somma;
     return 0;
        
}