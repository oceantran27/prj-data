#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// 287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // assert nums is valid...
        
        int len = nums.size();
        
        for (int i = 0; i < len; i++) {
            int k = abs(nums[i]);
            
            if (nums[k] < 0) {
                return k;
            }
            
            nums[k] = -nums[k];
        } 
        
        // throw error...
        return INT_MIN;

    }
}; 
