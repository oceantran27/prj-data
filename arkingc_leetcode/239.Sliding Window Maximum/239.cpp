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
        if(nums.empty() || k <= 0)  return vector<int>();
        
        vector<int> res;
        deque<int> max_deque;

        for(int i = 0;i < nums.size();i++){
            while(!max_deque.empty() && nums[i] > nums[max_deque.back()]) {max_deque.pop_back();}
            max_deque.push_back(i);
            if(i - max_deque.front() + 1 > k)   max_deque.pop_front();
            if(i >= k - 1)
                res.push_back(nums[max_deque.front()]);
        }       
        return res;
    }
};