#include <iostream>
using namespace std;

int decimalToBinary(int num)
{
    // With this approach the individual bit is found by bitwise AND(number & 1)

    int i = 1;
    double binaryNumber = 0;
    while (num > 0)
    {
        // ANDing between "n" & 1
        int binaryDigit = (num & 1);
        // In the below line, we add all individual bits to form the complete binay number
        binaryNumber = i * binaryDigit + binaryNumber;
        // Then we right shift this number by 1
        num = num >> 1;
        i = i * 10;
    }

    return binaryNumber;
}

// int main()
// {
//     int x = 8;
//     int output = !((x) & (x - 1));
//     cout << output << endl;
//     cout << decimalToBinary(x) << endl;
//     cout << decimalToBinary(output) << endl;
//     return 0;
// }
// int main()
// {
//     bool num = (5 & ((1 << 2)));
//     cout << num << endl;
//     cout << decimalToBinary(5) << endl;
//     cout << decimalToBinary(num) << endl;
//     return 0;
// }

// int fun(int x, int y)
// {
//     return ((x ^ y) < 0);
// }

// int main()
// {
//     cout << fun(-8, -4) << endl;
//     return 0;
// }

int main()
{
    cout << (float)5 / 2;
}