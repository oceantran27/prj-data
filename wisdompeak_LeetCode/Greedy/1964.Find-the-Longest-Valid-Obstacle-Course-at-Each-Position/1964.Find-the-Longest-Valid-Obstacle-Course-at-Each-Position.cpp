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
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) 
    {
        vector<int>a;
        vector<int>rets;
        for (auto x: obstacles)
        {
            if (a.empty() || a.back()<= x)
            {
                a.push_back(x);
                rets.push_back(a.size());
            }
            else
            {
                auto iter = upper_bound(a.begin(), a.end(), x);
                *iter = x;
                rets.push_back(iter - a.begin() + 1);
            }                
        }
        return rets;        
    }
};
