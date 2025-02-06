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
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        for(auto& row:accounts)
        {
            int temp = 0;
            for(auto& col:row)
            {
                temp += col;
            }
            maxi = max(maxi,temp);
        }
        return maxi;
    }
};