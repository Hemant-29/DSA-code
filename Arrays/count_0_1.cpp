#include <iostream>
using namespace std;

int countZeros(int arr[], int size)
{
    int zeros = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            zeros++;
    }
    return zeros;
}

int countOnes(int arr[], int size)
{
    int ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            ones++;
    }
    return ones;
}

int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    cout << "zeros are: " << countZeros(arr, 11) << endl;
    cout << "ones are: " << countOnes(arr, 11) << endl;
}