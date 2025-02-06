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
    bool canBeIncreasing(vector<int>& nums) 
    {
        vector<int>arr;
        for (auto x: nums)
        {
            auto iter = lower_bound(arr.begin(), arr.end(), x);
            if (iter!=arr.end())
                *iter = x;
            else
                arr.push_back(x);
        }
        return arr.size() >= nums.size()-1;
    }
};
