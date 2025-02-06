#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n^2)
// Space: O(1)

// array
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        for (int i = 0; i < size(grid); ++i) {
            for (int j = 0; j < size(grid[0]); ++j) {
                if ((i - j == 0 || i + j == size(grid) - 1) != (grid[i][j] != 0)) {
                    return false;
                }
            }
        }
        return true;
    }
};
