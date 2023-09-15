#include <iostream>
using namespace std;

int DtoB(int num, int neg = false)
{
     if (num < 0)
     {
          num *= -1;
          neg = true;
     }

     int i = 1;
     double binaryNumber = 0;
     while (num > 0)
     {
          int binaryDigit = num % 2;
          num = num / 2;
          binaryNumber = i * binaryDigit + binaryNumber;
          i = i * 10;
     }
     if (neg == true)
          binaryNumber *= -1;

     return binaryNumber;
}

int main()
{
     int a = 5, b = 5;
     cout << DtoB(-5) << endl;

     cout << "\nInput : " << endl;
     cout << DtoB(a) << endl;

     // AND operator
     int anded = a & b;
     cout << "AND output is: " << DtoB(anded) << endl;
     cout << anded << endl
          << endl;

     // OR operator
     int ored = a | b;
     cout << "OR output is: " << DtoB(ored) << endl;
     cout << ored << endl
          << endl;

     // XOR operator
     int xored = a ^ b;
     cout << "XOR output is: " << DtoB(xored) << endl;
     cout << xored << endl
          << endl;

     // NOT operator
     int inverted = ~a;
     cout << "NOT output is: " << DtoB(inverted) << endl;
     cout << inverted << endl
          << endl;
     return 0;
}