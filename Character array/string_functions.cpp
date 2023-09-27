#include <iostream>
#include <cstring>

using namespace std;

void upperCase(char arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = (int)arr[i] - 32;
        (char)arr[i];
    }
}

int main()
{
    char charray[50] = {'h', 'e', 'l', 'l', 'o', '\0'};

    // Output the length of the character array
    int length = strlen(charray);
    cout << length << endl;

    // Output the character array after reversal
    strrev(charray);
    cout << charray << endl;

    // Output the character array after converting all charcters to uppercase
    upperCase(charray, length);
    cout << charray << endl;
}