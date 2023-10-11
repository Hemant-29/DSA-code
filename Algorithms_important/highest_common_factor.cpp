#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

int findHCF(int a, int b)
{
    int ans;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    if (a == 0)
        ans = b;
    else
        ans = a;

    return ans;
}

int main()
{
    cout << findHCF(18, 12) << endl;
    return 0;
}