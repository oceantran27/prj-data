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
        // KAdane's Algo
        // morgan stanley 2021
        int maxSum = nums[0];
        int presSum = maxSum;
        for(int i=1;i<nums.size();i++){
            presSum = max(nums[i]+presSum, nums[i] );
            maxSum = max(presSum,maxSum );
        }
        return maxSum;
    }
};