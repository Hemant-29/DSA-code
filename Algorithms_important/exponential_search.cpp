#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int low, int high, int target)
{
    int mid = (low + high) / 2;
    while (low <= high)
    {
        // cout << "low, high: " << low << ", " << high << endl;
        // cout << "mid: " << mid << endl;
        if (arr[mid] < target)
            low = mid + 1;
        else if (arr[mid] > target)
            high = mid - 1;
        else if (arr[mid] == target)
            return mid;
        mid = (low + high) / 2;
    }
    return -1;
}

int exponentialSearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    if (arr[0] == target)
    { // first element is target
        return 0;
    }
    else
        start++; // increase the start to 1

    while (arr[start] < target)
    { // Keep doubling the starting point until it misses the target point
        start = start * 2;
    }

    if (start < end)
        end = start;
    start = start / 2;
    return binarySearch(arr, start, end, target);
}

int main()
{
    vector<int> arr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int target = 56;
    cout << exponentialSearch(arr, target) << endl;
    return 0;
}