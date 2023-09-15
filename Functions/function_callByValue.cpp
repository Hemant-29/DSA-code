#include <iostream>
using namespace std;

// This is the syntax for function call by value
int incrementVariable(int n)
{
    // This means the 👆 variable "n"  here is a COPY of the passed variable "n"
    n++;
    // So any changes made in this function will be applied to this local "n" variable
    return n;
}
int main()
{
    int n = 10;
    incrementVariable(n);
    cout << "\nThe variable n after increment: " << n << endl;
    // Thus when n is printed here, it prints the original one=5
    return 0;
}