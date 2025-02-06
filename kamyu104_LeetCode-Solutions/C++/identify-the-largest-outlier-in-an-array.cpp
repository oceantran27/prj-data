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

// freq table
class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int result = numeric_limits<int>::min();
        const int total = accumulate(cbegin(nums), cend(nums), 0);
        unordered_map<int, int> cnt;
        for (const auto& x : nums) {
            ++cnt[x];
        }
        for (const auto& x : nums) {
            if ((total - x) % 2) {
                continue;
            }
            const int target = (total - x) / 2;
            if (cnt.count(target) && cnt[target] - (target == x ? 1 : 0) >= 1) {
                result = max(result, x);
            }
        }
        return result;
    }
};
