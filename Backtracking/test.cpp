#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

vector<string> findPath(vector<vector<int>> &m, int n, vector<string> &ans, int x = 0, int y = 0, string currentAns = "")
{
    cout << currentAns << endl;
    cout << "x: " << x << ", y: " << y << endl;
    // Base Case
    if (x == n - 1 && y == n - 1)
    {
        // Reached destination
        ans.push_back(currentAns);
        return ans;
    }

    // UP
    if (x != 0 && m[x - 1][y] != 0)
    {
        currentAns.push_back('U');
        m[x][y] = 0;
        --x;

        // Recursive Call
        findPath(m, n, ans, x, y, currentAns);

        // Returning from recursive call
        m[x][y] = 1;
        currentAns.pop_back();
    }
    // DOWN
    if (x != n - 1 && m[x + 1][y] != 0)
    {
        currentAns.push_back('D');
        m[x][y] = 0;
        ++x;

        // Recursive Call
        findPath(m, n, ans, x, y, currentAns);

        // Returning from recursive call
        m[x][y] = 1;
        currentAns.pop_back();
    }

    // LEFT
    if (y != 0 && m[x][y - 1] != 0)
    {
        currentAns.push_back('L');
        m[x][y] = 0;
        --y;

        // Recursive Call
        findPath(m, n, ans, x, y, currentAns);

        // Returning from recursive call
        m[x][y] = 1;
        currentAns.pop_back();
    }

    // RIGHT
    if (y != n - 1 && m[x][y + 1] != 0)
    {
        currentAns.push_back('R');
        m[x][y] = 0;
        ++y;

        // Recursive Call
        findPath(m, n, ans, x, y, currentAns);

        // Returning from recursive call
        m[x][y] = 1;
        currentAns.pop_back();
    }
    return ans;
}

int main()
{

    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};

    vector<string> ans;
    findPath(m, 4, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}