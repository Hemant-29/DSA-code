#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

bool isPalindrome(string &str, int i = 0, int j = -10, bool ans = true)
{
    if (j == -10)
        j = str.size() - 1;

    // Base condition
    if (i > j)
        return ans;

    // Processing
    if (str[i] != str[j])
    {
        ans = false;
        return ans;
    }

    // Recursive relation
    return isPalindrome(str, i + 1, j - 1, ans);
}

int main()
{
    string str = "racecar";
    int size = str.size();
    cout << isPalindrome(str) << endl;
    return 0;
}