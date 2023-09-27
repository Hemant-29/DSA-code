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

int bubbleSort(vector<int> &arr)
{
    int n = arr.size();

    // We have to recursively go through the array only n - 1 times.
    for (int i = 0; i < n - 1; i++)
    {
        int index = 0;
        // With this loop we go through the whole array
        // and swap the elements if they are not in the right order.
        while (index < n - 1)
        {
            if (arr[index] > arr[index + 1])
                swap(arr[index], arr[index + 1]);
            index++;
        }
    }
}

int main()
{

    vector<int> arr = {8, 7, 5, -10, 2, 0};
    bubbleSort(arr);
    printVector(arr);
}