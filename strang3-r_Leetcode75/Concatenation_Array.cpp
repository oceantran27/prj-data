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
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }
        
        return ans;
    }
};

