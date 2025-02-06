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
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> lookup;
        for (const auto& x : nums) {
            if (x) {
                lookup.emplace(x);
            }
        }
        return size(lookup);
    }
};
