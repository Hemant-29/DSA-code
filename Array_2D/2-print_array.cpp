#include <iostream>
using namespace std;

void printArray(int arr[][3], int row, int col)
// Just like initialising a 2D array, the column no. is necessary when calling a function as well
{
    for (int i = 0; i < row; i++)
    { // Loop used for traversing rows
        for (int j = 0; j < col; j++)
        { // Loop used for traversing columns
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int row = 3;
    int col = 3;
    printArray(arr, row, col);
    return 0;
}