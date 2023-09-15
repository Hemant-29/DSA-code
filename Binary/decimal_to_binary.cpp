#include <iostream>
using namespace std;

int decimalToBinary(int num)
{
    // To find binary of a number, we find remainder of that number when divided with 2
    // This remainder is a single bit of the binary number

    int i = 1;
    double binaryNumber = 0;
    while (num > 0)
    {
        int binaryDigit = num % 2;
        num = num / 2;
        // In the below line, we add all individual bits to form the complete binay number
        binaryNumber = i * binaryDigit + binaryNumber;
        i = i * 10;
    }

    return binaryNumber;
}
int main()
{
    int num = 75; // answer = 1001011
    cout << decimalToBinary(num) << endl;
    return 0;
}