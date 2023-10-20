#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

bool isLetter(char &s)
{
    // This function tells whether a given character is An alphabet?
    bool ans = false;
    if ((int)s > 96 && (int)s < 123)
        ans = true;
    if ((int)s > 64 && (int)s < 91)
        ans = true;
    return ans;
}

string reverseOnlyLetters(string s)
{
    // We used to pointer approach to solve this problem
    int i = 0;
    int j = s.size() - 1;
    // Assign pointers(index) I and J at starting and end of the array respectively

    while (i <= j)
    {
        // We changed the value of I & J only if they are alphabets
        if (isLetter(s[i]) && isLetter(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }

        // If the value is stored at I & J are not alphabet then we simply change the index
        else if (isLetter(s[i]) == false)
            i++;
        else if (isLetter(s[j]) == false)
            j--;
    }
    return s;
}

int main()
{
    string str = "a";
    cout << reverseOnlyLetters(str) << endl;
    return 0;
}