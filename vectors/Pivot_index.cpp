#include <iostream>
#include <vector>
using namespace std;

// Sum of all the elements left to a pivot element
// is equal to the sum of all the elements to the right of it
// We have to find the index of this pivot element

int pivotIndex(vector<int> arr)
{
    int n = arr.size();
    int pivot = 0;

    while (pivot < n)
    {
        int right_sum = 0;
        int left_sum = 0;
        // For left sum
        for (int i = 0; i < pivot; i++)
        {
            left_sum += arr[i];
        }
        // For right sum
        for (int i = pivot + 1; i < n; i++)
        {
            right_sum += arr[i];
        }
        if (right_sum == left_sum)
        {
            return pivot;
        }
        pivot++;
    }
    // The complexity of this solution is O(n^2)
    return -1;
}

int pivotIndex2(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;

    // finding the sum of total array
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int right_sum = 0;
    int left_sum = 0;

    for (int pivot = 0; pivot < n; pivot++)
    {
        //  For left sum
        if (pivot != 0)
            left_sum += arr[pivot - 1];

        // For right sum
        right_sum = sum - (left_sum + arr[pivot]);

        // cout << left_sum << "  " << right_sum << endl;

        // Check condition
        if (right_sum == left_sum)
        {
            return pivot;
        }
    }
    // The complexity of this solution is O(n)
    return -1;
}

int main()
{
    vector<int> arr = {1, -1, 2};
    cout << pivotIndex2(arr) << endl;
    return 0;
}