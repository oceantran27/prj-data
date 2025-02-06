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
        
        int beg = 0, end = nums.size()-1, mid;
        
        while (beg<=end) 
        {
            mid = (beg + end)/2;
            if (nums[mid]==target)
                return mid;
            
            if (nums[mid]<target)
                beg = mid+1;
            
            if (nums[mid]>target)
                end = mid-1 ;
        } 
       return beg;
    }
};
