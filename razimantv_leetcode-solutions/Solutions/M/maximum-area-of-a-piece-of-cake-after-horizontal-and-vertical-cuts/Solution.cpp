#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts

class Solution {
 public:
  long long get(vector<int>& vec, int L) {
    sort(vec.begin(), vec.end());
    int ret = max(vec[0], L - vec.back());
    for (int i = 1, n = vec.size(); i < n; ++i)
      ret = max(ret, vec[i] - vec[i - 1]);
    return ret;
  }
  int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
    return (get(hc, h) * get(vc, w)) % 1'000'000'007;
  }
};
