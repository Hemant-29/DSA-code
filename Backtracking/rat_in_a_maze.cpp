#include <iostream>
#include <vector>
#include <string>
using namespace std;

void recursiveMaze(vector<vector<int>> &maze, string &output, int i = 0, int j = 0)
{
    int i_max = maze.size() - 1;
    int j_max = maze[0].size() - 1;
    // cout << i_max << ", " << j_max << endl;

    // Base case
    if (i == i_max && j == j_max)
    {
        // Print the output as soon as we reach the destination
        cout << output << endl;
        return;
    }

    if (i < i_max && maze[i + 1][j] == 1)
    {
        // Add current move to the output
        output.push_back('D');
        // Mark Visited
        maze[i][j] = 0;
        // Recursive call for next block
        recursiveMaze(maze, output, i + 1, j);
        // Backtracking after the recursive call returns due to call by reference
        maze[i][j] = 1;
        output.pop_back();
    }
    if (j < j_max && maze[i][j + 1] == 1)
    {
        // Add current move to the output
        output.push_back('R');
        // Mark Visited
        maze[i][j] = 0;
        // Recursive call for next block
        recursiveMaze(maze, output, i, j + 1);
        // Backtracking after the recursive call returns
        maze[i][j] = 1;
        output.pop_back();
    }
    if (i > 0 && maze[i - 1][j] == 1)
    {
        // Add current move to the output
        output.push_back('U');
        // Mark Visited
        maze[i][j] = 0;
        // Recursive call for next block
        recursiveMaze(maze, output, i - 1, j);
        // Backtracking after the recursive call returns
        maze[i][j] = 1;
        output.pop_back();
    }
    if (j > 0 && maze[i][j - 1] == 1)
    {
        // Add current move to the output
        output.push_back('L');
        // Mark Visited
        maze[i][j] = 0;
        // Recursive call for next block
        recursiveMaze(maze, output, i, j - 1);
        // Backtracking after the recursive call returns
        maze[i][j] = 1;
        output.pop_back();
    }
}

int main()
{
    vector<vector<int>> maze = {{1, 1, 1, 1},
                                {1, 0, 1, 1},
                                {1, 1, 1, 1},
                                {0, 0, 0, 1}};

    // Edge case
    if (maze[0][0] == 0)
        return 0;
    string output = "";
    recursiveMaze(maze, output);
    return 0;
}