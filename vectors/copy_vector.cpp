#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> arr, int n)
{ // Prints the vector
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vector1 = {1, 2, 4, 8, 16, 32};
    printVector(vector1, vector1.size());

    // I want to initialise vector 2 with elements of vector 1
    vector<int> vector2(vector1);
    printVector(vector2, vector2.size());
    return 0;
}