#include <iostream>
using namespace std;

// We are given an array of -ve and +ve elements
//  Put all the negative values before +ve ones

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortPositiveNegative(int arr[], int n)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[pos] < 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            swap(arr[pos], arr[i]);
        }
    }
}

int main()
{
    int arr[] = {-2, 4, 5, -7, 5, -9, 0};
    int n = 7;
    sortPositiveNegative(arr, n);
    printArray(arr, n);
    return 0;
}