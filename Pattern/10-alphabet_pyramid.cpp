#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 0; i < n; i = i + 1)
    {
        // This for loop is for characters from A -> Z
        for (int j = 0; j <= i; j = j + 1)
        {
            cout << (char)(j + 'A') << " ";
        }
        // This for loop is for characters from Z -> A
        for (int j = 0; j < i; j = j + 1)
        {
            cout << (char)(i - j - 1 + 'A') << " ";
        }
        cout << endl;
    }
    return 0;
}