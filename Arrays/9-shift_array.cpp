#include <iostream>
using namespace std;

// Here, amount = no. of steps that the array has to be shifted
void shiftArray(int arr[], int n, int amount)
{
    // creating a temporary array that stores the first 2 elements of main array
    int tempArray[20];
    for (int i = 0; i < amount; i++)
    {
        tempArray[i] = arr[(n) - (amount - i)];
    }

    // shifting each element of the array "amount" times
    for (int j = 0; j < amount; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {

            arr[i] = arr[i - 1];
        }
    }

    // reassigning the first 2 elements of "Main array" from the "temporary array"
    for (int i = 0; i < amount; i++)
    {
        arr[i] = tempArray[i];
    }
}

int main()
{
    // define array and its size
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = 15;

    // calling the function(Here we are shifting the array 2 steps to right)
    shiftArray(arr, n, 3);

    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}