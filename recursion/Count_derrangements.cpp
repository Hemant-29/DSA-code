#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// Consider a given array, such as - [10,20,30,40,50] (here n=5)
// You have to find all the possible arrangements of the elements of the array.
// But you have to make sure to find all such arrangements in which:-
// no element is at its original place/index, thus no. of "derangements"

int derange(int n)
{
    // This fucntion finds the all possible no. of derangements of an array with n no. of elements

    // Base case
    if (n <= 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    // recursive condition
    return (n - 1) * (derange(n - 1) + derange(n - 2));

    // Explaination - Suppose (n = 4). The first element can sit at any place except its original index. That means (n-1) ways of placing 1st element.
    // For all these n-1 cases, the rest (n-1) places left on the array (except the first element) can go and derange in all possible manner. So, we get derange(n-1)
    // But here an important case is missing. Its possible that the element we are replacing the first element with has first element on its index. So no matter where we place it, its never going to arrange on its original index. Thus we put this element at index of first element(i.e- 0) and then derange other remaining elements. i.e- derange(n-2)
}

int main()
{
    cout << derange(5) << endl;
    return 0;
}