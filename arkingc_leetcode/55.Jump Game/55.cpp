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
    bool canJump(vector<int>& nums) {
        if(nums.empty())    return true;
        
        int rest = 0;//步长为非负数，这里初始化为0
        
        int i;
        for(i = 0;i < nums.size();i++){
            if(rest == 0 || nums[i] > --rest)   rest = nums[i];
            if(rest == 0 && i < nums.size() - 1)   return false;
        }
    
        return true;
    }
};