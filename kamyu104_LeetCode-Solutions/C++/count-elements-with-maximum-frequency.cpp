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
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> cnt;
        int mx = 0;
        for (const auto& x : nums) {
            mx = max(mx, ++cnt[x]);
        }
        int result = 0;
        for (const auto& [_, v] : cnt) {
            if (v == mx) {
                result += v;
            }
        }
        return result;
    }
};
