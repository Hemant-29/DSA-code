#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
            return false;
    }
    return true;
}

int main()
{
    int prime = checkPrime(4);
    if (prime)
        cout << "it is prime" << endl;
    else
        cout << "not a prime number" << endl;
    return 0;
}