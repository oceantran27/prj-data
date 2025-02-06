#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end());
        int far = INT_MIN;
        int count = 0;
        for (auto interval: intervals)
        {
            if (interval[0] >= far)
            {
                far = interval[1];
                count++;
            }
            else if (interval[1] < far)
            {
                far = interval[1];
            }
        }
        return intervals.size()-count;
    }
};
