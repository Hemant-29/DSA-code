#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "Size of 1 Byte = 8 Bits\n"
         << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;

    cout << endl;

    cout << "Range of char: " << int(numeric_limits<char>::min()) << " to " << int(numeric_limits<char>::max()) << endl;
    cout << "Range of short: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "Range of int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "Range of unsigned int: " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << endl;
    cout << "Range of long: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "Range of long long: " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;
    cout << "Range of float: " << numeric_limits<float>::lowest() << " to " << numeric_limits<float>::max() << endl;
    cout << "Range of double: " << numeric_limits<double>::lowest() << " to " << numeric_limits<double>::max() << endl;
    cout << "Range of long double: " << numeric_limits<long double>::lowest() << " to " << numeric_limits<long double>::max() << endl;

    return 0;
}
