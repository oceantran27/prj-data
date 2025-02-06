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
        vector<int> sub;
        vector<vector<int>> ans;
        bt(nums, sub, ans, 0);
        return ans;
    }

    void bt(vector<int>& nums, vector<int> sub, vector<vector<int>> & ans, int i)
    {
    	if(i == nums.size())
		{
			ans.push_back(sub);
			return;
		}
    	bt(nums, sub, ans, i+1);//不加入nums[i]
    	sub.push_back(nums[i]);
    	bt(nums, sub, ans, i+1);//加入nums[i]
    }
};

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        vector<vector<int>> ans;
        ans.push_back({});
        int n, i, j;
        for(i = 0; i < nums.size(); ++i)
        {
        	n = ans.size();
        	for(j = 0; j < n; ++j)
        	{
        		sub = ans[j];
        		sub.push_back(nums[i]);
        		ans.push_back(sub);
        	}
        }
        return ans;
    }
};