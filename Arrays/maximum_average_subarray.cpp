#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

double arraySum(vector<int> &arr, int begin, int end)
{
    int sum = 0;
    for (int i = begin; i < end; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double findMaxAverage(vector<int> &nums, int k)
{
    int n = nums.size();
    double curr_sum = arraySum(nums, 0, k);
    double max_sum = curr_sum;

    for (int i = 0; i < (n - k); i++)
    {
        cout << "helooooooooo";
        curr_sum = curr_sum - nums[i] + nums[i + k];
        // cout << curr_sum << endl;
        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }
    return max_sum / k;
}

int main()
{
    vector<int> arr = {5};
    cout << findMaxAverage(arr, 1) << endl;
}