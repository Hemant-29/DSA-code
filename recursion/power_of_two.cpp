#include <iostream>
#include <vector>
using namespace std;

float power2(int num)
{
    // Base condition
    if (num == 0)
        return 1;
    // Processing

    // Recursive relation
    if (num > 0)
        return 2 * power2(num - 1);

    if (num < 0)
        return power2(num + 1) / 2;
}

int main()
{
    cout << power2(-1) << endl;
    return 0;
}