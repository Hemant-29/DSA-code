#include <cstring>
#include <iostream>
#include <string>
using namespace std;

void toLower(string &str)
{
    int n = str.size();
    int i = 0;
    while (i < n)
    {
        if ((64 < str[i]) && (str[i] < 91))
        {
            str[i] = (char)(str[i] + 32);
            i++;
        }

        else if ((96 < str[i]) && (str[i] < 123))
        {
            i++;
        }

        else if ((47 < str[i]) && (str[i] < 58))
        {
            i++;
        }
        else
        {
            str.erase(i, 1);
            n--;
        }
    }
    cout << str << endl;
}

int main()
{
    string str = "Hello, my name is Hemant bagaria!";
    string num = "15";
    int integer = stoi(num);
    toLower(str);
    return 0;
}