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
    int findTargetSumWays(vector<int>& nums, int S) 
    {
        unordered_map<int,int>Map;
        Map[0] = 1;
        
        for (auto x: nums)
        {
            auto Map_temp = Map;
            Map.clear();
            for (auto a: Map_temp)
            {
                Map[a.first+x] += a.second;
                Map[a.first-x] += a.second;
            }
        }
        return Map[S];
    }
};
