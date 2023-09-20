#include <iostream>
#include <vector>
using namespace std;

// In this approach, we use Binary search on a 1D array
// We will map the elements of that 1D array with the 2D matrix in form of i,j
int binarySearchMatrix(vector<vector<int>> mat, int target)
{
    int rows = mat.size();
    int cols = mat[0].size();

    int n = rows * cols;
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // We can find row index by using this divide formula
        int i = mid / cols;
        // We can find column index by using modulus formula
        int j = mid % cols;
        // cout << i << " " << j << endl;

        if (mat[i][j] == target)
            return true;
        else if (mat[i][j] < target)
            start = mid + 1;
        else if (mat[i][j] > target)
            end = mid - 1;
    }
    return false;
}

int main()
{
    // vector<vector<int>> mat = {{1, 2, 3, 4},
    //                            {7, 9, 11, 13},
    //                            {14, 16, 19, 21}};
    vector<vector<int>> mat = {{1}};

    cout << binarySearchMatrix(mat, 1) << endl;
}