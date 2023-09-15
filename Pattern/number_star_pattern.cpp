#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << i + 1;
            }
            else
            {
                cout << i + 1 << "*";
            }
        }

        cout << endl;
    }
    n = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (j == n - i - 1)
            {
                cout << n - i;
            }
            else
            {
                cout << n - i << "*";
            }
        }

        cout << endl;
    }
    return 0;
}