#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

#define L 1000
#define FILENL 30
#define ALPHALEN 26
#define OFFSET 97

int countChars(char toCount[], int alphabet[]) {
    int i = 0;
    char c = toCount[0];

    while (c != '\0')
    {
        if(isalpha(c)) {
            c= tolower(c);

            alphabet[c - OFFSET]++;
           
        }

        i++;
        c= toCount[i];
    }
    return i;
}

int main()
{
    int alphabet[ALPHALEN] = {};
    char input[L];

    cout << "Enter string to check: ";
    cin.getline(input, sizeof(input));

    cout << "Examined " << countChars(input, alphabet) << "chars. " << endl;

    for (int i = 0; i < ALPHALEN; i++)
    {
        cout << (char) (i + OFFSET) << "\t" << alphabet[i] << endl;
    }
    
}