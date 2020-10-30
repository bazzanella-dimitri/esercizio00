#include <iostream>

using namespace std;

int main()
{
    int in;
    int sum=0;
    int n=0;
    cout<<"Inserire numero:"<< endl;
    cin >> in;
    while (in !=0) 
    {
        if (in %2==0)
        {
            sum+= in;
            n++;          
        }
        cout << "Inserire numero:"<< endl;
        cin >>in;
    }
    cout<<"Risultato:"<< (float)sum/n<<endl;
    return 0;
    
}
