#include <iostream>
#include <string.h>
using namespace std;

string removeDuplicates(string s)
{
    int n = s.length();
    string answer;
    answer.push_back(s[0]);
    for (int i = 1; i < n; i++)
    {
        if (answer.back() == s[i])
            answer.pop_back();
        else
            answer.push_back(s[i]);
    }
    return answer;
}

int main()
{
    string s = "abbaca";
    cout << removeDuplicates(s) << endl;
}