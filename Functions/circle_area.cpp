#include <iostream>
using namespace std;

#define _USE_MATH_DEFINES
#include <math.h>

float circleArea(int radius)
{
    float area = M_PI * radius * radius;
    return area;
}
int main()
{
    cout << circleArea(4) << endl;
    return 0;
}