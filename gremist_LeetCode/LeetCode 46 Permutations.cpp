#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 46 Permutations.cpp

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        backtrack(ans, nums, 0);
        return ans;
    }

private:
    void backtrack(vector<vector<int>> &ans, vector<int> &nums, int ni) {
        if (ni >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = ni; i < nums.size(); i++) {
            swap(nums[ni], nums[i]);
            backtrack(ans, nums, ni + 1);
            swap(nums[ni], nums[i]);
        }
    }
};