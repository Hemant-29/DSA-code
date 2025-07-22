#include <iostream>
#include <vector>
#include <string>
using namespace std;

void recursiveMaze(vector<vector<int>> &maze, string &output, int i = 0, int j = 0)
{
    // This function prints out all the possible paths that rat can take to reach the destination
    // Backtracking has to be done because we use the maze as pass by reference

    int i_max = maze.size() - 1;
    // represent the index of no. of rows
    int j_max = maze[0].size() - 1;
    // represents the index of no. of columns
    // cout << i_max << ", " << j_max << endl;

    // Base case
    if (i == i_max && j == j_max)
    {
        // Print the output as soon as we reach the destination
        cout << output << endl;
        return;
    }

    // DOWN case
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
    // RIGHT case
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
    // UP case
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
    // LEFT case
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
    // The rat has 4 possible movements, Up, Down, Right, Left
    // Only the paths of the maze which has 1 are opened, and all paths with 0 are blocked
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