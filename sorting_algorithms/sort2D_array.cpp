#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector2D(vector<vector<int>> &arr, int highlightCol = -1)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (highlightCol >= 0)
            {
                if (j == highlightCol)
                {
                    cout << "| ";
                }
            }
            cout << arr[i][j] << "  ";
            if (highlightCol >= 0)
            {
                if (j == highlightCol)
                {
                    cout << "\b| ";
                }
            }
        }
        cout << endl;
    }
}

bool customComparator(vector<int> &a, vector<int> &b)
{
    // Here "a" and "b" denotes the vectors stored in the 2D array
    return a[1] < b[1];
    // This custom comparator sorts the array based on its 1st index instead of 0th index
}

int main()
{
    // consider a 2D array :-
    vector<vector<int>> arr2d = {{44, 11, 77},
                                 {11, 88, 22},
                                 {99, 33, 33},
                                 {66, 55, 88}};

    cout << "\nOriginal array :- " << endl;
    printVector2D(arr2d);

    cout << "\nBy using the default sort :- " << endl;
    sort(arr2d.begin(), arr2d.end());
    printVector2D(arr2d, 0);
    // Note how the 2D array gets sorted in increasing order W.R.T 0th index only

    cout << "\nBy using sort with custom Comparator :- " << endl;
    sort(arr2d.begin(), arr2d.end(), customComparator);
    printVector2D(arr2d, 1);
    // NOTE: 2D array gets sorted in increasing order W.R.T 1st index

    return 0;
}