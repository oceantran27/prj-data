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
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.empty())
            return {};
        int l = 1, r = 0;
        vector<int> ans;
        deque<int> q;
        while(k--)
        {
            while(!q.empty() && nums[q.back()] <= nums[r])
            {
                q.pop_back();
            }
            q.push_back(r++);
        }
        ans.push_back(nums[q.front()]);
        while(r < nums.size())
        {
            if(q.front() < l)
                q.pop_front();
            while(!q.empty() && nums[q.back()] <= nums[r])
            {
                q.pop_back();
            }
            q.push_back(r++);
            l++;
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};