#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> arr)

{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// A comparator always return in bool type
bool myComp(int a, int b)
{ // if the list is made of integers, then we have to take integers as input

    // return a < b; // This sorts the array in increasing order

    return a > b; // This sorts the array in decreasing order
    // because in a decreasing order array,
    // an element(say a) is bigger than its following element(b)
}

int main()
{
    vector<int> arr = {40, 20, 70, 50, 60};
    // This is the basic sort function of STL
    sort(arr.begin(), arr.end());

    // Now using this sort function with custom comparators
    sort(arr.begin(), arr.end(), myComp);
    printVector(arr);
}