#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logr)
// Space: O(1)

// hash table, bit manipulations
class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int> lookup(cbegin(nums), cend(nums));
        int base = 1;
        for (; lookup.count(base); base <<= 1);
        return base;
    }
};
