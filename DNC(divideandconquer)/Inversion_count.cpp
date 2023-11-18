#include <iostream>
#include <vector>
using namespace std;

// This program counts the total number of pairs which are in inverted(decreasing) order

void mergeSortedArrays(vector<long long> &arr, long start, long end, long long &inverted_count)
{
    long mid = (start + end) / 2;
    // This function combines 2 sorted arrays into a larger sorted array
    // Declaring 2 pointers
    vector<long> ans;
    long i = start, j = mid + 1;
    while (i <= mid && j <= end)
    {
        // Compare and add smaller element to the ans array
        if (arr[i] > arr[j])
        {
            // This part increases the Inverted count
            inverted_count += (mid - i + 1);
            ans.push_back(arr[j]);
            j++;
        }
        else
        {
            ans.push_back(arr[i]);
            i++;
        }
    }
    // Add remaining elements
    while (i <= mid)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        ans.push_back(arr[j]);
        j++;
    }

    // Insert elements from "ans" into original "arr"
    long ans_index = 0;
    for (long i = start; i <= end; i++)
    {
        arr[i] = ans[ans_index];
        ans_index++;
    }
}

void inversionCount(vector<long long> &arr, long start, long end, long long &inverted_count)
{

    // _________________Here we keep dividing the array into two parts___________________
    // The 1st part is (start -> mid), 2nd part is (mid+1 -> end)

    // Base case
    if (start >= end)
        return;

    int mid = (start + end) / 2;
    inversionCount(arr, start, mid, inverted_count);
    inversionCount(arr, mid + 1, end, inverted_count);
    mergeSortedArrays(arr, start, end, inverted_count);
}

int main()
{
    vector<long long> arr = {10, 8, 4, 2, 1};
    long long inverted_count = 0;
    inversionCount(arr, 0, arr.size() - 1, inverted_count);

    cout << "Inverted count : " << inverted_count << endl;

    // Printing the array
    for (int i : arr)
        cout << i << " ";
    return 0;
}