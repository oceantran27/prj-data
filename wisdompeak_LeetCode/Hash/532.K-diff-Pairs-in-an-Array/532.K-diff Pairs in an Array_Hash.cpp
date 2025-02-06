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
    int findPairs(vector<int>& nums, int k) 
    {
        if (k<0) return 0;
        unordered_set<int>Set;
        unordered_set<int>minSet;
        
        for (int i=0; i<nums.size(); i++)
        {
            if (Set.find(nums[i]-k)!=Set.end())
                minSet.insert(nums[i]-k);
            if (Set.find(nums[i]+k)!=Set.end())
                minSet.insert(nums[i]);
            Set.insert(nums[i]);
        }
        
        return minSet.size();        
    }
};
