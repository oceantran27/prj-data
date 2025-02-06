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
    int searchInsert(vector<int>& nums, int target) {
                  int n=nums.size();
      
    int mid,beg=0;
        int last=n-1;
        while(beg<=last)
        { mid=beg+(last-beg)/2;
          if(target==nums[mid])
         return mid;
       else if(target>nums[mid])
                beg=mid+1;
         else if(target<nums[mid])
             last=mid-1;
    
         
        } 
        return beg;
    }
};
