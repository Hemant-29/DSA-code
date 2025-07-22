#include <iostream>
using namespace std;

// we find sum of all the elements of leading diagonal of the matrix
int diagonalSum(int arr[][4], int n)
{
    int diagonal_sum = 0;
    // Since the matrix is always a square matrix, we need only 1 loop
    for (int i = 0; i < n; i++)
    {
        diagonal_sum += arr[i][i];
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