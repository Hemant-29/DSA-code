#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void recursiveAdd(string &num1, string &num2, string &sum, int carry = 0)
{
    char a, b;
    int size1 = num1.size(), size2 = num2.size();
    (num1.size() > 0) ? a = num1.back() : a = '0';
    (num2.size() > 0) ? b = num2.back() : b = '0';

    // Base case
    if (size1 <= 0 && size2 <= 0 && carry == 0)
        return;

    // Processing
    char current_sum = a + b + carry - 48;
    // Push sum of elements to the sum
    if (current_sum > '9')
        sum.push_back((current_sum - 10));
    else
        sum.push_back((current_sum));
    // pop elements from strings
    if (size1 > 0)
        num1.pop_back();
    if (size2 > 0)
        num2.pop_back();

    // Set carry
    if (current_sum > '9')
        carry = 1;
    else
        carry = 0;

    // Recursive relation
    recursiveAdd(num1, num2, sum, carry);
}

string addStrings(string &num1, string &num2)
{
    string sum = "";
    recursiveAdd(num1, num2, sum);
    reverse(sum.begin(), sum.end());
    return sum;
}

int main()
{
    string num1 = "478";
    string num2 = "29";
    cout << addStrings(num1, num2) << endl;
    return 0;
}