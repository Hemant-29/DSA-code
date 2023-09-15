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

int printPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n = 45;
    printPrimes(n);
}