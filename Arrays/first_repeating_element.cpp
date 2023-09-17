#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstRepeating(int arr[], int n)
{
    int max = -500;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int *mapping = new int[max];

    for (int i = 0; i < max; i++)
    {
        mapping[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        mapping[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mapping[arr[i]] > 1)
            return i + 1;
    }
    return -1;
}

int main()
{
    // int arr[] = {7, 4, 0, 9, 4, 8, 8, 2, 4, 5, 5, 1};
    int arr[] = {5, 8, 6};
    int n = 3;
    cout << firstRepeating(arr, n) << endl;
    return 0;
}