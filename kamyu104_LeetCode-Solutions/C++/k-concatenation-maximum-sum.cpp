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
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        static const int MOD = 1e9 + 7;
        if (k == 1) {
            return max(maxSubKArray(arr, 1), 0) % MOD;
        }
        return (max(maxSubKArray(arr, 2), 0) +
                (k - 2) * max(accumulate(arr.cbegin(), arr.cend(), 0ll), 0ll)) % MOD;
    }

private:
    int maxSubKArray(const vector<int>& nums, int k) {
        int result = numeric_limits<int>::min();
        int curr = numeric_limits<int>::min();
        for (int i = 0; i < k; ++i) {
            for (const auto& x : nums) {
                curr = (curr == numeric_limits<int>::min()) ? x : max(curr + x, x);
                result = max(result, curr);
            }
        }
        return result;
    }
};
