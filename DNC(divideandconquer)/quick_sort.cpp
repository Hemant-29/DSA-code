#include <iostream>
#include <vector>
using namespace std;

// In this sort, we place all the elements smaller than a pivot point on the left of it
// and all the elements larger than the pivot point on the right side of it

int setPivot(vector<int> &arr, int start, int end)
{
    // cout << "start : " << start << ", end : " << end << endl;
    // We Take the rightmost/ending element as pivot element
    int pivot = end;
    // We take 2 pointers i & j
    int i = start, j = pivot - 1;

    while (i < j)
    {
        // Then we compare all the elements at i & j index with pivot
        if (arr[i] <= arr[pivot])
            i++;
        if (arr[j] >= arr[pivot])
            j--;
        // If we found 2 opposite elments on the wrong side of pivot, then we swap them
        if (arr[i] > arr[pivot] && arr[j] < arr[pivot])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    // Put the pivot element actually at the mid, instead of at the end
    if (arr[pivot] < arr[i])
        swap(arr[pivot], arr[i]);
    // Return the final index of the pivot element
    return i;
}

void quickSort(vector<int> &arr, int start, int end)
{
    // Printing the array
    for (int item : arr)
        cout << item << " ";
    cout << endl;

    // Base condition
    if (start >= end)
        return;

    // This function gives the index of pivot after arranging elements to its right and left
    int pivot = setPivot(arr, start, end);

    // Repeate same process for the left part of the array,
    quickSort(arr, start, pivot);
    // Then for the right part of the array
    quickSort(arr, pivot + 1, end);
}

int main()
{
    vector<int> arr = {9, 8, 5, 7, 2, 4, 1, 7};
    quickSort(arr, 0, arr.size() - 1);

    return 0;
}