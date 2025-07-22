#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

int main()
{
    int num = 1023;

    // Since bitwise & of a number with 1 gives the last digit of the number
    // Thus if it is 1, given number is odd
    // if it is 0, number is even
    if (num & 1 == 1)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
    return 0;
}