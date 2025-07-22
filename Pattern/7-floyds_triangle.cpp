#include <iostream>
using namespace std;

int main()
{
    int n = 20;
    int p = 1;
    // Here i stands for current row number
    for (int i = 0; i < n; i++)
    {
        // j stands for current column number
        for (int j = 0; j < i + 1; j++)
        {
            if (p < 10)
                cout << p << "   ";
            else if (p < 100)
                cout << p << "  ";
            else if (p < 1000)
                cout << p << " ";
            p++;
        }
        cout << endl;
    }
    return 0;
}