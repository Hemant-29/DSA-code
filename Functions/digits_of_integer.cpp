#include <iostream>
using namespace std;

void printDigits(int n)
{
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        n /= 10;
        cout << digit << endl;
    }
}
int main()
{
    int n = 4587;
    printDigits(n);
    return 0;
}