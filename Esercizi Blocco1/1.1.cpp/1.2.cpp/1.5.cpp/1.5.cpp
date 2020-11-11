#include <iostream>

using namespace std;

int main () {
    int n;
    int fattoriale=1;

    cout << "Dammi un numero: " << endl;
    cin >> n;

    if (n>=13){
        
        cout << "Non posso calcolarlo" << endl;
    }
    
    for (int i=n; i>1 ; i--)
    {
        fattoriale*=i;
    }
    cout << "Il fattoriale equivale a: "<< fattoriale << endl;

    if (n==0)
    {
        cout << "Il fattoriale equivale a: 1" << endl;
    }     
    
    return 0; 
}
