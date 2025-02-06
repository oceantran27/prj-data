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
  int constrainedSubsetSum(vector<int> &nums, int k) {
    int ans = *max_element(nums.begin(), nums.end());

    deque<pair<int, int>> queue;
    for (int i = 0; i < nums.size(); i++) {
      while (queue.size() && i - queue.front().first > k)
        queue.pop_front();

      int s = queue.size() ? queue.front().second : 0;
      s += nums[i];

      if (s >= 0) {
        while (queue.size() && queue.back().second <= s)
          queue.pop_back();
        queue.emplace_back(i, s);
      }

      ans = max(ans, s);
    }

    return ans;
  }
};
