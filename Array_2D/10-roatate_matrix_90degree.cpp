#include <iostream>
#include <math.h>
using namespace std;

void reverseArr(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
}

void printMat(int mat[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int mat[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    int n = 3;
    printMat(mat, n);
    cout << endl;

    // transpose of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    // reverse the rows
    for (int i = 0; i < n; i++)
    {
        reverseArr(mat[i], n);
    }

    printMat(mat, n);
}