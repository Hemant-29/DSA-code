#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// The problem is to find the maximum common height at which a woodcutter must cut the trees
// to get the "m" meters of wood if trees in a row has different heights

int isSolution(vector<int> &arr, int n, int m, int target)
{
    // Function which returns if a given answer(target) is the correct answer for the
    // problem or not. Here target is the height
    bool ans;
    int height = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < target)
            continue;
        else
            height += (arr[i] - target);
    }
    return height;
}

int minHeight(vector<int> &arr, int n, int m)
{
    // Here we use the Binary search approach to guess whether a number
    // is the correct answer or not
    int low = 0;        // Minimum possible height is 0
    int high = INT_MIN; // Maximum possible height is of the heighest tree
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > high)
            high = arr[i];
    }
    int mid = low + (high - low) / 2;

    while (low <= high)
    {
        // cout << "low, mid, high : " << low << ", " << mid << ", " << high << endl;
        if (isSolution(arr, n, m, mid) < m)
            high = mid - 1;
        else if (isSolution(arr, n, m, mid) > m)
            low = mid + 1;
        else
            break;
        // updation of mid
        mid = low + (high - low) / 2;
    }
    return mid;
}

int main()
{
    vector<int> arr = {20, 15, 10, 17};
    int n = 4, m = 7;

    cout << minHeight(arr, n, m) << endl;
    return 0;
}