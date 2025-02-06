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
        vector<vector<int>> res;
        for (auto r = 1; r <= numRows; ++r)
        {
            vector<int> ans(r, 1);
            for (auto i = 1; i < r - 1; ++i)
            {
                vector<int> previous = res[res.size() - 1];
                ans[i] = previous[i - 1] + previous[i];
            }
            
            res.push_back(ans);
        }
        
        return res;
    }
};