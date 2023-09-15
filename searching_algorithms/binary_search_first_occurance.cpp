#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int found = 0;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            found = 1;
            break;
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
    return found;
}

int main()
{
    vector<int> arr = {1, 3, 4, 11, 11, 11, 15, 18, 21};

    cout << binarySearch(arr, arr.size(), 11) << endl;
    return 0;
}