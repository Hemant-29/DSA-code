#include <iostream>
using namespace std;
int main()
{
    int n;
    if (cin >> n) //<-this reads an integer value from user
    {
        cout << "Love Babbar" << endl; //<-this prints if n is an integer and not a character
    }
    n = 10;
    if (cout << n) //<-this prints the value of n
    {
        cout << "Love Babbar"; //<-this gets printed if the above line was printed already
    }
    return 0;
}