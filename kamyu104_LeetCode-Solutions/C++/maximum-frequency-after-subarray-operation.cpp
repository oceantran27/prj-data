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

// freq table, dp
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int result = 0;
        unordered_map<int, int> cnt;
        for (const auto& x : nums) {
            cnt[x] = max(cnt[x], cnt[k]) + 1;
            result = max(result + (x == k ? 1 : 0), cnt[x]);
        }
        return result;
    }
};
