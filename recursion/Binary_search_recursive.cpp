#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

int binarySearch(vector<int> arr, int target, int low, int mid, int high)
{
    mid = (low + high) / 2;
    // Base case
    if (low > high)
        return -1;

    // Processing
    if (arr[mid] == target)
        return mid;

    // Recursive relation
    if (arr[mid] > target) // Go to left
        return binarySearch(arr, target, low, mid, mid - 1);
    if (arr[mid] < target) // Go to right
        return binarySearch(arr, target, mid + 1, mid, high);
}

int main()
{
    vector<int> arr = {2, 5, 9, 13, 18, 21, 25};
    int target = 13;
    cout << binarySearch(arr, target, 0, 0, arr.size() - 1) << endl;
    return 0;
}