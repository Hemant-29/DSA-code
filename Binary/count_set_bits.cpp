#include <iostream>
using namespace std;

// 1=set bit, 0=off bit
// Here we find all the set bits,i.e. ones in a binary_number number

int decimalTobinary_number(int num)
{

    int i = 1;
    double binary_numberNumber = 0;
    while (num > 0)
    {
        int binary_numberDigit = num % 2;
        num = num / 2;
        binary_numberNumber = i * binary_numberDigit + binary_numberNumber;
        i = i * 10;
    }

    return binary_numberNumber;
}

int main()
{
    // We find all the set bits of binary_number representation of this number
    int binary_number = 14; // Equates to 1110
    int count = 0;
    cout << "Input number : " << decimalTobinary_number(binary_number) << endl;

    while (binary_number > 0)
    {
        // The last bit in a binary_number number is found by ANDING with 1(num & 1)
        int bit = (binary_number & 1);
        if (bit == 1)
        // We increase count whenever a bit is 1
        {
            count++;
        }
        // The last bit, ehich is already extracted is removed by right shifting
        binary_number = (binary_number >> 1);
    }

    cout << "no. of set bits are: " << count << endl;
    return 0;
}