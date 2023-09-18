#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int n, int target)
{
    int start = 0;
    // Take a start pointer to point at the start of your subArray
    int end = n - 1;
    // Take an end pointer to point at the end of your subArray
    int mid = (start + end) / 2; // NOTE - Using (s+e)/2 is a BAD PRACTICE, see at end
    // mid is the index at the middle of the start and end

    while (start <= end)
    { // Loop until the size of the subArray doesn't become zero

        // If the mid element is the target element
        if (arr[mid] == target)
        {
            return mid;
            // We return mid because the element is present at mid index itself
        }

        // If the mid element is greater than target element, then we set end of the subArray just before the mid
        if (arr[mid] > target)
        {
            end = mid - 1;
        }

        // If the mid element is smaller than the target element, then we set the start of the subArray just after the mid
        if (arr[mid] < target)
        {
            start = mid + 1;
        }

        // This update condition is very very important. After each iteration, we set the mid element
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 3, 4, 7, 9, 11, 15, 18, 21};

    cout << binarySearch(arr, arr.size(), 21) << endl;
    return 0;
}

// NOTE - both "start" and "end" are big numbers.
// So they can cause the integer "mid" to overflow in the line 11 .

// So instead you should use - start/2 + end/2
// OR, use start + (end-start)/2