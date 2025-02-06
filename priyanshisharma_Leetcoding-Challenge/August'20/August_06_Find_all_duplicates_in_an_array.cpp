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
    vector<int> findDuplicates(vector<int>& nums) {
        
        
        vector<int> ret;
        
        for (int i=0; i<nums.size();i++) 
        {
            int pos = abs(nums[i])-1;
            
            if(nums[pos]<0) 
                ret.push_back(pos+1);
            else 
                nums[pos]*=-1;
        }
        
        return ret;
        
    }
};
