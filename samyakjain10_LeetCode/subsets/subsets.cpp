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
    
    vector<vector<int>> ans;
    vector<int> temp;
    
    
    void helper(vector<int> &nums, int i, int n){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(nums[i]);
        helper(nums,i+1,n);
        temp.pop_back();
        helper(nums,i+1,n);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n = nums.size();
    
        helper(nums,0,n);
        return ans;
    }
};