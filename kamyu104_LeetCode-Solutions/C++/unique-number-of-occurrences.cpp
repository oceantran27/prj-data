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

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        for (const auto& a : arr) {
            ++count[a];
        }
        unordered_set<int> lookup;
        for (const auto& [k, v] : count) {
            if (lookup.count(v)) {
                return false;
            }
            lookup.emplace(v);
        }
        return true;
    }
};
