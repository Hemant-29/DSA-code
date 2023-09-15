#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = 0; j <= i; j = j + 1)
        {
            cout << (char)(n - j - 1 + 'A') << " ";
        }
        cout << endl;
    }
    return 0;
}