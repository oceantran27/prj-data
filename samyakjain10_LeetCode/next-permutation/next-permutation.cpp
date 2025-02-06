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
    void nextPermutation(vector<int>& nums) {
        
        int i = nums.size()-2;
        
        while(i>=0 && nums[i+1] <= nums[i]) i--;
        
        if(i>=0){
            int j=nums.size()-1;
            
            while(nums[j] <= nums[i]) j--;
            
            swap(nums[i], nums[j]);
        }
        
        i = i+1;
        int j = nums.size()-1;
        
        while(i<j){
            swap(nums[i++], nums[j--]);
        }
        
    }
};