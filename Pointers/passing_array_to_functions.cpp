#include <iostream>
using namespace std;

int func(int arr[], int size)
{
    // This 👆 arr[] parameter here is not an actual array
    // but a pointer to the base address of the array that is being passed
    cout << "\naddress inside fucntion (&arr) : " << &arr << endl;
    cout << "Value of pointer inside function (arr) : " << arr << endl;
    // Note how only this above value differ out of all 4 of the outputs
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    cout << "\naddress of arr in main using (&arr) : " << &arr << endl;
    cout << "address of arr in main using (arr) : " << arr << endl;
    func(arr, 4);
    return 0;
}