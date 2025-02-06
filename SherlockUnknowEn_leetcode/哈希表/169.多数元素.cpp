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
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mm;
        int n = nums.size();
        for (int c : nums) {
            mm[c]++;
            if (mm[c] > n / 2)
                return c;
        }
        return -1;
    }
};
// @lc code=end

