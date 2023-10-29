#include <iostream>
#include <vector>
using namespace std;

vector<int> storeDigitsOfNumber(int num)
{
    // Base condition
    if (num <= 0)
        return {};

    // Recusive relation
    vector<int> ans = storeDigitsOfNumber(num / 10);

    // Processing
    ans.push_back(num % 10); // The elements will be stored into the ans array at
                             // the time of returning the function, Not at the time of calling it

    return ans;
}

void digitsOfNumber(int num)
{
    // Base condition
    if (num <= 0)
        return;

    // Recursive relation
    digitsOfNumber(num / 10);

    // Processing
    cout << num % 10 << endl; // Processing is Done after function call so that the
                              // printing occurs at the time of returning the function
}

int main()
{
    int num = 4217;
    vector<int> digits = storeDigitsOfNumber(num);

    for (int i : digits)
        cout << i << "  ";
    return 0;
}