#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

void printVect(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "  ";
    cout << endl;
}

void permutations(vector<int> arr, int index, vector<int> ans)
{
    ans.push_back(arr[index]);
    // Base condition
    if (index >= arr.size())
    {
        printVect(ans);
        return;
    }
    // recursive Relation
    permutations(arr, index + 1, ans);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    permutations(arr, 0, {});
    return 0;
}