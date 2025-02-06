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
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        vector<int> row(n,0),col(n,0);
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                row[i] = max(row[i],grid[i][j]);
                col[j] = max(col[j],grid[i][j]);
            }
        }
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                ans += min(row[i],col[j]) - grid[i][j];
            }
        }
        return ans;
    }
};