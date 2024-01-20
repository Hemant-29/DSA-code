#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int crossBorderSum(vector<int> &arr, int start, int end)
{
    int mid = (start + end) / 2;
    int leftSum = arr[mid];
    int rightSum = arr[mid + 1];

    int current_sum = 0;
    for (int i = mid; i >= start; i--)
    {
        current_sum += arr[i];
        leftSum = max(current_sum, leftSum);
    }

    current_sum = 0;
    for (int i = mid + 1; i <= end; i++)
    {
        current_sum += arr[i];
        rightSum = max(current_sum, rightSum);
    }
    return leftSum + rightSum;
}

int divideArray(vector<int> &arr, int start, int end)
{
    // This function keeps dividing the array into 2 parts recursively,
    // and return the maximum of the sum of the right and left parts of the array

    int mid = (start + end) / 2;
    // Base case
    if (start >= end)
        return arr[start];

    // Recursive calls to find maximum sum of the :-

    // The left part of the array
    int sum1 = divideArray(arr, start, mid);
    // The right part of the array
    int sum2 = divideArray(arr, mid + 1, end);

    // Then find the cross -border sum of the array using this fucntion
    int sum3 = crossBorderSum(arr, start, end);

    // Then return the maximum of all the 3 sums
    return max(max(sum1, sum2), sum3);
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 2, -5, 12};
    cout << divideArray(arr, 0, arr.size() - 1) << endl;
    // cout << crossBorderSum(arr, 0, arr.size() - 1) << endl;
    return 0;
}