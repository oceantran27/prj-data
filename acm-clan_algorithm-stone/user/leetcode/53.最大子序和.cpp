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
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int f[n];
        f[0] = nums[0];
        int m = f[0];
        for(int i=1; i<n; i++){
            f[i] = nums[i];
            // 是否需要加上前一个值
            if(f[i-1] > 0){
                f[i] = f[i-1] + nums[i];
            }
            // 记录最大值
            m = max(f[i], m);
        }
        return m;
    }
};
// @lc code=end

