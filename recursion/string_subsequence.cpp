#include <iostream>
#include <string>
using namespace std;

// Note - This is a very very important question
// We use the recursive include exclude approach to solve it
void subSequenceRecursive(string input, string output = "", int index = 0)
{
    // Base condition
    if (index >= input.size())
    {
        cout << output << endl; // Print at the Base case
        return;
    }

    // Recursive Relation

    // 1st - excluding the index element
    subSequenceRecursive(input, output, index + 1);
    // 2nd - including the index element
    output.push_back(input[index]);
    subSequenceRecursive(input, output, index + 1);
}

int main()
{
    string str = "abc";
    subSequenceRecursive(str);
    return 0;
}