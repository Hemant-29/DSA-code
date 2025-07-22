#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Here we rotate the elements of array by k elements
int rotateArray(int nums[], int n, int k)
{
    int tempArr[n];
    for (int i = 0; i < n; i++)
    {
        int newIndex = (i + k) % n;
        tempArr[newIndex] = nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        nums[i] = tempArr[i];
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    rotateArray(nums, n, 3);
    printArray(nums, n);
    return 0;
}