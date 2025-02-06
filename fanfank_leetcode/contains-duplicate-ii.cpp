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
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        size_t nums_size = nums.size();
        unordered_map<int, size_t> nums_map;
        for (size_t i = 0; i < nums_size; ++i) {
            if (nums_map.find(nums[i]) != nums_map.end()
                    && (i - nums_map[nums[i]] <= k)) {
                return true;
            }
            nums_map[nums[i]] = i;
        }
        return false;
    } 
};
