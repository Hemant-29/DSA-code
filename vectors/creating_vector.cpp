#include <iostream>
// Must include this header file to use vectors
#include <vector>

using namespace std;

void printVector(vector<int> arr, int n)
{ // Note the format👆 used here to input a vector in a function "vector<int> variable_name"
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Type this to create a vector callled "vec"
    vector<int> vec;
    // Since the length was not specified the inital length of this vector will be 0

    // You can assign the size(10 here) of the vector "vec2" at creation
    vector<int> vec2(10);
    // By default all these 10 elements will be assigned 0 value

    // You can also assign a defalut value for the elements of the array like this
    vector<int> vec3(5, 100);
    // So all the 5 elements of this vector will be 100

    printVector(vec, vec.size());
    printVector(vec2, vec2.size());
    printVector(vec3, vec3.size());
    // On calling a function, you dont need to specify the size of vector by yourself
    // It will automatically be determined by .size() method

    return 0;
}