#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

vector<int> MergeArray(vector<int> &arr1, vector<int> &arr2)
{
    int s1 = 0, s2 = 0;
    int e1 = arr1.size();
    int e2 = arr2.size();
    vector<int> ansArray;

    // Keep comparing the elemets until one of the list is not ended
    while (s1 < e1 && s2 < e2)
    {
        if (arr1[s1] >= arr2[s2])
        {
            ansArray.push_back(arr2[s2]);
            s2++;
        }
        else
        {
            ansArray.push_back(arr1[s1]);
            s1++;
        }
        cout << "s1: " << s1 << " s2: " << s2 << endl;
    }

    // Once an array is ended, add all the elements of the other array to the ansArray
    if (s1 >= e1)
    {
        while (s2 < e2)
        {
            ansArray.push_back(arr2[s2]);
            s2++;
        }
    }
    if (s2 >= e2)
    {
        while (s1 < e1)
        {
            ansArray.push_back(arr1[s1]);
            s1++;
        }
    }

    return ansArray;
}

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr1 = {1, 3, 4, 9};
    vector<int> arr2 = {2, 5, 6, 7};
    vector<int> ans = MergeArray(arr1, arr2);
    printArray(ans);
    return 0;
}