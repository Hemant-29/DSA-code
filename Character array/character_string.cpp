#include <iostream>
using namespace std;

int main()
{
    char *string = new char;
    *string = 'a';
    *(string + 1) = 'b';
    *(string + 2) = 'c';
    *(string + 3) = '\0';

    for (int i = 0; i < 10; i++)
    {
        if (*(string + i) != '\0')
        {
            cout << *(string + i);
        }
        else
        {
            cout << endl;
            break;
        }
    }

    return 0;
}