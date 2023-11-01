#include <iostream>
#include <vector>
using namespace std;

int digitsToInteger(vector<int> arr, int index, int ans = 0)
{
    // Base condition
    if (index >= arr.size())
        return ans;

    // Processing
    ans = ans * 10 + arr[index];

    // Recursive relation
    return digitsToInteger(arr, index + 1, ans);
}

int main()
{
    vector<int> digits = {4, 7, 8, 5};
    int num = digitsToInteger(digits, 0);

    cout << num << endl;
    return 0;
}