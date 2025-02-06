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
    vector<int> leftRigthDifference(vector<int>& nums) 
    {
        long long total = 0;
        for (int num : nums) total += num;
        
        vector<int>ans;
        long long leftSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            long long rightSum = total - (leftSum + nums[i]);
            ans.push_back(abs(rightSum - leftSum));
            leftSum += nums[i];
        }
        return ans;
    }
};
