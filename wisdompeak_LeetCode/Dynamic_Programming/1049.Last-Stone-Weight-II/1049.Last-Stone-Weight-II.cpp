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
    int lastStoneWeightII(vector<int>& stones) 
    {
        unordered_set<int>Set({0});
        
        for (auto x:stones)
        {
            auto Set_temp = Set;
            Set.clear();
            for (auto s:Set_temp)
            {
                Set.insert(s+x);
                Set.insert(s-x);
            } 
        }
        
        int result = INT_MAX;
        for (auto x:Set)
        {
            if (x>=0 && result>x)
                result =x;
        }
        return result;        
    }
};
