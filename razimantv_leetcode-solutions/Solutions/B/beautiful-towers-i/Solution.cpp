#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/beautiful-towers-i/

class Solution {
 public:
  long long maximumSumOfHeights(vector<int>& h) {
    long long ret{};
    for (int i = 0, n = h.size(); i < n; ++i) {
      long long cur = h[i];
      for (int j = i - 1, hc = h[i]; j >= 0; --j) cur += hc = min(hc, h[j]);
      for (int j = i + 1, hc = h[i]; j < n; ++j) cur += hc = min(hc, h[j]);
      ret = max(ret, cur);
    }
    return ret;
  }
};
