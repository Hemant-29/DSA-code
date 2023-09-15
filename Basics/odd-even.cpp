#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "even number";
    }
    else
    {
        cout << "odd number";
    }
    return 0;
}