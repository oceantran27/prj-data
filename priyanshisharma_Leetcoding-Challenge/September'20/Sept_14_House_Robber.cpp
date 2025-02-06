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
    int rob(vector<int>& nums) {
    
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        
        int res[nums.size()];
        
        res[0]=nums[0];
        res[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<nums.size();i++)
        {
            res[i]=max(res[i-1],nums[i]+res[i-2]);
        }
        
        return res[nums.size()-1];
    }
};
