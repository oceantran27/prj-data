#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(m * nlogn)
// Space: O(1)

// array
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto& row : grid) {
            sort(begin(row), end(row));
        }
        int result = 0;
        for (int j = 0; j < size(grid[0]); ++j) {
            int mx = 0;
            for (int i = 0; i < size(grid); ++i) {
                mx = max(mx, grid[i][j]);
            }
            result += mx;
        }
        return result;
    }
};
