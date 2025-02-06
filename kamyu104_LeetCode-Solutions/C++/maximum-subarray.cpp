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
        int result = numeric_limits<int>::min();
        int curr = numeric_limits<int>::min();
        for (const auto &x : nums) {
            curr = (curr == numeric_limits<int>::min()) ? x : max(curr + x, x);
            result = max(result, curr);
        }
        return result;
    }
};
