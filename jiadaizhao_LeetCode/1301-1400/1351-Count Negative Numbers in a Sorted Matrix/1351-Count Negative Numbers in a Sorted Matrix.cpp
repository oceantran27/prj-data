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
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int row = m - 1, col = 0, count = 0;
        while (row >= 0 && col < n) {
            if (grid[row][col] < 0) {
                count += n - col;
                --row;
            }
            else {
                ++col;
            }
        }
        
        return count;
    }
};
