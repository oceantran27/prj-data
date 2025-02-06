#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// Author - Shadowpii

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
            if (mp.count(target - nums[i])) 
            {
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else 
                mp[nums[i]] = i;
        return ans;
    }
};