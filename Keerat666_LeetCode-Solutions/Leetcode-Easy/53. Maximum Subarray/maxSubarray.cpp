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
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int ans=INT_MIN, n= nums.size();
        int left=0,right=0,leftans;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
            if(sum>ans){
                ans=sum;
                leftans=left;
                right=i;
            }
            if(sum<0)
            {
                sum=0;
                left=i+1;
            }
            
        }
        return ans;
    }
};