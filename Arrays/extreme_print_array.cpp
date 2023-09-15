#include <iostream>
using namespace std;

// In this problem you have to print an array from the extreme ends
// For ex- for the array {10,20,30,40,50,60}
// You have to print like - 10 60 20 50 30 40

void extremePrint(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " " << arr[right] << " ";
        }
        left++;
        right--;
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int arr2[] = {10, 20, 30, 40, 50};
    int arr3[] = {0};
    extremePrint(arr, 6);
    extremePrint(arr2, 5);
    extremePrint(arr3, 1);
}