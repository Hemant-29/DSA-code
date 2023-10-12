#include <iostream>
using namespace std;

int main()
{
    char ch[] = "hello guys";
    char *ptr = &ch[0]; // Note:- "&ch[0]" and "ch" are the same thing

    cout << ptr << endl;
    // Note that :- for pointers pointing to charcter array,
    // (cout<<ptr) doesn't print the address stored in the pointer,
    // but it prints the whole character array
    return 0;
}