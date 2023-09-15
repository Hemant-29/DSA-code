#include <iostream>
using namespace std;

int main()
{
    int n = 64;
    for (int i = 0; i < n; i = i + 1)
    {
        cout << "* ";
        for (int j = 0; j < n - 2; j = j + 1)
        {
            if (i == 0 || i == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << '*' << endl;
    }
    return 0;
}