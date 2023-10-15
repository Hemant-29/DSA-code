#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    // Assume a pointer ptr1, pointing to a varaible num
    int *ptr1 = &num;

    // Then we create a pointer ptr2, which is pointing to the pointer ptr1
    int **ptr2 = &ptr1;
    // Since this is a pointer to a pointer, thus we use 2 starts(**)

    // Letus now create another pointer ptr3, which is pointing to the pointer ptr3
    int ***ptr3 = &ptr2;
    // We use 3 stars, because this pointer is pointing to a pointer to another pointer

    // Accessing the values using pointers
    cout << "\nDereference ptr1 (*ptr1) : " << *ptr1 << endl;
    cout << "Dereference ptr2 (*ptr2) : " << *ptr2 << endl;
    cout << "double dereference ptr2(**ptr2) : " << **ptr2 << endl;
    cout << "Dereference ptr3 (*ptr3) : " << *ptr3 << endl;
    cout << "double dereference ptr3(**ptr3) : " << **ptr3 << endl;
    cout << "triple dereference ptr3(***ptr3) : " << ***ptr3 << endl;
    return 0;
}