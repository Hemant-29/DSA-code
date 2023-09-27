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

void reverse(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

vector<int> vectorSum(vector<int> A, vector<int> B)
{
    // This is the output array in which the sum will be stored
    vector<int> sum;
    // 'i' and 'j' represents the ending indexes of the vectors A and B
    int i = A.size() - 1;
    int j = B.size() - 1;
    // carry variable stores the carry forward value
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        // Addition is the element obtained by adding the last digit of the arrays A and B With the carry number
        int addition = A[i] + B[j] + carry;
        // Digit is the last digit of the number "addition"
        int digit = addition % 10;
        // Kerry is the 1st digit of the number "addition"
        carry = addition / 10;
        // Here We add the digit to the sum array
        sum.push_back(digit);
        // Updating indexes I and J
        i--, j--;
    }

    carry = 0;
    // The cases when the arrays are not the same size
    while (i >= 0)
    {
        int addition = A[i] + 0 + carry;
        int digit = addition % 10;
        carry = addition / 10;
        sum.push_back(digit);
        i--;
    }
    carry = 0;
    while (j >= 0)
    {
        int addition = A[i] + 0 + carry;
        int digit = addition % 10;
        carry = addition / 10;
        sum.push_back(digit);
        i--;
    }
    // In the end we reverse the array
    reverse(sum);
    return sum;
}

int main()
{
    vector<int> A = {0, 9, 0, 0, 3, 5};
    vector<int> B = {0, 0, 2, 2, 7};
    vector<int> sumArray = vectorSum(A, B);
    printVector(sumArray);
}