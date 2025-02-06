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
    int singleNumber(vector<int>& nums) {
     
        int res;
        unordered_map<int,int> num_ctr;
        
        for(int i=0;i<nums.size();i++)
          num_ctr[nums[i]]++;
        
        for(int i=0;i<nums.size();i++)
        {
            if(num_ctr[nums[i]]==1)
            {
                res=nums[i];
                break;
            }
        }
        
        return res;
        
    }
};
