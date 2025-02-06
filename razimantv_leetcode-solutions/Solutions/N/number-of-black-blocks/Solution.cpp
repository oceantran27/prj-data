#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-black-blocks/

class Solution {
 public:
  vector<long long> countBlackBlocks(int m, int n,
                                     vector<vector<int>>& coordinates) {
    unordered_map<long long, int> cnt;
    for (auto& c : coordinates) {
      int i = c[0], j = c[1];
      for (int ii = max(i - 1, 0); ii <= min(i, m - 2); ++ii)
        for (int jj = max(j - 1, 0); jj <= min(j, n - 2); ++jj)
          ++cnt[((ii * 1ll) << 20) | jj];
    }
    vector<long long> ret(5);
    ret[0] = (m - 1) * 1ll * (n - 1) - cnt.size();
    for (auto [k, v] : cnt) ++ret[v];
    return ret;
  }
};
