#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeSortedArray(vector<int> &arr, int start, int mid, int end)
{
    // Gap is the ceil of arr1.size() + arr2.size() / 2

    int gap = (arr.size()) / 2 + (arr.size()) % 2;

    while (gap >= 1)
    { // Now we take 2 pointers this "gap" size apart
        int i = 0;
        int j = i + gap;
        // cout << "gap is: " << gap << endl;
        while (j <= end)
        {
            // cout << "i: " << arr[i] << ", j: " << arr[j] << endl;
            // swap if the ith and jth elements are in incorrect order
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                // cout << "swapping" << endl;
            }
            i++;
            j++;
        }
        if (gap <= 1)
            gap = 0;
        // You have to call this algorithm just one time when the gap is = 1
        gap = (gap / 2 + gap % 2);
    }
    // Keep repeating this algorithm until the gap isn't 1
}

int main()
{
    vector<int> arr = {1, 5, 3, 4, 3, 2, 1, 0};
    int end = arr.size() - 1;
    int mid = end / 2;
    mergeSortedArray(arr, 0, mid, end);

    // Printing the array
    for (int i : arr)
        cout << i << " ";
    return 0;
}