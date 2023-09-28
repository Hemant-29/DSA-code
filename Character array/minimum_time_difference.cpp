#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int convertToMinutes(string time)
{
    int answer;
    string hour, min;
    hour = time.substr(0, 2);
    min = time.substr(3, 2);
    int minutes = stoi(hour) * 60 + stoi(min);
    return minutes;
}

int findMinDifference(vector<string> &timePoints)
{
    vector<int> timePoints2;

    for (int i = 0; i < timePoints.size(); i++)
    {
        timePoints2.push_back(convertToMinutes(timePoints[i]));
    }

    sort(timePoints2.begin(), timePoints2.end());

    int min_difference = INT_MAX;
    for (int i = 0; i < timePoints2.size(); i++)
    {
        int diff = INT_MAX;
        // Finding difference between 2 adjacent time points
        if (i == timePoints2.size() - 1)
            diff = timePoints2[i] - timePoints2[0];
        else
            diff = timePoints2[i + 1] - timePoints2[i];

        // EDGE Case
        if (diff > 720)
            diff = 1440 - diff;
        if (min_difference > diff)
            min_difference = diff;
    }
    return min_difference;
}

int main()
{
    vector<string> input = {"00:10", "23:40"};
    cout << findMinDifference(input) << endl;
}