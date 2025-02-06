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
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) {
            return 0;
        }
        unordered_set<int> result, lookup;
        for (const auto& num : nums) {
            if (lookup.count(num - k)) {
                result.emplace(num - k);
            }
            if (lookup.count(num + k)) {
                result.emplace(num);
            }
            lookup.emplace(num);
        }
        return result.size();
    }
};
