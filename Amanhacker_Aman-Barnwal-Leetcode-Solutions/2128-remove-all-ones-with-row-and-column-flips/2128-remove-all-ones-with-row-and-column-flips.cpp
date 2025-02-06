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
    
    bool removeOnes(vector<vector<int>>& grid) {
    
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] ^ grid[i][0] ^ grid[0][j] ^ grid[0][0])                       return false;
            }
        }
        
        return true;
    }
    
};