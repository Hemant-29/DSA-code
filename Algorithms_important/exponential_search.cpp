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

// In this approach we keep increasing the starting point of the search box
// of the input array exponentially by a factor of 2,
// until just before the starting point is less than target
int exponentialSearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    if (arr[0] == target)
    { // first element is target
        return 0;
    }
    else
        start++; // increase the start to 1 if first element is not target

    while (arr[start] < target)
    { // Keep doubling the starting point until it misses the target point
        start = start * 2;
    }

    if (start < end)
        end = start; // Set the end to a point after the target

    start = start / 2; // Divide start by 2 to bring it back to the point where it was just less than target
    return binarySearch(arr, start, end, target);
}

int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 12;
    cout << exponentialSearch(arr, target) << endl;
    return 0;
}