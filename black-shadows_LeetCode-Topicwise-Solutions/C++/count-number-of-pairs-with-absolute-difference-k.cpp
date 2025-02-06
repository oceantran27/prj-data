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
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> lookup;
        int result = 0;
        for (const auto& x : nums) {
            if (lookup.count(x - k)) {
                result += lookup[x - k];
            }
            if (lookup.count(x + k)) {
                result += lookup[x + k];
            }
            ++lookup[x];
        }
        return result;
    }
};
