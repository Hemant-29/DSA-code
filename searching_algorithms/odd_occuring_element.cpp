#include <iostream>
#include <vector>
using namespace std;

// Only a single element is occuring odd number of times

int oddOccuring(vector<int> arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == arr[mid + 1])
        { // means we are at the first of 2 consecutive elements

            // Its at even index
            if (mid % 2 == 0)
            {
                start = mid + 1;
            }
            // Means it is at odd index
            else
                end = mid - 1;
        }
        else
        { // means we are at the second of 2 consecutive elements

            // Its at even index
            if (mid % 2 == 0)
            {
                if (arr[mid - 1] != arr[mid])
                    return arr[mid];
                end = mid - 1;
            }
            // Its at odd index
            else
                start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 10, 5};
    cout << oddOccuring(arr) << endl;
}