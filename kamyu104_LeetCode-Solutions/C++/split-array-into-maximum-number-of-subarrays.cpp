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

// greedy
class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int result = 0, curr = 0;
        for (const auto& x : nums) {
            curr = curr ? curr & x : x;
            if (!curr) {
                ++result;
            }
        }
        return max(result, 1);
    }
};
