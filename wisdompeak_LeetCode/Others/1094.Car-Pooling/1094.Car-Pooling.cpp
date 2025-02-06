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
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        vector<pair<int,int>>diff;
        for (auto trip: trips)
        {
            diff.push_back({trip[1],trip[0]});
            diff.push_back({trip[2],-trip[0]});
        }
        sort(diff.begin(), diff.end());
        int total = 0;
        for (auto d: diff)
        {
            total += d.second;
            if (total > capacity)
                return false;
        }
        return true;
    }
};
