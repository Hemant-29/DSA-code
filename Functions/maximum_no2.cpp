#include <iostream>
using namespace std;

int check_maximum(int n1, int n2, int n3)
{
    int maximum;
    maximum = max(n1, n2);
    maximum = max(maximum, n3);

    return maximum;
}

int main()
{
    cout << check_maximum(5, 48, 4) << endl;
    return 0;
}