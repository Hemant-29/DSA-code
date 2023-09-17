#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{ // To print the array.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int n, int begin = 0, int end = -1)
{ // Implimentation to reverse a given array from begin to the end index
    (end < 0) ? end = n - 1 : false;
    while (begin < end)
    {
        swap(arr[begin], arr[end]);
        begin++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k)
{
    // First reverse the whole array.
    reverseArray(arr, n);
    // Reverse array from beginning to K'th position.
    reverseArray(arr, n, 0, k - 1);
    // Then reverse array from K position to end position.
    reverseArray(arr, n, k - 1, n);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;

    rotateArray(arr, n, 3);
    printArray(arr, n);
    return 0;
}