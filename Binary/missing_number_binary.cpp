#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
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
    cout << findMissing(nums, n) << endl;
    return 0;
}