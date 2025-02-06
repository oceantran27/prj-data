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
// Space: O(1)

class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        vector<int> count(2);
        for (const auto& p : chips) {
            ++count[p % 2];
        }
        return min(count[0], count[1]);
    }
};
