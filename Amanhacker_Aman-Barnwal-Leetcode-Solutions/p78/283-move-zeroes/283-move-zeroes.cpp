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
    
    void moveZeroes(vector<int>& nums) {
    
        int n = nums.size();
        int j = 0;
        
        for(int i=0; i<n; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }    
        }
        
        return;
    }
    
};