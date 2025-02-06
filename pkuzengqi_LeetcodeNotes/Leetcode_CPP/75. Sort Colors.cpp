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
    void sortColors(vector<int>& nums) {
      int red=0, blue=nums.size()-1;
      for(int i=0;i<=blue;){
        if(nums[i]==0) swap(nums[i++],nums[red++]);
        else if(nums[i]==1) ++i;
        else swap(nums[i],nums[blue--]);
      }
    }
};