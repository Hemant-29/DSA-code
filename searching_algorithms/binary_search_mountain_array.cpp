#include <iostream>
#include <vector>
using namespace std;

// We are given a Mountain array
// We use the binary search approach for this problem

int findPeak(vector<int> arr)
{
    int n = arr.size();
    // Implimenting binary search
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start + end) / 2;
    int count = 0;
    // Note that Target is not given in this binary search, so what are we searching for?
    // Here the target is that element must be smaller than its following element
    while (start <= end && count < 20)
    {
        count++;
        cout << start << "  " << mid << "  " << end << endl;
        if (arr[mid] > arr[mid + 1])
        {
            ans = mid;
            // Go leftwards in this condition
            end = mid - 1;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            // Go to rightward direction
            start = mid + 1;
        }

        // Jo condition hum bhul jate hai
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 7, 6, 2, 1};
    cout << findPeak(arr) << endl;
    return 0;
}