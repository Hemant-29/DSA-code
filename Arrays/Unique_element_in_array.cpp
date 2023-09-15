#include <iostream>
using namespace std;
// In this problem an array has all its elements in pair except one, we have to find that one
// Like in - {1,4,1,7,4} The  7 is a single(unique) element

int uniqueElement(int arr[], int n)
{ // we use xor approach to solve it.
    int xor_num = 0;
    // Xor any element with "zero", you get that number
    for (int i = 0; i < n; i++)
    {
        xor_num = xor_num ^ arr[i];
        // Here xor_num stores the xor of all the numbers of the array
    }
    // xor of similar numbers is zero and the only single no. gets returned
    return xor_num;
}

int main()
{
    int arr[] = {1, 2, 1, 3, 3, 7, 2};
    int n = 7;
    cout << "Unique element is: " << uniqueElement(arr, n) << endl;
    return 0;
}