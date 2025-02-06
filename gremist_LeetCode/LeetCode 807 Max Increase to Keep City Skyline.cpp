#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 807 Max Increase to Keep City Skyline.cpp

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> h(n), v(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                h[i] = max(h[i], grid[i][j]);
                v[j] = max(v[j], grid[i][j]);
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans += min(h[i], v[j]) - grid[i][j];
            }
        }
        return ans;
    }
};