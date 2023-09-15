// Given an array A[] consisting of only 0s, 1s, and 2s.
// The task is to write a function that sorts the given array.
// The functions should put all 0s first, then all 1s and all 2s in last.

#include <iostream>
#include <vector>
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

// We use 3 pointer (low,mid,high) approach in this code
void sortArray(int nums[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            // If mid element is "0" then we swap it with low index
            // and increment both low index and mid index
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 2)
        {
            // If mid element if "2" then we swap it with high index
            //  and decrement high only
            swap(nums[mid], nums[high]);
            high--;
            // Note in this case we "DO NOT INCREMENT MID" to avoid skipping elements
        }
        else if (nums[mid] == 1)
            // if mid is 1 then simply skip forward
            mid++;
    }
}

int main()
{
    int arr[] = {1, 2, 0};
    int n = 3;
    sortArray(arr, n);

    printArray(arr, n);
    return 0;
}