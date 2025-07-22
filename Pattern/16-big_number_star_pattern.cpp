#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    for (int i = 0; i < n; i = i + 1)
    {
        // This for loop to make the initial star pattern with margin of 3
        for (int j = 0; j < n - i + 3; j = j + 1)
        {
            cout << "* ";
        }
        // This for loop to put a number on even places and a star at odd places
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
                cout << i + 1 << " ";
            else
                cout << "* ";
        }
        // And this for loop to make the ending star pattern with margin of 3
        for (int j = 0; j < n - i + 3; j = j + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}