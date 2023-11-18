#include <iostream>
#include <vector>
#include <string>
using namespace std;

void stringPermutations(string &str, int index = 0)
{
    if (index >= str.size())
    {
        cout << str << " ";
        return;
    }

    for (int i = index; i < str.size(); i++)
    {
        swap(str[index], str[i]);
        // Recursive call
        stringPermutations(str, index + 1);

        // Here we revert back the original string to its previous state
        swap(str[index], str[i]); // Backtracking concept
        // This is imortant because the string is passed to the funciton by referrece
    }
}

int main()
{
    string str = "abc";
    stringPermutations(str);
    return 0;
}