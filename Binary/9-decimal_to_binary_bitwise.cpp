#include <iostream>
using namespace std;

int decimalToBinary(int num)
{
    // With this approach the individual bit is found by bitwise AND(number & 1)

    int i = 1;
    double binaryNumber = 0;
    while (num > 0)
    {
        // ANDing between "n" & 1 to find the Least Significant Bit
        int binaryDigit = (num & 1);
        // In the below line, we add all individual bits to form the complete binay number
        binaryNumber = i * binaryDigit + binaryNumber;
        // Then we right shift this number by 1
        num = num >> 1;
        i = i * 10;
    }

    return binaryNumber;
}
int main()
{
    int num = 110; // answer = 1001011
    cout << decimalToBinary(num) << endl;
    return 0;
}