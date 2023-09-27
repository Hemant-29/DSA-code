#include <iostream>
using namespace std;

int main()
{
    // If the array has to be hardcoded
    char characters[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // Note the null charcter at the end of the array of characters

    // Printing the charcters array
    cout << characters << endl;

    // Defining a character array
    char charArr[5];

    // taking inupt into character array
    cout << "Input the array: ";
    cin >> charArr;

    // print the output
    cout << "output is : " << charArr << endl;
}