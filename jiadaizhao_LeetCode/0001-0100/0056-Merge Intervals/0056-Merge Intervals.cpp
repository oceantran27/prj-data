#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        for (auto& i : intervals) {
            if (result.size() && result.back()[1] >= i[0]) {
                result.back()[1] = max(result.back()[1], i[1]);
            }
            else {
                result.push_back(i);
            }
        }

        return result;
    }
};
