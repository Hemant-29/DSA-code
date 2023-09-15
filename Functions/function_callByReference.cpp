#include <iostream>
using namespace std;

void incrementVariable(int &num)
{
    // you can see that 'num' here👆 is a reference variable to the 'n', outside the function
    // This num points to the address of the passed variabel 'n'
    num++;
}
int main()
{
    int n = 5;
    incrementVariable(n);
    cout << "n after calling increment function: " << n << endl;
    // Thus updating inside the function updates this n outside the function as well
    return 0;
}