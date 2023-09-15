#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    for (;;)
    {
        if (i < 10)
        {
            cout << i << ". this will print 9 times" << endl;
            i = i + 1;
        }
        else
        {
            return 0;
        }
    }
}