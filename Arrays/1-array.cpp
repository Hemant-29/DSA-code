#include <iostream>
using namespace std;

int main()
{
    // Initializing array
    int arr[100];

    // Printing the size of each element of array
    cout << "each element's size (and that's the seperation between its two addresses) is: " << sizeof(arr[0]) << endl;
    // Array elements are stored in contiguous memory location
    for (int i = 0; i < 100; i++)
    {
        cout << "address of element " << i + 1 << " : " << (int)&(arr[i]) << endl;
    }

    // To find the size of array
    cout << sizeof(arr) << endl;

    // Different ways to find address of an array
    cout << addressof(arr) << endl;
    cout << &arr << endl;
    cout << arr << endl;
}