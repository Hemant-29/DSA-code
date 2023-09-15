#include <iostream>
using namespace std;

int main()
{
    // A 2d array is just a matrix
    // Or its an array of arrays
    int arr2d[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    // So this is a 2d array with 3 rows and 3 columns
    // First -> [3] shows 3 rows, and Second -> [3] shows 3 columns

    // All these elements are stored in form of a linear array
    // To convert from [i][j] to the index of memory 1d array

    // Formula=(Total columns*i)+j <- i=row index, j=column index

    // So the element[1][1] i.e. 5 is stored at (3*1+1) = 4th index in memory

    int arr2d_2[][2] = {{1, 4},
                        {5, 8}};
    // 2d array can be initialized even without row no.
    // But "Total Columns" MUST be provided to initilize a 2d array
    return 0;
}