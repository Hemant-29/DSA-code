#include <iostream>
using namespace std;

int decimalToBinary(int num)
{
    int i = 1;
    double binaryNumber = 0;
    while (num > 0)
    {
        int binaryDigit = num % 2;
        num = num / 2;
        binaryNumber = i * binaryDigit + binaryNumber;
        i = i * 10;
    }

    return binaryNumber;
}

// Note - "set" bits = bits which are 1 in a binary number
int main()
{
    int num = 45;
    int num_binary = decimalToBinary(num);
    cout << "Input number is : " << num_binary << endl;

    // K is the index of the bit to be "swiched ON" from LSB, i.e. from left to right
    int k = 4;
    // To generate the mask number
    int mask = 1 << 4;

    // We perform binary OR of the number with the mask number to switch the bit
    num = (num | mask);
    num_binary = decimalToBinary(num);
    cout << "After setting " << k << "th bit : " << num_binary << endl;
    return 0;
}