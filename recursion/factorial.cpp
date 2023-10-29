#include <iostream>
using namespace std;

int factorial(int num)
{
    // Base Condition
    if (num <= 1)
        return 1;

    // No processing condition

    // recursive call
    return num * factorial(num - 1);
}
int main()
{
    cout << factorial(5) << endl;
    return 0;
}