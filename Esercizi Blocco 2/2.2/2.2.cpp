#include <iostream>

using namespace std;
  

int main() {

   int somma=0;
   int numero;
   int size;

   cout << "Quanti numeri vuoi sommare? ";
   cin >> size;

   int a[size];


   for (int i=0; i < size; i++)
   {
      cout << "Inserisci "<< (i+1) <<"o numero: ";
      cin >> numero;
      somma+= numero;
   }
     
   cout << "La somma dei numeri equivale a: " << somma;
   return 0;
        
}