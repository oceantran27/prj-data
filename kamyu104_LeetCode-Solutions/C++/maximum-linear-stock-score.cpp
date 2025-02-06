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

// math, freq table
class Solution {
public:
    long long maxScore(vector<int>& prices) {
        unordered_map<int, int64_t> cnt;
        for (int i = 0; i < size(prices); ++i) {
            cnt[prices[i] - i] += prices[i];
        }
        return max_element(cbegin(cnt), cend(cnt), [](const auto& a, const auto&b) {
            return a.second < b.second;
        })->second;
    }
};
