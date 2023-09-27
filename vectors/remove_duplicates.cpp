#include <iostream>
#include <limits.h>
#include <vector>
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

int duplicateElement(vector<int> &nums)
{
    int n = nums.size();
    int k = 1;
    // K is the number of unique elements
    int start = 0;
    // start is the starting index
    for (int i = 0; i < n; i++)
    {
        if (nums[start] != nums[i])
        { // if the element at start index is not equal to element at current(i) index
            start++;
            // Fisrt increse the start index
            nums[start] = nums[i];
            // Then set the element at start index same as at current index
            k++;
        }
    }
    return k;
}
int main()
{
    vector<int> arr = {0, 0, 0, 2, 3, 3, 3, 4, 5, 7};
    cout << duplicateElement(arr) << endl;
    printVector(arr);
    return 0;
}