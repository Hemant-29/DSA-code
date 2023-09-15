#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> arr, int n)
{ // Prints the vector
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Whenever you have a vector filled upto its full capacity,
// its maximum capicity DOUBLES automatically

int main()
{
    vector<int> vec1;

    // To add elements to a vector, use PUSH_BACK
    vec1.push_back(2);
    vec1.push_back(4);
    vec1.push_back(0);
    vec1.push_back(9);
    printVector(vec1, vec1.size());

    // To delete the last element from vector, use POP_BACK
    vec1.pop_back();

    // you can access the elements of a vector just like an array
    cout << "First element : " << vec1[0] << endl;

    // Note How you didn't specified the size of vector anywhere
    // but we are still able to add any amount of elements to it
    // Thats because an array is DYNAMIC DATA STRUCTURE

    printVector(vec1, vec1.size());
    return 0;
}