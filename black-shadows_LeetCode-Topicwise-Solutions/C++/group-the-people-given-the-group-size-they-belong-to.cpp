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
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < groupSizes.size(); ++i) {
            groups[groupSizes[i]].emplace_back(i);
            if (groups[groupSizes[i]].size() == groupSizes[i]) {
                result.emplace_back(move(groups[groupSizes[i]]));
            }
        }
        return result;
    }
};
