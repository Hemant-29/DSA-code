#include <iostream>
using namespace std;

int main()
{
    char charray[30];
    // input in character array with spaces
    cout << "Enter input array : ";
    cin.getline(charray, 30);

    // output the character array
    cout << charray << endl;
}