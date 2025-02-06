#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution {
 public:
  int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> cnt;
    int ret = 0;
    for (int n : nums)
      if (cnt[k - n] > 0)
        ++ret, --cnt[k - n];
      else
        ++cnt[n];
    return ret;
  }
};
