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

int findMissing2(int arr[], int n)
{ // In this function, we use the xor approach
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i] ^ i;
    }
    ans ^= n;
    return ans;
}

int main()
{
    int nums[] = {0, 1};
    int n = 2;
    cout << findMissing2(nums, n) << endl;
    return 0;
}