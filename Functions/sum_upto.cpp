#include <iostream>
using namespace std;

int sumUpto(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << sumUpto(5) << endl;
    return 0;
}