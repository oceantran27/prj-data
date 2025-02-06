#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n + 24)
// Space: O(24)

// freq table
class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        int64_t result = 0;
        vector<int> cnt(24);
        for (const auto& x : hours) {
            result += cnt[((-x % 24) + 24) % 24];
            ++cnt[x % 24];
        }
        return result;
    }
};
