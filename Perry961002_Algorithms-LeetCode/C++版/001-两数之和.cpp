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
    /*
    *用哈希函数，复杂度为线性
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num;
        vector<int> rec;
        for (int i = 0; i < nums.size(); i++)
        {
            if (num.count(target - nums[i]))
            {
                rec.push_back(num[target - nums[i]]);
                rec.push_back(i);
            }
            num[nums[i]] = i;
        }
        return rec;
    }
};