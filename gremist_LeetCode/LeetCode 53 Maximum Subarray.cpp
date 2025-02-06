#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 53 Maximum Subarray.cpp

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums.front(), dpn = ans;   // dpn表示末尾为第n个元素的最大子序和
        for (int i = 1; i < nums.size(); i++) {
            dpn = max(dpn + nums[i], nums[i]);
            ans = max(ans, dpn);
        }
        return ans;
    }
};