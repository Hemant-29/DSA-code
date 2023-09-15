#include <iostream>
using namespace std;

// function to reverse the array
void reverseArray(int arr[], int size)
{
    int swap;
    for (int i = 0; i < size / 2; i++)
    { // this whole function swaps the element at [i] position with element at [n-1-i] position
        swap = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = swap;
    }
}

// function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 7, 5, 8, 6, 1, 3, 9};
    reverseArray(arr, 8);
    printArray(arr, 8);
    return 0;
}