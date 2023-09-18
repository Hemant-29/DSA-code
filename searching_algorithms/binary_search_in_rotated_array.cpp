#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (nums[mid] > target)
            end = mid - 1;
        else if (nums[mid] < target)
            start = mid + 1;
        else if (nums[mid] == target)
            return mid;

        // Important updation step
        mid = (start + end) / 2;
    }
    return -1;
}

int findPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            if (arr[mid] < arr[0])
                end = --mid;
            else if (arr[mid] > arr[0])
                start = ++mid;
        }

        if (arr[mid] > arr[mid + 1])
            return mid; //<--This is the pivot element
    }
}

int main()
{
    int arr[] = {12, 14, 16, 2, 4, 6, 8, 10};
    int n = 8;
    cout << findPivot(arr, n) << endl;
    return 0;
}