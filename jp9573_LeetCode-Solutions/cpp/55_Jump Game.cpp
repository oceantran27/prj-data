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
    bool canJump(vector<int>& nums) {
        
        if(nums.size()<2)
            return true;
        int i,j,k = nums[0];
        if(k==0) return false;
        for(i=1;i<nums.size()-1;i++)
        {
            k--;
            k = max(k,nums[i]);
            if(k==0) return false;
            
        }
        return true;
    }
};
