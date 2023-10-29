#include <iostream>
using namespace std;

int searchArray(int *arr, int size, int index, int toFind)
{
    // recursive function to search an element in an array

    // Base condition
    if (index >= size)
        return -1;

    // Processing part
    if (arr[index] == toFind)
        return index;

    // Recursive relation
    return searchArray(arr, size, ++index, toFind);
}

int main()
{
    int arr[] = {2, 4, 7, 9, 12, 15};
    int size = 6;

    cout << searchArray(arr, size, 0, 7) << endl;
    return 0;
}