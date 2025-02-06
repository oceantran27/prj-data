#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(n)

// hash table, sort
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        unordered_set<int> lookup(cbegin(nums), cend(nums));
        for (int i = 0; i < size(moveFrom); ++i) {
            lookup.erase(moveFrom[i]);
            lookup.emplace(moveTo[i]);
        }
        vector<int> result(cbegin(lookup), cend(lookup));
        sort(begin(result), end(result));
        return result;
    }
};
