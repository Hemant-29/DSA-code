#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (p < 10)
                cout << p << "  ";
            else if (p < 100)
                cout << p << " ";
            p++;
        }
        cout << endl;
    }
    return 0;
}