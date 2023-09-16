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

int checkDuplicate(int arr[], int n)
{
    int index = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (index != arr[index])
            swap(index, arr[index]);
        else
            return index;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 3, 4};
    int n = 5;
    cout << checkDuplicate(arr, n) << endl;

    return 0;
}