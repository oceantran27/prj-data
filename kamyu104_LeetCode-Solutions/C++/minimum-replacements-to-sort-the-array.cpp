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

// greedy, math
class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        const auto& ceil_divide = [](int a, int b) {
            return (a + b - 1) / b;
        };

        int64_t result = 0;
        int curr = nums.back();
        for (int i = size(nums) - 1; i >= 0; --i) {
            const int cnt = ceil_divide(nums[i], curr);
            result += cnt -1;
            curr = nums[i] / cnt;
        }
        return result;
    }
};
