#include <iostream>
using namespace std;

int main()
{
    // creating a string
    string str = "computer";

    // printing the string
    cout << str << endl;

    // printing the characters
    cout << "charcter at index 2: " << str[2] << endl;

    // to find length of string
    cout << "Length: " << str.length() << endl;

    // to check whether a string is empty
    cout << "is empty: " << str.empty() << endl;

    // to print front ans back character
    cout << "front element: " << str.front() << endl;
    cout << "back element: " << str.back() << endl;

    // Appending elements to the string
    cout << "after appending 's' to the string: " << str.append("s") << endl;

    // removing the last element
    str.pop_back();
    cout << "After removing the last element: " << str << endl;

    // finding a string in another string
    string str2 = "put";
    cout << "'put' found at index: " << str.find(str2) << endl;

    // to erase some part of the string

    cout << "after erasing 3 elements from index 3: " << str.erase(3, 3) << endl;

    // insert a string in another string
    string put = "put";
    str.insert(3, put);
    cout << "after inserting 'put' at index 3: " << str << endl;

    // compare 2 strings using compare
    if (str.compare("computer") == 0)
        cout << "Both the strings are same" << endl;

    // To extract a substring from a given string
    string intro = "My name is Hemant Bagaria";
    cout << intro.substr(11, 6) << endl;

    cout << str.back() << endl;
}