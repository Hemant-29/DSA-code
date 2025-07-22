#include <iostream>
using namespace std;

bool linearSearch(int arr[][4], int row, int col, int target)
{
    // This found variable is true when element is found in array otherwise it remains false
    bool found = false;
    // for loops to traverse through all the 2d array elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // If current element = target
            if (arr[i][j] == target)
                found = true;
        }
    }
    return found;
}

int main()
{
    int arr[][4] = {{2, 4, 9, 5},
                    {1, 7, 11, 14}};
    int row = 2;
    int col = 4;
    int target = 14;
    cout << linearSearch(arr, row, col, target) << endl;
    return 0;
}