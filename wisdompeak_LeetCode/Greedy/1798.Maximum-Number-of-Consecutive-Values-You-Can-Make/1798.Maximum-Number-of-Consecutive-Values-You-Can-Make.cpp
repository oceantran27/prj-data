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
    int getMaximumConsecutive(vector<int>& coins) 
    {
        sort(coins.begin(), coins.end());
        
        int curMax = 0;
        
        for (auto c: coins)
        {
            if (c>curMax+1) break;
            curMax+=c;
            
        }
        return curMax+1;
        
    }
};
