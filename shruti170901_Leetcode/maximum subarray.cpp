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
    int maxSubArray(vector<int>& nums) {
        int local_max, global_max;
        global_max = local_max = nums[0];
        int n = nums.size();
        for(int i=1; i < n; i++){
            local_max = max(nums[i], nums[i] + local_max);
            global_max = max(local_max , global_max);
        }
        return global_max; 
    }
};