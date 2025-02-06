#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> ans;
        int i, s1=0, s2=0, n=nums.size();
        sort(nums.begin(), nums.end());
        for(i=0;i<n;i++) s1+=nums[i];
        for(i=n-1;i>=0;i--){
            if(s2<=s1/2){
                s2+=nums[i];
                ans.push_back(nums[i]);
            }
            else break;
        }
        return ans;
    }
};