#include <iostream>
#include <math.h>
using namespace std;

int reverseInt(int n, int size)
{
    int digit;
    int reverse = 0;
    int i = size - 1;

    while (n > 0)
    {
        digit = n % 10;
        n /= 10;
        cout << digit << endl;
        reverse += digit * pow(10, i);
        i--;
    }
    return reverse;
}
int main()
{
    int n = 123456;
    cout << reverseInt(n, 6) << endl;
    return 0;
}