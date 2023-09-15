#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    // sum of numbers using AP
    int sumAP = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int num = (sumAP - sum);
    return num;
}

int main()
{
    int nums[] = {5, 0, 1, 3, 2};
    int n = 5;
    cout << findMissing(nums, n) << endl;
    return 0;
}