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
    int n = nums.size();
    int maxCover = 0;  
    for(int start =0; start<= maxCover && start<n; start++)  
    {  
      if(nums[start]+start > maxCover)  
        maxCover = nums[start]+start;  
        if(maxCover >= n-1) return true;  
    }  
    return false;  
  }  
};