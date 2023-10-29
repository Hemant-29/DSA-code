#include <iostream>
using namespace std;

void printArray(int *arr, int size, int index)
{
    // This is a recursive function to print the elements of an array

    // Base condition
    if (index >= size)
        return;

    // Processing part
    cout << arr[index] << " ";

    // Recursive relation
    printArray(arr, size, ++index);
}

int main()
{
    int arr[] = {2, 8, 7, 6, 14, 18};
    int n = 6;
    printArray(arr, n, 0);
    return 0;
}