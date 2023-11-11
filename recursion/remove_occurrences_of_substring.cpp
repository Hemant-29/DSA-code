#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string recursiveRemove(string &s, string &part)
{
    int found_index = s.find(part);

    // Base condition
    if (found_index == string::npos)
        return s;

    string ans = s.substr(0, found_index) + s.substr(found_index + part.size(), s.size() - found_index - part.size());
    return recursiveRemove(ans, part);
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << recursiveRemove(s, part) << endl;
    return 0;
}