#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 轮转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int idx = k % nums.size();
        vector<int> temp(nums);
        for (int i = 0; i < temp.size(); i++) {
            nums[idx] = temp[i];
            idx = (idx + 1) % temp.size();
        }
    }
};
// @lc code=end

