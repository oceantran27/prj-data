#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn + qlogn)
// Space: O(1)

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(begin(items), end(items));
        for (int i = 0; i + 1 < size(items); ++i) {
            items[i + 1][1] = max(items[i + 1][1], items[i][1]);
        }
        vector<int> result;
        for (const auto& q : queries) {
            int i = upper_bound(cbegin(items), cend(items), vector<int>({q + 1, 0})) - cbegin(items);
            result.emplace_back(i ? items[i - 1][1] : 0);
        }
        return result;
    }
};
