#include <iostream>
#include <vector>
#include <string>
using namespace std;

string removeDuplicates(string s, int k)
{
    // using 2 pointer approach
    int n = s.size();
    int i = 0;
    int j = 0;

    // array "count" stores the number of times a character has occurred in string "s"
    vector<int> count(n, 0);

    while (j < n)
    {
        // Step - 1 : Set the element at index 'i' equal to element at index 'j'
        s[i] = s[j];

        // Step - 2 : Set the count of ith element to be 1
        count[i] = 1;

        // Step - 3 : Then we increase the count of ith element by the count of preceding element
        //  if it is equal to its preceeding element
        if (i > 0 && s[i - 1] == s[i])
            count[i] += count[i - 1];

        // Step - 4 : Then if the count at any index 'i' becomes equal to k,
        // then reduce the index i by 'k' steps
        if (count[i] == k)
            i -= k;

        i++;
        j++;
    }

    // At last, remove the extra elements in the string 's'
    for (; i < j; i++)
    {
        s.pop_back();
    }
    return s;
}

int main()
{
    string s = "deeedbbcccbdaa";
    int k = 3;
    cout << removeDuplicates(s, k) << endl;
    return 0;
}