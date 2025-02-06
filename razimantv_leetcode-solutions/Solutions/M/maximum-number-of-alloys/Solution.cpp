#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-alloys/

class Solution {
 public:
  int maxNumberOfAlloys(int n, int k, int budget,
                        vector<vector<int>>& composition, vector<int>& stock,
                        vector<int>& cost) {
    auto poss = [&](int machine, int cnt) {
      long long needed{};
      for (int i = 0; i < n; ++i)
        if ((needed +=
             cost[i] *
             max(composition[machine][i] * 1ll * cnt - stock[i], 0ll)) > budget)
          return false;
      return true;
    };

    int ret{};
    for (int i = 0; i < k; ++i) {
      int start = 0, end = 1'000'000'000;
      while (end - start > 1) {
        int mid = (end + start) >> 1;
        (poss(i, mid) ? start : end) = mid;
      }
      ret = max(ret, start);
    }
    return ret;
  }
};
