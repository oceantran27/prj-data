#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(k)

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> stk;
        for (int i = 0; i < size(nums); ++i) {
            while (!empty(stk) && stk.back() > nums[i] &&
                   size(stk) + (size(nums) - i) > k) {
                stk.pop_back();
            }
            if (size(stk) < k) {
                stk.emplace_back(nums[i]);
            }
        }
        return stk;
    }
};
