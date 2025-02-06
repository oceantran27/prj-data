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
    vector<int> res;
    deque<int> d;
    for (int i = 0; i < nums.size(); ++i) {
      if (!d.empty() && i - d.front() >= k) {
        d.pop_front();
      }
      while (!d.empty() && nums[i] >= nums[d.back()]) {
        d.pop_back();
      }
      d.emplace_back(i);
      if (i >= k - 1) {
        res.emplace_back(nums[d.front()]);
      }
    }
    return res;
  }
};
