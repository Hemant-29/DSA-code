#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int element)
{
    bool present = false;
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            present = true;
            break;
        }
    }
    return present;
}

int main()
{
    int arr[] = {12, 54, 4, 5, 8, 13, 17, 24};
    int element = 0;
    cout << linearSearch(arr, 8, element) << endl;
    return 0;
}