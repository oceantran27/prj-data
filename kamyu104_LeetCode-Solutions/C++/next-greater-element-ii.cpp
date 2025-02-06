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

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result(nums.size());
        stack<int> stk;
        for (int i = 2 * nums.size() - 1; i >= 0; --i) {
            while (!stk.empty() && stk.top() <= nums[i % nums.size()]) {
                stk.pop();
            }
            result[i % nums.size()] = stk.empty() ? -1 : stk.top();
            stk.emplace(nums[i % nums.size()]);
        }
        return result;
    }
};
