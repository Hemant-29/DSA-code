#include <iostream>
using namespace std;

int addNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int addEvenNumber(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i + 2)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << addNumber(5) << endl;
    cout << addEvenNumber(10) << endl;
    return 0;
}