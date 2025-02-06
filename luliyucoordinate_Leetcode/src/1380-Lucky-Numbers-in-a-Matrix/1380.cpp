#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    vector<int> luckyNumbers (vector<vector<int>>& A) 
    {
        int r = A.size(), c = A[0].size();
        vector<int> res;
        
        for (int i = 0; i < r; i++)
        {
            pair<int, int> t = {INT_MAX, -1};
            for (int j = 0; j < c; j++) 
                if (A[i][j] < t.first) t = {A[i][j], j};
            
            bool flag = false;
            for (int j = 0; j < r; j++)
            {
                if (A[j][t.second] > t.first) 
                {
                    flag = true; break;
                }
            }
            if (!flag) res.emplace_back(t.first);
        }
        return res;
    }
};