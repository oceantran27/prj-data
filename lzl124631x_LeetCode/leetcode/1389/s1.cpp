#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/create-target-array-in-the-given-order/
// Author: github.com/lzl124631x
// Time: O(N^2)
// Space: O(1)
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        int N = nums.size();
        for (int i = 0; i < N; ++i) {
            ans.insert(ans.begin() + index[i], nums[i]);
        }
        return ans;
    }
};