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
    int total_occurance = 1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            found_index = mid;
            // We here use the code for first occurance itself
            end = mid - 1;
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
    // Until here the code is same as the code for first occurance

    if (found_index > 0)
    {
        while (arr[found_index] == arr[found_index + 1])
        { // After that we loop until that same element is repeating
            found_index++;
            total_occurance++;
        }
    }

    // We return the answer index in the end
    return total_occurance;
}

int main()
{
    vector<int> arr = {2, 4, 5, 8, 9, 12, 15, 15, 15, 17};

    cout << binarySearch(arr, arr.size(), 15) << endl;
    return 0;
}