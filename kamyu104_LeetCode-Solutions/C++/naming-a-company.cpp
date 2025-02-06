#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(26 * n * l)
// Space: O(n * l)

// hash table, math
class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        vector<unordered_set<string>> lookup(26);
        for (const auto& idea : ideas) {
            lookup[idea[0] - 'a'].emplace(idea.substr(1));
        }
        int64_t result = 0;
        for (int i = 0; i < 26; ++i) {
            for (int j = i + 1; j < 26; ++j) {
                int common = 0;
                for (const auto& x : lookup[i]) {
                    common += lookup[j].count(x);
                }
                result += (size(lookup[i]) - common) * (size(lookup[j]) - common);
            }
        }
        return result * 2;
    }
};
