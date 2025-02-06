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
    int findMaxK(vector<int>& nums) {
        unordered_set<int> lookup(cbegin(nums), cend(nums));
        int result = -1;
        for (const auto& x : lookup) {
            if (x > result && lookup.count(-x)) {
                result = x;
            }
        }
        return result;
    }
};
