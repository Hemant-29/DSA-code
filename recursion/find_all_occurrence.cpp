#include <iostream>
#include <vector>
using namespace std;

vector<int> findOccurrence(int *arr, int size, int index, int element, vector<int> output = {})
{
    // Base case
    if (index >= size)
        return output;

    // Processing
    if (arr[index] == element)
        output.push_back(index);

    // Recursive relation
    return findOccurrence(arr, size, index + 1, 10, output);
}

int main()
{
    int arr[] = {10, 1, 10, 18, 22, 20, 10};
    int n = 7;
    vector<int> occurrences = findOccurrence(arr, n, 0, 10);

    for (int i : occurrences)
        cout << i << "  ";
    return 0;
}