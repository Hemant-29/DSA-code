#include <iostream>
#include <vector>
using namespace std;

bool checkPossible(int n, int k, vector<int> &arr, int target)
{
    int diffNumber = 1;
    int lastIndex = 0;

    bool answer;
    int i = 1;

    if (target <= 0) // Implimenting edge case
        return true;
    while (i < n)
    {
        if ((arr[i] - arr[lastIndex]) < target)
            i++;
        else
        {
            lastIndex = i;
            diffNumber++;
        }
    }
    // cout << "difference no. is: " << diffNumber << endl;
    if (diffNumber < k)
        answer = false;
    else
        answer = true;
    return answer;
}

int solve(int n, int k, vector<int> &stalls)
{
    int low = 0;
    int high = 0;
    for (int i = 0; i < n; i++)
        high += stalls[i];
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (checkPossible(n, k, stalls, mid))
            low = mid + 1;
        else
            high = mid - 1;
        mid = low + (high - low) / 2;
    }
    return high;
}

int main()
{
    vector<int> arr = {1, 5, 11, 13, 19};
    int n = 5;
    int k = 4;
    cout << solve(n, k, arr) << endl;
    return 0;
}