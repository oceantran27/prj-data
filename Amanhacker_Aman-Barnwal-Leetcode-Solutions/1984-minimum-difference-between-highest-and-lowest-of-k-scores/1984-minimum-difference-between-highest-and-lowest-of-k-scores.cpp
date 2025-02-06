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
    
    int minimumDifference(vector<int>& nums, int k) {
    
        int res = INT_MAX;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<=n-k; i++)                           res = min(res, nums[i + k - 1] - nums[i]);
        return res;
    }
    
};