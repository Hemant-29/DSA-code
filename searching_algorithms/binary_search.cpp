#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {

        if (arr[mid] == target)
        {
            return true;
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
    return false;
}

int main()
{
    vector<int> arr = {1, 3, 4, 7, 9, 11, 15, 18, 21};

    cout << binarySearch(arr, arr.size(), 22) << endl;
    return 0;
}