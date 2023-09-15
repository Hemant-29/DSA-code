#include <iostream>
using namespace std;

int addDigitToNumber(int num, int digit)
{
    // This functions adds the digit to the end of the provided number
    num *= 10;
    num += digit;
    return num;
}

int main()
{
    int num = 0;
    cout << "ENTER A NEGATIVE NUMBER TO STOP\n"
         << endl;
    cout << "Enter a digit : ";

    while (true)
    {
        int input;
        cin >> input;
        if (input < 0)
            break;
        else if (input > 9)
            cout << "please enter Digits Only" << endl;
        else
        {
            num = addDigitToNumber(num, input);
            cout << "Enter the next digit : ";
        }
    }
    cout << "The number is : " << num << endl;
    return 0;
}