#include <iostream>
using namespace std;

// A reference variable is a variable that "Refers to Address of another Variable"
int main()
{
    // suppose "original" here is a variable
    int original = 15;

    // memory address of original is:
    cout << "Address of original: " << &original << endl;
    cout << "Value of original: " << original << endl;
    cout << endl;

    // Then "reference" here is another variable but it refers to the memory address of "original"
    int &reference = original;

    // memory address of "reference" is:
    cout << "Address of reference: " << &reference << endl;
    cout << "Value of reference: " << reference << endl;
    cout << endl;

    // so if "reference" variable is updated then the "original" variable gets updated automatically
    reference++;
    cout << "original after updating reference: " << original << endl;
    // Since they both points towards a same memory address

    return 0;
}
