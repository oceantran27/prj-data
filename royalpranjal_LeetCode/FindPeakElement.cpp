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
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size() == 1){
            return 0;
        }
        
        if(nums[0] > nums[1]){
            return 0;
        }
        
        for(int i = 1; i < nums.size()-1; i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                return i;
            }
        }   
        
        if(nums[nums.size()-1] > nums[nums.size()-2]){
            return nums.size()-1;
        }
        
        return 0;
    }
};
