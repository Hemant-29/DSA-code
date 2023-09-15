#include <iostream>
using namespace std;

int maximumOne(int mat[][4], int row, int col)
{
    int maxSum = -135135;
    int maxRow = 0;
    for (int i = 0; i < row; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < col; j++)
        {
            row_sum += mat[i][j];
        }
        if (row_sum > maxSum)
        {
            maxSum = row_sum;
            maxRow = i;
        }
    }
    return maxRow;
}

int main()
{
    int mat[4][4] = {{1, 0, 0, 1},
                     {1, 1, 0, 0},
                     {1, 0, 0, 1},
                     {1, 1, 1, 0}};
    int row = 4;
    int col = 4;
    cout << maximumOne(mat, row, col);
    return 0;
}