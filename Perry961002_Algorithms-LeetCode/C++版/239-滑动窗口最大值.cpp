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
        deque<int> deq;  //存放窗口元素的下标,保证队头元素总是最大值
        vector<int> result;
        int len = nums.size();
        for(int i = 0;i<len;i++)
        {
            while(!deq.empty() && i - deq.front() >= k) //窗口元素的数量将超过k,队头元素出队
                deq.pop_front();
            while(!deq.empty() && nums[i] >= nums[deq.back()])  //队尾元素比nums[i]小或相等就删除
                deq.pop_back();
            deq.push_back(i);
            if(i >= k - 1)
                result.push_back(nums[deq.front()]);
        }
        return result;
    }
};