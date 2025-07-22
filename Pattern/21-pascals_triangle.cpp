#include <iostream>
#include <cmath>
using namespace std;

// NOTE that formula to calculate any element by its row and column number is (i-1)C(j-1) where i=row,j=col

int ncr(int n, int r)
{
    int ans = 1;
    for (int i = n; i > r; i = i - 1)
        ans = ans * i;
    // cout << ans << endl;
    for (int i = n - r; i > 1; i = i - 1)
        ans = ans / i;
    // cout << ans << endl;
    return ans;
}

int main()
{
    int n = 8;

    for (int i = 0; i < n + 1; i++)
    {

        for (int j = 1; j < n - i + 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            int c = ncr(i, j);
            if (c < 10)
                cout << " " << c << "  ";

            else
                cout << c << "  ";
        }

        cout << endl;
    }
    return 0;
}