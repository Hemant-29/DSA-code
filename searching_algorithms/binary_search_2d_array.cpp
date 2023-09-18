#include <iostream>
using namespace std;

int binarySearchMatrix(int mat[][4], int row, int col, int target)
{
}

int main()
{
    int mat[][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12}};

    int row = 3;
    int col = 4;
    cout << binarySearchMatrix(mat, row, col, 15) << endl;
}