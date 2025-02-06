#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-longest-increasing-subsequence

class Solution {
 public:
  int findNumberOfLIS(vector<int>& nums) {
    int N = nums.size();
    vector<int> l(N), cnt(N);
    int best = 0, ret = 0;
    for (int i = 0; i < N; ++i) {
      l[i] = 0;
      cnt[i] = 1;
      for (int j = 0; j < i; ++j) {
        if (nums[j] >= nums[i]) continue;
        if (l[j] >= l[i]) {
          l[i] = l[j] + 1;
          cnt[i] = cnt[j];
        } else if (l[j] + 1 == l[i]) {
          cnt[i] += cnt[j];
        }
      }
      if (l[i] > best)
        best = l[i], ret = cnt[i];
      else if (l[i] == best)
        ret += cnt[i];
    }
    return ret;
  }
};
