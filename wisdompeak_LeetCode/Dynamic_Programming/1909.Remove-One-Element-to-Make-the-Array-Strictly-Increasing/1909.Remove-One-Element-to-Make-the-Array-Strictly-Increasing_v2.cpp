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
        int max0 = INT_MIN, max1 = INT_MIN;

        for (auto x: nums)
        {
            int max0_tmp = max0, max1_tmp = max1;

            max0 = (x > max0_tmp) ? x : INT_MAX;

            max1 = max0_tmp;
            if (x > max1_tmp) 
                max1 = min(max1, x);

            if (max1==INT_MAX)
                return false;         
        }

        return true;
    }
};
