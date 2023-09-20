#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;

int squareRoot(int element)
{
    int n = element;
    vector<int> search_space(n);

    // Apply binarySearch by taking target -> (current_element square is equal to input element)

    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    { // Square of the current element
        // cout << start << " " << mid << " " << end << endl;
        long int square_current = mid * mid;

        if (square_current == element)
            return mid;
        else if (square_current > element)
        {
            end = mid - 1;
        }
        else if (square_current < element)
        {
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

double squareRootDecimal(int element, int precision = 3)
{
    // You can set the precision of the decimal number using this precision parameter
    int n = element;
    vector<int> search_space(n);

    // Apply binarySearch by taking target -> (current_element square is equal to input element)

    double start = 0;
    double end = n;
    double mid = start + (end - start) / 2;
    double ans = -1;

    while (start <= end)
    { // Square of the current element
        // cout << start << " " << mid << " " << end << endl;
        double square_current = mid * mid;

        if (square_current == element)
            return mid;

        else if (square_current > element)
        {
            end = mid - pow(10, -1 * (precision + 1));
        }
        else if (square_current < element)
        {
            ans = mid;
            start = mid + pow(10, -1 * (precision + 1));
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    cout << squareRootDecimal(21, 4) << endl;
    return 0;
}