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
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> result(n, vector<int>(m));
        int start = m * n - k % (n * m);
        for (int i = start; i < start + n * m; ++i) {
            int row = i % (n * m) / m;
            int col = i % (n * m) % m;
            result[(i - start) / m][(i - start) % m] = grid[row][col];
        }
        
        return result;
    }
};
