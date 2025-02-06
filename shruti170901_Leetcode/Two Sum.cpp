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
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u;
        vector<int> res {};

        for (int i=0; i<nums.size(); i++)
        {
            if (u.count(target - nums[i]) ==1)
                {
                    return {i, u[target-nums[i]]};
                }
            u[nums[i]] = i;
        }

        return res;
        
    }
};
