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
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int max = nums.size();
        for (int i = 0; i < max; i++) {
            if (nums[i]>=0) nums[i]--;
        }
        for (int i = 0; i < max; i++) {
            if (nums[i] < 0) continue;
            if (nums[i] == i) continue;
            int p = nums[i];
            while(p>=0 && p<max && nums[p] != p) {
                int tmp = nums[p];
                nums[p] = p;
                p = tmp;
            }
        }
        int pos = 0;
        for ( pos = 0; pos < max; pos++) {
            if (nums[pos] != pos) break;
        }

        return pos+1;
    }
};
// @lc code=end

