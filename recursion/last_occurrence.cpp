#include <iostream>
#include <vector>
#include <string>
using namespace std;

int findLastOccurrence(string &str, char element, int index)
{
    // Base condition
    if (index < 0)
        return -1;

    // Processing
    if (str[index] == element)
        return index;

    // recursive relation
    return findLastOccurrence(str, element, index - 1);
}

int main()
{
    string str = "abcddedg";
    cout << findLastOccurrence(str, 'c', str.size() - 1) << endl;
    return 0;
}