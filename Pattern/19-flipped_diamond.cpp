#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    n = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j <= 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}