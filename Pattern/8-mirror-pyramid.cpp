#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    // first method
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = 0; j < n - i - 1; j = j + 1)
        {
            cout << "  ";
        }
        for (int k = 0; k < i + 1; k = k + 1)
        {
            cout << " *";
        }
        cout << endl;
    }

    // second method
    cout << endl;
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = n - i - 1; j > 0; j = j - 1)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k = k + 1)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}