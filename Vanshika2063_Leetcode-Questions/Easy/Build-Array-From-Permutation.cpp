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
    vector<int> buildArray(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[i] = nums[i];
        }
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            ans.push_back(m[nums[i]]);
        }
        return ans;
    }
};
