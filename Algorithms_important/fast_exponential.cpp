#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

int exp(int a, int b)
{
    int exponent = 1;
    while (b > 0)
    {
        if (b & 1) // Meaning b is odd
        {
            exponent *= a;
        }
        a = a * a;
        b = b / 2;
    }
    return exponent;
}

int main()
{
    cout << exp(2, 7) << endl;
    return 0;
}