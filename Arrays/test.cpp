#include <iostream>
#include <limits.h>
using namespace std;

void findMin(int arr[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum element is: " << min << endl;
}

int main()
{
    int arr[] = {23, 5, 651, 654, 6, 498, -50, 51, 635, 496, 84, 5, 16, 4, 653, 1, 68, 79, 954, 651, 654, 68};
    findMin(arr, sizeof(arr) / sizeof(0));
    return 0;
}