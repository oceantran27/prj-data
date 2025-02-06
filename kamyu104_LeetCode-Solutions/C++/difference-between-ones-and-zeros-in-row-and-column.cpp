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
// Space: O(m + n)

// array
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> rows(size(grid)), cols(size(grid[0]));
        for (int i = 0; i < size(grid); ++i) {
            for (int j = 0; j < size(grid[0]); ++j) {
                rows[i] += grid[i][j];
                cols[j] += grid[i][j];
            }
        }
        vector<vector<int>> result(size(grid), vector<int>(size(grid[0])));
        for (int i = 0; i < size(grid); ++i) {
            for (int j = 0; j < size(grid[0]); ++j) {
                result[i][j] = rows[i] + cols[j] - (size(grid) - rows[i]) - (size(grid[0]) - cols[j]);
            }
        }
        return result;
    }
};
