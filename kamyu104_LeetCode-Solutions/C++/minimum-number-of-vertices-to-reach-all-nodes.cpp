#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(e)
// Space: O(n)

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> result;
        unordered_set<int> lookup;
        for (const auto& e: edges) {
            lookup.emplace(e[1]);
        }
        for (int i = 0; i < n; ++i) {
            if (!lookup.count(i)) {
                result.emplace_back(i);
            }
        }
        return result;
    }
};
