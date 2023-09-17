#include <iostream>
using namespace std;

int findPeak(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return arr[i];
        }
    }
}
int main()
{
    int arr[] = {0, 10, 15, 12, 6};
    int n = 5;
    cout << findPeak(arr, n) << endl;
    return 0;
}