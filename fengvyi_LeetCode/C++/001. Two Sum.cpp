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
        unordered_map<int, int>m;
        for(int i = 0; i < nums.size(); i++){
            if(m.count(target - nums[i])) return {m[target - nums[i]], i};
            m[nums[i]] = i;
        }
    }
};
