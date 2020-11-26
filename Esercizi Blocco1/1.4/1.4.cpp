#include <iostream>

using namespace std;


int main() {
    int espressione= 2;

    for (int i = 1; i<=espressione; i++)
    {
        espressione*=i;

        cout << "Numeri: "<< i << endl;
    }
    return 0;
}