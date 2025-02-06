#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans{};
        for(int i{0}; i<nums.size(); ++i){
            if(nums.at(i) != i){
                ans = i;
                break;
            }
            else{
                ans = nums.size();
            }
        }
        return ans;
    }
};
