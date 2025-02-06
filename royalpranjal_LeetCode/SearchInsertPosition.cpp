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
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            if(nums[i] >= target){
                return i;
            }
        }
        
        return n;
    }
};
