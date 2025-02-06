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
        int currSum = 0, maxSubSum = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(currSum<0)
                currSum = 0;
            currSum+=nums[i];
            maxSubSum = max(maxSubSum,currSum);
        }
        
        return maxSubSum;
    }
};