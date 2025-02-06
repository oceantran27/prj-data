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

// greedy, sort
class Solution {
public:
    int minimumKeypresses(string s) {
        vector<int> cnt(26);
        for (const auto& c : s) {
            ++cnt[c - 'a'];
        }
        sort(rbegin(cnt), rend(cnt));
        int result = 0;
        for (int i = 0; i < size(cnt); ++i) {
            result += cnt[i] * (i / 9 + 1);
        }
        return result;
    }
};
