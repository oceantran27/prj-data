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
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> cnt;
        int mx = 0, result = -1;
        for (const auto& x : nums) {
            if (x % 2) {
                continue;
            }
            ++cnt[x];
            if (mx == 0 || mx < cnt[x] || (mx == cnt[x] && x < result)) {
                mx = cnt[x];
                result = x;
            }
        }
        return result;
    }
};
