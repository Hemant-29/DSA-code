#include <iostream>
#include <vector>
using namespace std;

// We have to return the first index at which the target element was found
int binarySearch(vector<int> arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int found_index = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            found_index = mid;
            // Even though we found the element we are not returning now, which will stop the loop.
            // we will set the subArray to the right side of the mid and keep looping
            start = mid + 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    // We return the answer index in the end
    return found_index;
}

int main()
{
    // A sorted array is given. That means we can use binary Search here
    vector<int> arr = {1, 3, 4, 11, 11, 11, 11, 18, 21};

    cout << binarySearch(arr, arr.size(), 11) << endl;
    return 0;
}