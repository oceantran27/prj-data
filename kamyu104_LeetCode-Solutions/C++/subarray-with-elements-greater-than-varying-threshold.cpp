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
// Space: O(n)

// mono stack
class Solution {
public:
    int validSubarraySize(vector<int>& nums, int threshold) {
        vector<int> stk = {-1};
        for (int i = 0; i <= size(nums); ++i) {
            while (stk.back() != -1 && (i == size(nums) || nums[stk.back()] >= nums[i])) {
                int j = stk.back(); stk.pop_back();
                if (nums[j] * ((i - 1) - stk.back()) > threshold) {
                    return (i - 1) - stk.back();
                }
            }
            stk.emplace_back(i);
        }
        return -1;
    }
};
