#include <iostream>
#include <vector>
#include <string>
using namespace std;

void stringPermutations(string str, int index = 0)
{
    // This Function prints all possible permutations of a given string,
    // by shuffling all of the characters present in that string

    // To do that, we simply swap each index of the string with every other index of that string
    // Here, "index" represent each index of the string and "i" represent every other index of the string for that value of "index"

    // BASE CASE
    if (index >= str.size())
    {
        // As soon as this "index" goes out of the string size, return
        cout << str << " ";
        return;
    }

    // For this current value of "index", variable "i" goes from (index to -> string size)
    for (int i = index; i < str.size(); i++)
    {
        // First swap current index value of "index" with all these "i"
        swap(str[index], str[i]);

        // Recursive call with index incremented
        stringPermutations(str, index + 1);
    }
}

void stringPermutationsBacktracking(string &str, int index = 0)
{
    // This Function also prints all possible permutations of a given string
    // The only difference being that it takes string "str" as a pass by reference, so we will need to use Backtracking here

    // BASE CASE
    if (index >= str.size())
    {
        // As soon as this "index" goes out of the string size, return
        cout << str << " ";
        return;
    }

    // For this current value of "index", variable "i" goes from (index to -> string size)
    for (int i = index; i < str.size(); i++)
    {
        // First swap current index value of "index" with all these "i"
        swap(str[index], str[i]);

        // Recursive call with index incremented
        stringPermutations(str, index + 1);

        // When returning back from the recursive call, we must do this step
        // Here we revert back the original string to its previous state
        swap(str[index], str[i]); // Backtracking concept
        // This is imortant because the string is passed to the funciton by referece
    }
}

int main()
{
    string str = "abc";
    stringPermutations(str);
    cout << endl;
    stringPermutationsBacktracking(str);
    return 0;
}