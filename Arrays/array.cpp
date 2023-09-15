#include <iostream>
using namespace std;

int main()
{
    // Initializing array
    int arr[100];

    // Array elements are stored in contiguous memory location
    for (int i = 0; i < 100; i++)
    {
        std::cout << "address of element" << i + 1 << " : " << (int)&(arr[i]) << std::endl;
    }

    // To find the size of array
    cout << sizeof(arr) << endl;
    // Different ways to find address of an array
    cout << addressof(arr) << endl;
    cout << &arr << endl;
    cout << arr << endl;
}