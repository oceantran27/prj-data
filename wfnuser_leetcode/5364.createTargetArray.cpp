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
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            auto it = ans.begin();
            ans.insert(it+index[i], nums[i]);
        }
        
        return ans;
    }
};