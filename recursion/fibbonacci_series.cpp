#include <iostream>
using namespace std;

int fibo(int num)
{
    // Base condition
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;

    // Recursive relation
    return fibo(num - 1) + fibo(num - 2);
}

int main()
{
    int num = 10;
    cout << fibo(num) << endl;
    return 0;
}