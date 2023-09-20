#include <iostream>
#include <vector>
using namespace std;

// In a nearly sorted array, the elements are either on their correct index
// or off by 1 index (plus or minus 1)
int binarySort(vector<int> arr, int target)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // We compare target with current element, the element preceding it and the element following it
        if (arr[mid - 1] == target && mid > 0)
            return mid - 1;
        else if (arr[mid] == target && mid > 0)
            return mid;
        else if (arr[mid + 1] == target && mid > 0)
            return mid + 1;

        if (arr[mid] < target)
            start = mid + 2;
        // we assign (mid+2) to avoid duplicate comparison
        else if (arr[mid] > target)
            end = mid - 2;
        // we assign (mid-2) to avoid duplicate comparison
    }
    return -1;
}
int main()
{
    vector<int> arr = {20, 10, 30, 50, 40, 70, 60};
    cout << binarySort(arr, 50) << endl;
}
