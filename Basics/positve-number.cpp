#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    if (num > 0)
        cout << num << " is a positive number" << endl;
    else if (num == 0)
        cout << "given number is zero" << endl;
    else
        cout << num << " is a negative number" << endl;
    return 0;
}