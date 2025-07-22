#include <iostream>
using namespace std;

int commonElement(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 || j < n2 || k < n3)
    {
        // cout << arr1[i] << " " << arr2[j] << " " << arr3[k] << endl;
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << endl;
            i++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }
}

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6, n2 = 5, n3 = 8;
    commonElement(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}