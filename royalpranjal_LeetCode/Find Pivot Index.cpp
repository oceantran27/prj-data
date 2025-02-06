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
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), right = 0, left = 0;   
        
        for(int i = 0; i < n; i++) right += nums[i];
        
        for(int i = 0; i < n; i++){
            right -= nums[i];
            
            if(left == right){
                return i;
            }
            
            left += nums[i];
        }
        
        return -1;
    }
};
