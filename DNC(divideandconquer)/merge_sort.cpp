#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeSortedArray(vector<int> &arr, int start, int mid, int end)
{
    // This function Makes a larger sorted array, from the combination of two smaller sorted arrays
    // Here these two arrays are a part of the given array, separated by start, mid and end
    vector<int> ans;
    // Two pointers are declared
    int i = start, j = mid + 1;
    while (i <= mid || j <= end)
    {
        // If all elements of 1st array are traversed,
        //  then add all the rest of elements of 2nd array into ans
        if (i > mid)
        {
            ans.push_back(arr[j]);
            j++;
            continue;
        }
        // Else-If all the elements of 2nd array are traversed
        else if (j > end)
        {
            ans.push_back(arr[i]);
            i++;
            continue;
        }
        // Pointer with the smaller value goes into ans first,
        if (arr[i] < arr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        // followed by the pointer with the larger value
        else
        {
            ans.push_back(arr[j]);
            j++;
        }
    }
    // Transfer elements from ans array into original array
    for (int itr = 0; itr < ans.size(); itr++)
    {
        arr[start] = ans[itr];
        start++;
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    int mid = (start + end) / 2;

    // Base case
    if (start >= end)
        return;

    // _______________Recursive calls to DIVIDE the original array :- ________________
    // Recursive call for the left part of the array
    mergeSort(arr, start, mid);
    // Recursive call for the right part of the array
    mergeSort(arr, mid + 1, end);

    // Then we make "arr" equal to the Sorted combination of the left and the right parts of the array
    mergeSortedArray(arr, start, mid, end);
}

int main()
{
    vector<int> arr = {100, 87, 69, 53, 44, 28, 21, 12, 5, 0};
    // mergeSortedArray(arr, 0, 1, 3);
    mergeSort(arr, 0, arr.size() - 1);
    for (int i : arr)
        cout << i << " ";
    return 0;
}