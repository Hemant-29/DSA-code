#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

void recursiveSubarray(vector<int> &arr, int i = 0, int j = 0)
{
    // Base condition
    if (i >= arr.size())
        return;

    // Processing
    for (int k = i; k < j; k++)
        cout << arr[k] << " ";
    cout << "   ";

    if (j >= arr.size())
    {
        ++i;
        j = i;
        cout << endl;
    }

    // Recursive relation
    recursiveSubarray(arr, i, j + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    recursiveSubarray(arr);
    return 0;
}