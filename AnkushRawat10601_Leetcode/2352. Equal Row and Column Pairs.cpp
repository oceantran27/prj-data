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
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            vector<int> T;
            for (int j = 0; j < grid.size(); j++) {
                T.push_back(grid[j][i]);
            }
            ans += count(begin(grid), end(grid), T);
        }
        return ans;
    }
};