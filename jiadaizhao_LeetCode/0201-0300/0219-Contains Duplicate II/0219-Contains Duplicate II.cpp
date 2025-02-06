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
        unordered_map<int, int> table;
        for (int i = 0; i < nums.size(); ++i) {
            if (table.find(nums[i]) != table.end() && i - table[nums[i]] <= k) {
                return true;
            }
            else {
                table[nums[i]] = i;
            }
        }
        
        return false;
    }
};
