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
    int findDuplicate(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[abs(nums[i])] < 0)
                return abs(nums[i]);
            
                nums[abs(nums[i])]*= -1;
        }
        return 0;
    } 
};