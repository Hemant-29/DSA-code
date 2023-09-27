#include <iostream>
#include <cstring>
using namespace std;

int checkPalindrome(char arr[], int length)
{
    // i and j are 2 opposite pointers on the string
    int i = 0;
    int j = length - 1;

    while (i <= j)
    {
        // as soon as some character from left side doesnot match character from right side
        // the function returns false
        if (arr[i] != arr[j])
            return false;
        i++;
        j--;
    }
    // if the function has not returned yet, this means the string is definitely palindrome
    return true;
}

int main()
{
    char input[50];
    cout << "enter your string : ";
    cin >> input;
    cout << checkPalindrome(input, strlen(input)) << endl;
    return 0;
}