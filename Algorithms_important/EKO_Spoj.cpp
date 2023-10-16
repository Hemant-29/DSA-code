#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int isSolution(vector<int> &arr, int n, int m, int target)
{
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
    int low = 0;
    int high = INT_MIN;
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
        // updation
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