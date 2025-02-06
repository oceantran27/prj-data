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

// freq table, greedy
class Solution {
public:
    int minOperations(vector<int>& nums) {
        const auto& ceil_divide = [](int a, int b) {
            return (a + b - 1) / b;
        };

        unordered_map<int, int> cnt;
        for (const auto& x : nums) {
            ++cnt[x];
        }
        return all_of(cbegin(cnt), cend(cnt), [](const auto& x) {
            return x.second >= 2;
        }) ? accumulate(cbegin(cnt), cend(cnt), 0, [&](const auto& accu, const auto& x) {
            return accu + ceil_divide(x.second, 3);
        }) : -1;
    }
};
