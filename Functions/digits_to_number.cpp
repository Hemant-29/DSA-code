#include <iostream>
#include <math.h>
using namespace std;

int digitsToNumber(int arr[], int length)
{
    int number;
    for (int i = length - 1; i >= 0; i--)
    {
        int digit = arr[i];
        number += digit * pow(10, i);
    }
    return number;
}

int main()
{
    int digits_arr[] = {1, 2, 5, 7};
    cout << digitsToNumber(digits_arr, 4);
    return 0;
}