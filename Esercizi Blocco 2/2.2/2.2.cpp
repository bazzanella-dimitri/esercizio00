#include <iostream>

using namespace std;
  

int main() {
    
    int massimoCifre;
    int somma=0;
    int numero;

    cout << "Quante cifre vuoi inserire? ";
    cin >> massimoCifre;

    int a[massimoCifre];

     for (int i=0; i < massimoCifre; i++)
     {
        cout << "Inserisci "<< (i+1) <<"° numero"<< endl;
        cin >> numero;
        somma+= numero;
     }
     
     cout << "La somma dei numeri equivale a: " << somma;
     return 0;
        
}