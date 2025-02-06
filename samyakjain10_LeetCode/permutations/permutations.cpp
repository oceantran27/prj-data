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
    
    vector<vector<int>> res;
    
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0,nums.size()-1);
        return res;
    }
    
    void helper(vector<int>& nums, int i, int n){
        
        if(i==n){
            res.push_back(nums);
            return;
        }
        
        for(int j=i; j<=n; j++){
            swap(nums[i], nums[j]);
            helper(nums, i+1, n);
            swap(nums[j], nums[i]);
        }
        
    }
    
};