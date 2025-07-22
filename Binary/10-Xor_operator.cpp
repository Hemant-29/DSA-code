#include <iostream>
using namespace std;

int main()
{
    // XOR is denoted by - "^"

    // for any 2 similar values the xor is always 0
    cout << endl;
    cout << 1 << " xor " << 1 << " = " << (1 ^ 1) << endl;
    cout << 0 << " xor " << 0 << " = " << (0 ^ 0) << endl;

    // even true for non 1 and 0 values
    cout << endl;
    cout << 14 << " xor " << 14 << " = " << (14 ^ 14) << endl;

    cout << endl;
    // for 2 different values their xor is not zero
    cout << 0 << " xor " << 1 << " = " << (0 ^ 1) << endl;
    cout << 1 << " xor " << 0 << " = " << (1 ^ 0) << endl;

    // Important note -xor of 0 with "ANY" number will output "THAT" number
    cout << endl;
    cout << 0 << " xor " << 1 << " = " << (0 ^ 1) << endl;
    cout << 0 << " xor " << 2 << " = " << (0 ^ 2) << endl;
    cout << 0 << " xor " << 4 << " = " << (0 ^ 4) << endl;

    return 0;
}