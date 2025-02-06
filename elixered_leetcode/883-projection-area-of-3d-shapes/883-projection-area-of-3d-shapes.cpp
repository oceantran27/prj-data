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
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid.size();
        for(int i=0; i<m; i++)
        {
            int mx = 0;
            for(int j=0; j<n; j++)
            {
                mx = max(grid[i][j],mx);
                if(grid[i][j]) ans++;
            }
            ans += mx;
        }
        for(int j=0; j<n; j++)
        {
            int mx = 0;
            for(int i=0; i<m; i++)
            {
                mx = max(grid[i][j],mx);
            }
            ans += mx;
        }
        return ans;
    }
};