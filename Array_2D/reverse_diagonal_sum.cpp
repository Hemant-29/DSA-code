#include <iostream>
using namespace std;

// We find the sum of the elements of the antidiagonal of the matrix
int diagonalSum(int arr[][4], int n)
{
    int diagonal_sum = 0;

    for (int i = 0; i < n; i++)
    { // row number is denoted by (i)
        int col = (n - 1 - i);
        // column number is denoted by (n-1-i)
        diagonal_sum += arr[i][col];
    }

    return diagonal_sum;
}

int main()
{
    int arr[4][4] = {{1, 4, 8, 16},
                     {5, 30, 6, 1},
                     {19, 4, 13, 7},
                     {12, 4, 0, 3}};
    int col = 4;
    cout << diagonalSum(arr, col) << endl;
    return 0;
}