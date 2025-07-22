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

// With this approach we create two variables right and left

void sortArray(int arr[], int n)
{
    int l = 0;
    // left starts from 0 and shifts towards right until its on a non zero value
    int r = n - 1;
    // right starts from the end of the array and shifts towards left until a zero value

    while (l < r)
    {
        // cout << l << " " << r << endl;
        // printArray(arr, n);
        if (arr[l] == 0)
        {
            l++;
        }
        else
        {
            if (arr[r] == 1)
            {
                r--;
            }
            else
            {
                // then the elements at arr[left] and arr[right] swaps
                swap(arr[l], arr[r]);
                l++;
                r--;
            }
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 1, 0};
    int n = 10;
    sortArray(arr, n);
    printArray(arr, n);
}