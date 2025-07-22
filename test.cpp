#include <iostream>
using namespace std;
int main() {
    int* ptr;
    char st[] = {'a', 'b', 'c', 'd', '\0'};
    int arr[] = {1, 2, 3, 4, 5, 6};
    int i = 0;

    cout << arr[i] << endl;
    cout << i[arr] << endl;

    cout << st[i] << endl;
    cout << i[st] << endl;
}