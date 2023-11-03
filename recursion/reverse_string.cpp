#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str, int start, int end)
{
    // Base condition
    if (start > end)
        return;

    // processing
    swap(str[start], str[end]);

    // Recursive relation
    return reverseString(str, start + 1, end - 1);
}

int main()
{
    string str = "hello jee";
    reverseString(str, 0, str.size() - 1);
    cout << str << endl;
    return 0;
}