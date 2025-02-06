#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogr), r = max(nums)
// Space: O(1)

// greedy
class Solution {
public:
    int minimumSplits(vector<int>& nums) {
        int result = 1, g = 0;
        for (const auto& x : nums) {
            g = gcd(g, x);
            if (g == 1) {
                g = x;
                ++result;
            }
        }
        return result;
    }
};
