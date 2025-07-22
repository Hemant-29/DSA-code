#include <iostream>
#include <limits.h>
using namespace std;

int findMinimum(int arr[], int length)
{
    int min = INT_MAX;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {2, 54, 5, 2, -57, 23, 56, 26, 1};
    cout << findMinimum(arr, 9) << endl;
}