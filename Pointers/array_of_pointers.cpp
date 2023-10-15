#include <iostream>
using namespace std;

int main()
{
    // This line creates an array "arr" containing 3 elements, each of type int*(pointer)
    int *arr[3];

    int a = 4;
    int b = 7;
    int c = 9;

    // To assign values to the pointers stored in the array "arr":-
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    // Dereferencing the array of pointers
    for (int i = 0; i < 3; i++)
    {
        cout << "index " << i << " has element : " << arr[i] << endl;
        cout << "Value stored at it : " << *arr[i] << endl;
        cout << endl;
    }
    return 0;
}