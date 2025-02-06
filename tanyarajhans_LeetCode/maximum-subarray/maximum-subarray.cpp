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
        int n=nums.size();
        int neg=0;
        int maxi=INT_MIN, maxsf=0;
        for(int i=0;i<n;i++){
            maxsf+=nums[i];
            //if(nums[i]<0)
            //    neg++;
            
            maxi=max(maxi,maxsf);
            if(maxsf<0){
                maxsf=0;
            }
        }
        return maxi;
    }
};