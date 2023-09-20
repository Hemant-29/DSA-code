#include <iostream>
#include <vector>
using namespace std;

// Pivot element is the last element of the original sorted array
// which is now rotated by k elements

int findPivot(vector<int> arr)
{
    int n = arr.size();
    // Here we use the binary search approach
    // But we don't have a target element for now
    // Our target will be an element which is greater than its following element
    int start = 0;
    int end = n - 1;
    // It is Good practice to write (s+e)/2 like this
    int mid = start - (start - end) / 2;

    while (start <= end)
    {
        // If there is no element after the current element
        if (mid == n - 1)
            break;

        if (arr[mid] > arr[mid + 1])
            // If the pivot element condition is True
            return mid;

        else if (arr[mid] >= arr[0])
            // if the current element on the LEFT side of target element
            start = mid + 1;

        else if (arr[mid] < arr[0])
            // if the current element on the RIGHT side of the target element
            end = mid - 1;

        // Condition Jo hum hamesha BHUL JATE HAI
        mid = start - (start - end) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 5, 15, 20, 4};
    cout << findPivot(arr) << endl;
    return 0;
}