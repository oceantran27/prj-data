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
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) 
    {
        int m = rowSum.size();
        int n = colSum.size();
        auto ret = vector<vector<int>>(m, vector<int>(n));
        
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                int v = min(rowSum[i], colSum[j]);
                ret[i][j] = v;
                rowSum[i] -= v;
                colSum[j] -= v;                
            }
        }
        return ret;        
    }
};
