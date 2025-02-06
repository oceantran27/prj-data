#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(m * n)
// Space: O(1)

// array
class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        for (int j = 0; j < size(grid[0]); ++j) {
            for (int i = 0; i + 1 < size(grid); ++i) {
                if (grid[i][j] != grid[i + 1][j]) {
                    return false;
                }
            }
            if (j + 1 < size(grid[0]) && grid[0][j] == grid[0][j + 1]) {
                return false;
            }
        }
        return true;
    }
};
