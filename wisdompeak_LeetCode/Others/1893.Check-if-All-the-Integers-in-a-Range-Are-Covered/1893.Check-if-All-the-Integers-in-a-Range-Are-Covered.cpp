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
    bool isCovered(vector<vector<int>>& ranges, int left, int right) 
    {
        vector<int>diff(52);
        for (auto range:ranges)
        {
            diff[range[0]]+=1;
            diff[range[1]+1]+=-1;
        }
        
        int sum = 0;
        for (int i=1; i<=50; i++)
        {
            sum += diff[i];
            if (i>=left && i<=right && sum==0)
                return false;                
        }
        return true;
    }
};
