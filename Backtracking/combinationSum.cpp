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
void printVectVect(vector<vector<int>> arr2d)
{
    for (vector<int> array : arr2d)
    {
        printVect(array);
    }
}

bool linearSearch(vector<vector<int>> VectArr, vector<int> targetVect)
{
    for (auto vect : VectArr)
    {
        if (vect == targetVect)
            return true;
    }
    return false;
}

void sumFunction(int difference, int index, vector<int> &arr, vector<int> &ansArr, vector<vector<int>> &finalAns)
{

    // Debugging
    // cout << "(" << difference << ',' << index << ")" << endl;

    // Base condition
    if (difference == 0)
    {
        // cout << "match found" << endl;
        // printVect(ansArr);
        // if (finalAns.empty() || linearSearch(finalAns, ansArr) == false)
        // {
        //     finalAns.push_back(ansArr);
        // }
        finalAns.push_back(ansArr);
        return;
    }

    if (difference < 0)
    {
        return;
    }

    // Recursive condition (While loop implimentation)
    while (index < arr.size())
    {
        ansArr.push_back(arr[index]);
        sumFunction(difference - arr[index], index + 1, arr, ansArr, finalAns);
        index++;
        ansArr.pop_back();
    }
}

int main()
{
    int target = 5;
    vector<int> arr = {2, 5, 2, 1, 2};
    sort(arr.begin(), arr.end());

    vector<int> ans = {};
    vector<vector<int>> finalAns;

    sumFunction(target, 0, arr, ans, finalAns);
    printVectVect(finalAns);

    return 0;
}