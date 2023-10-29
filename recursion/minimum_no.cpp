#include <iostream>
#include <limits.h>
using namespace std;

int findMin(int *arr, int size, int index, int min = INT_MAX)
{
    // This is a recursive function to find the minimum number in an array

    // Base condition
    if (index >= size)
        return min;

    // Processing part
    if (arr[index] < min)
        min = arr[index];

    // Recursive relation
    return findMin(arr, size, ++index, min);
}

int main()
{
    int arr[] = {2, 4, 7, 9, 1, 15};
    int size = 6;

    cout << findMin(arr, size, 0) << endl;
    return 0;
}