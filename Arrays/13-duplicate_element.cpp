#include <iostream>
using namespace std;

// THIS IS AN IMPORTANT QUESTION
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int checkDuplicate(int arr[], int n)
{ // In this function, we use the swap number approach
    int index = arr[0];
    for (int i = 0; i < n; i++)
    { // In a loop, we look for where does the 0 index element points to
        if (index != arr[index])
            // If it points to any other number, then we swap and bring that no at 0 index
            // Then we look where this element points at
            swap(index, arr[index]);
        else
            // If it points to the same number as present on 0 index, then that element is duplicate
            return index;
    }
    return -1;
}

// In this problem, we are given an array of n numbers(5 here)
// containing elements from (1 -> n-1) i.e- (1 to 4 here)
// A single element is present twice(4 here). You have to return that element.
int main()
{
    int arr[] = {2, 1, 4, 3, 4};
    int n = 5;
    cout << checkDuplicate(arr, n) << endl;
    return 0;
}