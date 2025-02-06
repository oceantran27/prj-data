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
// Space: O(k)

// constructive algorithms
class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        int l = 0;
        unordered_set<int> lookup;
        for (const auto& x : rolls) {
            lookup.emplace(x);
            if (size(lookup) != k) {
                continue;
            }
            lookup.clear();
            ++l;
        }
        return l + 1;
    }
};
