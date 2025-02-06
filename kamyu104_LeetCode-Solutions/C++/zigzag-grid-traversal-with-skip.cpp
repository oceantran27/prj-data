#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n * m)
// Space: O(1)

// array
class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> result;
        for (int i = 0; i < size(grid); ++i) {
            if (i % 2 == 0) {
                for (int j = 0; j < size(grid[0]); j += 2) {
                    result.emplace_back(grid[i][j]);
                }
            } else {
                for (int j = (size(grid[0]) - 1) - size(grid[0]) % 2; j >= 0; j -= 2) {
                    result.emplace_back(grid[i][j]);
                }
            }
        }
        return result;
    }
};
