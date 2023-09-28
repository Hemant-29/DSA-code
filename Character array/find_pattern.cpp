#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

void remapPattern(string &pattern)
{
    vector<int> mapping(300, 0);
    int alpha_index = 'a';
    for (auto element : pattern)
    {
        if (mapping[element] == 0)
        {
            mapping[element] = alpha_index;
            alpha_index++;
        }
    }
    string output;
    for (auto ch : pattern)
    {
        output.push_back(mapping[ch]);
    }
    pattern = output;
}

bool findPattern(string word, string pattern)
{
    remapPattern(pattern);
    // Generate mapping for words with pattern
    vector<char> mapping(300, 0);
    int element = 97;
    for (auto ch : word)
    {
        if (mapping[ch] == 0)
        {
            mapping[ch] = element;
            element++;
        }
    }

    // de-cipher the elements
    string output;
    for (int i = 0; i < word.size(); i++)
    {
        output.push_back(mapping[word[i]]);
    }

    if (output == pattern)
        return true;
    else
        return false;
}

vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{
    vector<string> matches;
    for (auto element : words)
    {
        if (findPattern(element, pattern))
            matches.push_back(element);
    }

    return matches;
}

int main()
{
    vector<string> words = {"ahi", "pqt", "itt", "aha", "yuu"};
    vector<string> answer = findAndReplacePattern(words, "pqq");
    for (auto ch : answer)
    {
        cout << ch << endl;
    }
    return 0;
}