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
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
           string num=to_string(nums[i]);
            for(int j=0;j<num.size();j++){
                ans.push_back(num[j]-'0');
            }
        }
        return ans;
    }
};