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

// mono stack, combinatorics
class Solution {
public:
    long long numberOfSubarrays(vector<int>& nums) {
        int64_t result = 0;
        vector<pair<int, int>> stk;
        for (const auto& x : nums) {
            while (!empty(stk) && stk.back().first < x) {
                stk.pop_back();
            }
            if (empty(stk) || stk.back().first != x) {
                stk.emplace_back(x, 0);
            }
            result += ++stk.back().second;
        }
        return result;
    }
};
