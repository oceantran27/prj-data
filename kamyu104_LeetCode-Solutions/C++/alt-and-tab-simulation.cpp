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

// hash table
class Solution {
public:
    vector<int> simulationResult(vector<int>& windows, vector<int>& queries) {
        vector<bool> lookup(size(windows));
        vector<int> result;
        for (int i = size(queries) - 1; i >= 0; --i) {
            if (lookup[queries[i]]) {
                continue;
            }
            lookup[queries[i]] = true;
            result.emplace_back(queries[i]);
        }
        for (const auto& x : windows) {
            if (lookup[x]) {
                continue;
            }
            result.emplace_back(x);
        }
        return result;
    }
};
