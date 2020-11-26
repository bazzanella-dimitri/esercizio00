#include "prime.h"
#include <iostream>

using namespace std;

int main(){
    int max;
    cout << "Insert upper boun of prime computation: ";
    cin >> max;

    int countPrimes=0;

    for (int i = 0; i < max; i++)
    {
       if (isPrime(i)) {
           countPrimes++;
       }
    }
    cout << "Old version fuond" << countPrimes
         << "prime numbers" << endl;

}
bool isPrime(int n);

#endif