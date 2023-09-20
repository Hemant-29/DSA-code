#include <iostream>
using namespace std;

unsigned long int factorial(int num)
{
    unsigned long int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << factorial(25) << endl;
}