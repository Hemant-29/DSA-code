#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (j == 1 || j == n - i || i == 0)
                cout << i + j << ' ';
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}