#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = 0; j < n - i + 3; j = j + 1)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
                cout << i + 1 << " ";
            else
                cout << "* ";
        }
        for (int j = 0; j < n - i + 3; j = j + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}