#include <iostream>
#include <limits.h>
using namespace std;

int maxElement(int arr[][4], int row, int col)
{
    // At initial ANY given element will be greater than "max"
    int max = INT_MIN;
    // for loops to traverse through all the 2d array elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // If current element is larger than max element
            if (arr[i][j] > max)
                max = arr[i][j];
            // Then set (max = current element)
        }
    }
    return max;
}

int main()
{
    int arr[2][4] = {{12, 7, 4, 8},
                     {4, 9, 20, 13}};
    int row = 2;
    int col = 4;
    cout << maxElement(arr, row, col) << endl;
    return 0;
}