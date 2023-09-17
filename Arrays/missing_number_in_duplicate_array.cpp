#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMissing(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        { // We swap each element with the index it is pointing to
            // If the same element is not placed there already
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
        // printArray(arr, n);
    }

    // Using this loop, we find the array index and element mismatch
    // That index is then the missing element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 != i)
            return i + 1;
    }
}

int main()
{
    // An element(5) is missing an another element (4) is duplicate
    // in an array containing elements from 1 -> n
    int arr[] = {1, 3, 5, 3, 4};
    int n = 5;
    cout << findMissing(arr, n);
    return 0;
}