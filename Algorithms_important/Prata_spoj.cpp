#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

void printVector(vector<vector<int>> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\t";
    }
}

bool isPossibleSol(vector<int> arr, int n, int p, int target)
{
    // The first prata made by any cook takes arr[i] amount of time
    // The consecutive prata takes n*arr[i](n increases in A.P with difference 1)
    vector<vector<int>> totalPratas;
    vector<int> currentCook;
    // int timeTaken = 0;
    int cookNo = 0;

    while (totalPratas.size() <= n)
    {
        int itr = 1;
        int sum = 0;
        currentCook.push_back(0);

        while (currentCook.back() < target)
        {
            cout << currentCook.back() << endl;
            sum += arr[cookNo] * itr;
            itr++;
            currentCook.push_back(sum);
        }
        currentCook.pop_back();
        totalPratas.push_back(currentCook);
        currentCook.clear();
        cookNo++;
    }

    printVector(totalPratas, 4);
}

int main()
{
    int p = 10;                     // no. of pratas ordered
    vector<int> arr = {1, 2, 3, 4}; // Efficiency of each cook
    int n = arr.size();

    cout << isPossibleSol(arr, n, p, 13) << endl;
    return 0;
}