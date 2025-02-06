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
    vector<int> twoSum(vector<int>& nums, int target){
          int len=nums.size();
        for(int i=0;i<len;i++) {
           for(int j=i+1;j<len;j++){
               if(nums[j]==target-nums[i])
               {
                    return{i,j};
               }
           }
       }
        return{-1,-1};
    }
};
