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
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vResult;
        int iLength = nums.size();
        vResult.push_back(nums[0]);
        for(int i = 1; i < iLength; i++)
            vResult.push_back(vResult[i - 1] + nums[i]);
        return vResult;
    }
};