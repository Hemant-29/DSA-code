#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 7, 8, 9, 5};
    int *ptr = arr; // Note that:- arr, &arr[0] both are the same thing
                    // they refers to the address of the first index of the array

    cout << "Prints the address stored in ptr : " << ptr << endl;
    cout << "Prints the value stored at the address where ptr is pointing at : " << *ptr << endl;
    // Note that ptr is pointing to the base address of array here
    // that is :- address of arr[0]

    cout << "Prints the value stored at 1 index further from the base index: " << *(ptr + 1) << endl;
    cout << "Prints the value stored at 2nd index from the base index: " << *(ptr + 2) << endl;
    cout << "Prints the value stored at 3rd index from the base index: " << *(ptr + 3) << endl;
    cout << "prints the (value stored at base index) + 1" << *ptr + 1;

    cout << endl;
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    return 0;
}