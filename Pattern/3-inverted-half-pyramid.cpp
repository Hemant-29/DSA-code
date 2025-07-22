#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    // Here i stands for current row number
    for (int i = 0; i < n; i++)
    {
        // j stands for current column number
        for (int j = 0; j < n - i; j = j + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}