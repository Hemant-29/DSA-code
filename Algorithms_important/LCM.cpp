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

int findLCM(int a, int b)
{
    int hcf = findHCF(a, b);
    // We use the formula for the LCM -> (LCM * HCF = a * b)
    int lcm = (a * b) / hcf;
    return lcm;
}

int main()
{
    cout << findLCM(12, 13) << endl;
    return 0;
}