#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 0; i < n; i = i + 1)
    {
        // The First and the Last column is already filled with stars
        cout << "* ";
        for (int j = 0; j < n - 2; j = j + 1)
        {
            // This for loop runs for rest of the middle columns
            if (i == 0 || i == n - 1)
            {
                // Print all starts for 1st and last row
                cout << "* ";
            }
            else
            {
                // Print all emptys for in between rows
                cout << "  ";
            }
        }
        cout << '*' << endl;
    }
    return 0;
}