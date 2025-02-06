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

// freq table, constructive algorithms
class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for (const auto& x : nums) {
            ++cnt[x];
        }
        int mx = 0;
        for (const auto& [_, v] : cnt) {
            mx = max(mx, v);
        }
        return mx > (size(nums) - mx) ? mx - (size(nums) - mx) : size(nums) % 2;
    }
};
