#include <iostream>
#include <vector>
using namespace std;

// We need findPivot function for this problem because we have 2 sorted arrays-
// around the "pivot element",on those 2 we can apply binary search
int findPivot(vector<int> arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = start - (start - end) / 2;
    while (start <= end)
    {
        if (mid == n - 1)
            break;

        if (arr[mid] > arr[mid + 1])
            return mid;

        else if (arr[mid] >= arr[0])
            start = mid + 1;

        else if (arr[mid] < arr[0])
            end = mid - 1;

        mid = start - (start - end) / 2;
    }
    return -1;
}

int binarySearch(vector<int> arr, int target, int start, int end)
{
    int mid = start - (start - end) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else if (arr[mid] > target)
            end = mid - 1;

        mid = start - (start - end) / 2;
    }
    return -1;
}

int searchRotated(vector<int> arr, int target)
{
    int n = arr.size();
    int pivot = findPivot(arr);
    int ans = binarySearch(arr, target, 0, pivot);
    if (ans < 0)
        ans = binarySearch(arr, target, pivot + 1, n - 1);
    return ans;
}

int main()
{
    vector<int> arr = {9, 10, 12, 14, 1, 2, 4, 5, 7, 8};
    cout << searchRotated(arr, 10) << endl;
    return 0;
}

// The complexity of this app is going to be O(3*log n)
// Which is same as O(log n)