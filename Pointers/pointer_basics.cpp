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

    char a = 'g';
    char *ptr2 = &a;

    cout << "Size of integer pointer is - " << sizeof(ptr) << endl;
    cout << "Size of character pointer is - " << sizeof(ptr2) << endl;
    // Note that pointer pointing to any data type has same memory size
    // whether it points to an integer, character or float etc.
    // because it is used to store an address anyway, which takes 4 bytes
    cout << endl;
}