#include <iostream>
#include <cmath>
using namespace std;

// Function to convert a binary number to a decimal number
int binaryToDecimal(int num)
{
    int place_value = 0;    // Initialize the place value to start from the rightmost bit
    int decimal_number = 0; // Initialize the decimal number we'll build

    while (num > 0)
    {
        // Following lines gives us the rightmost digit of the numner
        int digit = num % 10;
        num /= 10; // Remove the rightmost digit to process the next one
        // We use this formula to form decimal no, decimal no. = binary digit * (2)^place
        decimal_number = decimal_number + (digit * pow(2, place_value));
        place_value += 1; // Move to the next place value (from right to left)
    }

    cout << "Decimal equivalent: " << decimal_number << endl;
    return decimal_number;
}

int main()
{
    int num = 100110;
    binaryToDecimal(num);
    return 0;
}
