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
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int,int>count;
        int j = 0;
        int ret = 0;
        for (int i=0; i<n; i++)
        {
            while (j<n && count[nums[j]]+1<=k)
            {
                count[nums[j]]+=1;
                j++;
            }
            ret = max(ret, j-i);
            
            count[nums[i]]--;
            if (count[nums[i]]==0)
                count.erase(nums[i]);            
        }
        
        return ret;
        
    }
};
