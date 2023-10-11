#include <iostream>
#include <vector>
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

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    printVector(a);
}
