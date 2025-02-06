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
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size(), k=0;
      if(!n) return 0;
      
      for(int i=0;i<n;++i){
        if(nums[i]!=nums[k]) nums[++k]=nums[i];
      }
      return k+1;
    }
};