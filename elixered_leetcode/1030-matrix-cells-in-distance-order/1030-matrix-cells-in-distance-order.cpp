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
    
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> ans;
        vector<vector<vector<int>>> hm(210);
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                int k = abs(rCenter-i) + abs(cCenter-j);
                hm[k].push_back({i,j});
            }
        }
        for(int i=0; i<210; i++)
        {
            for(auto it:hm[i])
                ans.push_back(it);
        }
        return ans;
    }
};