#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// Author - Shadowpii

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            ans.push_back(sum);
        }
        
        return ans;
        
    }
};