#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/split-the-array-to-make-coprime-product

class Solution {
 public:
  int findValidSplit(vector<int>& nums) {
    int n = nums.size();
    if (n == 1)
      return -1;
    else if (nums[0] == 1)
      return 0;

    unordered_map<int, pair<int, int>> range;
    int nmax = *max_element(nums.begin(), nums.end()) + 1;
    vector<int> smallprime(nmax);
    for (int i = 2; i * i < nmax; ++i) {
      if (smallprime[i]) continue;
      for (int j = i * i; j < nmax; j += i) smallprime[j] = i;
    }

    int lmin = n, rmax = -1;
    for (int i = 0; i < n; ++i) {
      for (int x = nums[i]; x > 1;) {
        int p = smallprime[x] ? smallprime[x] : x;
        if (range.count(p))
          range[p].second = i;
        else
          range[p] = {i, i};
        x /= p;
      }
    }

    vector<pair<int, int>> intervals;
    for (auto& [k, v] : range) intervals.push_back(v);
    sort(intervals.begin(), intervals.end());

    int t = 0;
    for (auto [start, end] : intervals) {
      if (start > t)
        return t;
      else if ((t = max(t, end)) == n - 1)
        break;
    }
    return -1;
  }
};
