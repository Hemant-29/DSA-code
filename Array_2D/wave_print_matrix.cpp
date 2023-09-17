#include <iostream>
#include <vector>
using namespace std;

int wavePrintMatrix(vector<vector<int>> mat)
{
    // Total no. of rows
    int rows = mat.size();
    // Total no. of columns
    int cols = mat[0].size();

    // Loop iterating through columns
    for (int j = 0; j < cols; j++)
    {
        // If the column no. is even
        if (j % 2 == 0)
        { // Loop iterating through rows top to bottom
            for (int i = 0; i < rows; i++)
            {

                cout << mat[i][j] << " ";
            }
            cout << " ";
        }
        // Else if the column no. is odd
        else
        { // Loop iterating through rows bottom to top
            for (int i = 0; i < rows; i++)
            {

                cout << mat[rows - 1 - i][j] << " ";
            }
            cout << " ";
        }
    }
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {4, 5, 6, 7},
                               {7, 8, 9, 10}};
    wavePrintMatrix(mat);
    return 0;
}