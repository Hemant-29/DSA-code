#include <iostream>
using namespace std;

int check_maximum(int n1, int n2, int n3)
{
    int max;
    if (n1 > n2)
    {
        if (n1 > n3)
            max = n1;
        else
            max = n3;
    }
    else
    {
        if (n2 > n3)
            max = n2;
        else
            max = n3;
    }
    return max;
}

int main()
{
    cout << check_maximum(14, 2, 4) << endl;
    return 0;
}