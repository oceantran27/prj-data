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
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        for(int i=0; i<(1<<n); ++i) {
            vector<int> sub;
            
            for(int j=0; j<n; ++j)
                if(i & (1<<j))
                    sub.push_back(nums[j]);
            ans.push_back(sub);
        }
        
        return ans;
    }
};
