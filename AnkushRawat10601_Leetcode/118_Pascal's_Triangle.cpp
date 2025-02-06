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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        
        for(int i=0;i<numRows;i++)
        {
            vector<int>v1;
            for(int j=0;j<=i;j++)
            {
                if((j==0)||(j==i))
                {
                    v1.push_back(1);
                }
                else
                {
                    int t=v[i-1][j-1]+v[i-1][j];
                    v1.push_back(t);
                }
            }
            v.push_back(v1);
        }
        return v;
    }
};