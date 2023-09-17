#include <iostream>
#include <vector>
using namespace std;

void spiralPrintMatrix(vector<vector<int>> mat)
{
    int rows = mat.size();
    int cols = mat[0].size();
    int i = 0, j = 0;
    int colL = 0, colH = cols - 1;
    int rowL = 0, rowH = rows - 1;

    while (true)
    {
        if (rowL <= rowH)
        {
            for (j; j < colH; j++)
                cout << mat[i][j] << " ";
            rowL++;
        }

        if (colL <= colH)
        {
            for (i; i < rowH; i++)
                cout << mat[i][j] << " ";
            colH--;
        }

        if (rowL <= rowH)
        {
            for (j; j > colL; j--)
                cout << mat[i][j] << " ";
            rowH--;
        }

        if (colL <= colH)
        {

            for (i; i > rowL; i--)
                cout << mat[i][j] << " ";
            colL++;

            // Debugging
            // cout << endl;
            // cout << i << " " << j << endl;
            // cout << colL << " " << colH << " " << rowL << " " << rowH << endl;
        }

        else
        {
            cout << mat[i][j];
            break;
        }
    }
}

int main()
{
    // vector<vector<int>> mat = {{1, 2, 3, 4, 5},
    //                            {5, 6, 7, 8, 9},
    //                            {9, 10, 11, 12, 13},
    //                            {13, 14, 15, 16, 17},
    //                            {17, 18, 19, 20, 21}};
    vector<vector<int>> mat = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    spiralPrintMatrix(mat);
    return 0;
}