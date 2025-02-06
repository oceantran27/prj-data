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
    int maxAbsoluteSum(vector<int>& nums) 
    {
        int prefix_mx = 0, prefix_mn = 0;
        int prefix = 0;
        
        int ret = 0;
        for (int x: nums)
        {
            prefix += x;
            prefix_mx = max(prefix_mx, prefix);
            prefix_mn = min(prefix_mn, prefix);            
        }        
        return prefix_mx - prefix_mn;        
    }
};
