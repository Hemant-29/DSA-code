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

// In this function, we use the negative number approach
int searchDuplicate(int arr[], int n)
{
    // This is the index of the element we are at
    int index = 0;
    while (true)
    {
        if (arr[index] < 0)
        { // If some index is already visited, we just return it
            return index;
        }

        // Here we mark the index that we have already visited - "negative"
        arr[index] *= (-1);

        // Set index = the element that is present at that index
        index = abs(arr[index]);

        // Debugging
        // cout << arr[index] << endl;
        // printArray(arr, n);
    }
}

int main()
{
    int arr[] = {2, 5, 3, 1, 4, 2};
    int n = 6;
    cout << searchDuplicate(arr, n) << endl;
    return 0;
}