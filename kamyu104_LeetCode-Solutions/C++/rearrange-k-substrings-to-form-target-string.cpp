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
    bool isPossibleToRearrange(string s, string t, int k) {
        unordered_map<string, int> cnt;
        for (int i = 0, l = size(s) / k; i < size(s); i += l) {
            ++cnt[s.substr(i, l)];
            --cnt[t.substr(i, l)];
        }
        return all_of(cbegin(cnt), cend(cnt), [](const auto& x) {
            return x.second == 0;
        });
    }
};
