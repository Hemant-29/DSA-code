#include <iostream>
using namespace std;

// We have to sort an array made of zeros and ones only
// for example - {1,0,1,1,0,0,0,1} to {0,0,0,0,1,1,1,1}

int sortArray(int arr[], int n)
{ // with this approach, we store the count of zeros and ones
    // And then populate an array using that
    int zeros = 0, ones = 0;

    // Counting total zeros and ones in the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }
    // populating the array with zeros
    for (int i = 0; i < zeros; i++)
    {
        arr[i] = 0;
    }
    // populating the array with ones
    for (int i = zeros; i < n; i++)
    {
        arr[i] = 1;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 1, 0};
    int n = 10;
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}