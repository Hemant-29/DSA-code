#include <iostream>
#include <vector>
using namespace std;

// In Insertion sort, we go through the whole array and we insert the selected element
// at the correct place it should be at in the subarray before it

void printVector(vector<int> arr)

{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int i, vector<int> &arr)
{
    // j variable is used to traverse the array in backward direction
    int j = i - 1;
    // temp contains the last element stored in the 'i' index
    int temp = arr[i];
    // loop stop when j reach '0' index or it reaches a smaller element
    while (arr[j] > temp && j >= 0)
    {
        // in this loop, we shift each element at j one position to its right
        arr[j + 1] = arr[j];
        // take the 'j' backwards
        j--;
    }
    // finally we store the value of temp on the last j index
    arr[j + 1] = temp;
}

void insertion_sort(vector<int> &arr)
{

    int n = arr.size();
    // Here i is the index of the current element
    for (int i = 1; i < n; i++)
    {
        // cout << i << endl;
        insert(i, arr);
    }
    printVector(arr);
}

int main()
{
    vector<int> arr = {4, 1, 54, 65, 16, 51, 68, 46, 19, 78, 10, 21, 54, 9, 87};
    insertion_sort(arr);
    return 0;
}