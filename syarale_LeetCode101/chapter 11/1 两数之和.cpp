#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// 1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        unordered_map<int, int> hash;
        vector<int> res;
        
        
        if (nums.empty() || len == 1) {
            return res;
        }
        
        for (int i = 0; i < len; i++) {
            unordered_map<int, int>::iterator pos = hash.find(target - nums[i]);
            if (pos != hash.end()) {
                res.push_back(pos->second);
                res.push_back(i);
                
                // only one valid solution
                break;
            }
            
            hash[nums[i]] = i;
        }
        
        return res;
    }
}; 
