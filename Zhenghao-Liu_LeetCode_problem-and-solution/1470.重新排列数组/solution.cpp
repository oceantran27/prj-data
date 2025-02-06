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
    vector<int> shuffle(vector<int>& nums, int n) {
        int nums_size=nums.size();
        int left=0,right=n;
        vector<int> ans;
        while (right<nums_size)
        {
            ans.push_back(nums.at(left));
            ans.push_back(nums.at(right));
            ++left;
            ++right;
        }
        return ans;
    }
};
