#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// Given an integer array nums representing the amount of money of each house,
// return the maximum amount of money you can rob tonight without alerting the police.
// Thus, by not robbing adjacent houses

// This question is also called - Maximum sum of Non adjacent elements of an Array

int robRecursive(vector<int> &arr, int index = 0)
{
    // Base condition
    if (index >= arr.size())
    {
        // If the index goes out of the array size, stop recursion!
        return 0;
    }

    // Recursion
    int sum_possibility1 = arr[index] + robRecursive(arr, index + 2);
    // Possibility1- We add the current index element and recursively keep adding Alternate elemnts

    int sum_possibility2 = 0 + robRecursive(arr, index + 1);
    // Possibility2- We skip the current element we are on and add the next element to the sum

    return max(sum_possibility1, sum_possibility2);
}
// This solution is based on inclusion-exclusion

int main()
{
    vector<int> houses = {2, 7, 9, 13, 1};
    cout << robRecursive(houses) << endl;
    return 0;
}