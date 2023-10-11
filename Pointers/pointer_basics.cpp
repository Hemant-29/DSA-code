#include <iostream>
using namespace std;

int main()
{
    // A pointer is variable which stores the memory address of another variable
    int num = 45;
    cout << "\nvalue in the variable num - " << num << endl;

    int *ptr = &num;
    // Here the pointer ptr stores an integer value, thus (int *ptr)
    // It is pointing to the address of the variable number, thus (=&number)

    cout << "value stored in the pointer(address of num) - " << ptr << endl;

    cout << "Dereferencing the value of address that the pointer is pointing to - " << *ptr << endl;
    // we use this syntax to dereference a pointer(*ptr)
    // Note that it is different than (int *ptr)
    cout << endl;
}