#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            isPrime = false;
    }
    return isPrime;
}
int main()
{
    cout << checkPrime(11) << endl;
    return 0;
}