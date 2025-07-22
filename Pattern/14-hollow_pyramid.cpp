#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = 0; j <= n - i - 1; j = j + 1)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j = j + 1)
        {
            if (j == 0 || j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}