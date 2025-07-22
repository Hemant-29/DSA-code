#include <iostream>
using namespace std;

// In this problem we check if there are any 2 elements present in the array
// whose sum is equal to the given number : "sum"
bool findPair(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] + arr[j] == sum)
                return true;
        }
    }
    return false;
    // The time complexity of this function becomes - O(n^2)
}

bool findPair2(int arr[], int n, int sum)
{
    // Array must be sorted to use this function
    int low = 0;
    int high = n - 1;
    while (low < high)
    // In this function, we use the two pointer approach
    {
        if (sum == arr[low] + arr[high])
            return true;
        else if ((arr[low] + arr[high]) > sum)
            high--;
        else if ((arr[low] + arr[high]) < sum)
            low++;
    }
    return false;
    // The time complexity of this function is - O(nlog(n))
}

int main()
{
    int arr[] = {1, 4, 6, 7};
    int n = 4;
    cout << findPair(arr, n, 10) << endl;
}