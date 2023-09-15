#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{ // Prints the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void assignArray(int arr[], int n)
{ // Adds elements from 1 -> (n) into array
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
}

// A dynamic array is one in which we determine the amount of elements at runtime
// Like, based on user input
int main()
{

    int n;
    cout << "Enter the length of the array : ";
    cin >> n;

    // This is the syntax to assign a dynamic array of size "n" in c++
    int *arr = new int[n];

    assignArray(arr, n);
    printArray(arr, n);
    return 0;
}