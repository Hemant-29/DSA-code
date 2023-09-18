#include <iostream>
#include <vector>
using namespace std;

// We are given an array {1 -> n} with only 1 element missing
// We use the binary search approach for this problem

int findMissing(vector<int> arr)
{
    int n = arr.size();
    // Implimenting binary search
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start + end) / 2;
    // Note that Target is not given in this binary search, so what are we searching for?
    // Here the target is that the difference between an element and its index must be > 1
    while (start <= end)
    {
        if ((arr[mid] - mid) == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid + 1;
            // Use the left subArray to see if more elements satisfy target
            end = mid - 1;
        }
        // Jo condition hum bhul jate hai
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << findMissing(arr) << endl;
    return 0;
}

// The time complexity of this solution is O(log n)
// Which is even lower than when you find missing element using "XOR" operator