#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

unsigned long int factorial(int num)
{
    unsigned long int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

unsigned int MultiplyArray(int num)
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {1, 2, 3};
    vector<int> product(arr1.size() * arr2.size(), 0);
    int i = 0;
    int j = 0;
    while (j < arr2.size())
    {
        int carry = 0;
        while (i < arr1.size())
        {
            // cout << i << "  " << j << endl;
            int multiply = arr1[arr1.size() - 1 - i] * arr2[arr2.size() - 1 - j] + carry;
            int digit = multiply % 10;
            cout << digit << endl;
            carry = multiply / 10;
            // Use addition of arrays here
            product[i + j] += digit;
            i++;
        }

        if (carry != 0)
        {
            product[i + j] += carry;
        }

        j++;
        i = 0;
    }
    printVector(product);
}

int main()
{
    // cout << factorial(25) << endl;
    MultiplyArray(2);
}