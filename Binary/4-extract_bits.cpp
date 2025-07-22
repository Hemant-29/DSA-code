#include <iostream>
using namespace std;

int main()
{
    // Given a binary number
    int bin = 1011000;
    // The "least significant" or rightmost bit can be found by "ANDING" with 1
    int lsb = (bin & 1);
    cout << lsb << endl;
    return 0;
}