#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    int negative = 0;
    vector<int> rows;

    for (int i = m - 1; i >= 0; i--)
    {
        // cout << grid[i][n - 1] << endl;
        if (grid[i][n - 1] < 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (grid[i][j] < 0)
                    negative++;
                else
                    break;
            }
            cout << endl;
        }
        else
            break;
    }

    return negative;
}

int main()
{
    vector<vector<int>> vec = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << countNegatives(vec) << endl;
    return 0;
}