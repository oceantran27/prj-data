#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 90 Subsets II.cpp

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        sort(nums.begin(), nums.end());
        backtrack(ans, cur, nums, 0);
        return ans;
    }
    
private:
    void backtrack(vector<vector<int>> &ans, vector<int> &cur, vector<int> &nums, int ni) {
        ans.push_back(cur);
        for (int i = ni; i < nums.size(); i++) {
            if (i == ni || nums[i] != nums[i - 1]) {
                cur.push_back(nums[i]);
                backtrack(ans, cur, nums, i + 1);
                cur.pop_back();
            }
        }
    }
};