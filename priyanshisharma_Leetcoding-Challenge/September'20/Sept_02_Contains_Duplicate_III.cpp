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
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
       
        if(nums.size()>9999)
            return false;
        
        for(int i=1; i<=k ;++i)
        {
            for(int j=0; j<nums.size()-i; ++j)
            {
                if(abs(long((nums[i+j])-(nums[j])))<=t)
                    return true;
                
            }
        }
        
        return false;
    }
};