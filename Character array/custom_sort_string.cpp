#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>
using namespace std;

string order_global;

bool customComp(char a, char b)
{
    return order_global.find(a) < order_global.find(b);
}

string customSortString(string order, string s)
{
    order_global = order;
    sort(s.begin(), s.end(), customComp);
    return s;
}

int main()
{
    cout << customSortString("cba", "abcd") << endl;
    return 0;
}