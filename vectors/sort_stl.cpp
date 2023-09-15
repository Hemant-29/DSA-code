#include <iostream>
#include <vector>
// You must include this algorithm STL to access the sort function
#include <algorithm>
using namespace std;

// To print the array
void printVector(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {5, 1, 2, 0, 4, 3};
    printVector(arr);

    // The sort function is a standard inbuilt function
    sort(arr.begin(), arr.end());
    // The arguments must be the address of the first and last element of the array

    printVector(arr);
}