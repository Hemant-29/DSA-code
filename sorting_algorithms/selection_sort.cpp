#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void printVector(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// In selection sort, We go through a subarray and select the smallest element
// Then we put that element at the starting of the subarray
// Which means at its right position, thus sorting the array
int selectionSort(vector<int> &arr)
{
    int n = arr.size();
    int start = 0;
    // start is the index of the start of the unsorted sub-array
    while (start < n - 1)
    {
        int min = INT_MAX;
        int min_indx = 0;
        // This loop is to find the minimum element in the given subarray
        for (int i = start; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                min_indx = i;
            }
        }
        // Then we put that minimum element at the start of the sub array
        swap(arr[start], arr[min_indx]);
        start++;
    }
}

int main()
{

    vector<int> arr = {8, 7, 5, -10, 2, 0};
    selectionSort(arr);
    printVector(arr);
}