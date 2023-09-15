// Given an array A[] consisting of only 0s, 1s, and 2s.
// The task is to write a function that sorts the given array.
// The functions should put all 0s first, then all 1s and all 2s in last.

#include <iostream>
using namespace std;

// To print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// We use 3 pointer (start,mid,end) approach in this code
void sortArray(int arr[], int n)
{
    int start = 0, mid = 1, end = n - 1;
    while ((mid <= end))
    {
        if (arr[start] == 0)
        {
            start++;
        }
        if (arr[end] == 2)
        {
            end--;
        }
        switch (arr[mid])
        {
        case 0:
            swap(arr[start], arr[mid]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[end]);
            break;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 2, 1, 0, 0, 1};
    int n = 14;
    sortArray(arr, n);

    printArray(arr, n);
    return 0;
}