#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr, int index = 0)
{
    // Base condition
    if (index >= arr.size())
        return true;

    // Processing
    if (arr[index] > arr[index + 1])
        return false;

    // Recursive relation
    return isSorted(arr, index + 1);
}

int main()
{
    vector<int> arr = {1, 5, 7, 8, 12, 20};
    cout << isSorted(arr) << endl;
    return 0;
}