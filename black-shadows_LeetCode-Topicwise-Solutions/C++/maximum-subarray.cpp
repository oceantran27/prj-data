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
// Space: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        const auto& max_num = *max_element(nums.cbegin(), nums.cend());
        if (max_num < 0) {
            return max_num;
        }
        int global_max = 0, local_max = 0;
        for (const auto &x : nums) {
           local_max = std::max(0, local_max + x);
           global_max = std::max(global_max, local_max);
        }
        return global_max;
    }
};
