#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimize-deviation-in-array

class Solution {
 public:
  int minimumDeviation(vector<int>& nums) {
    set<pair<int, int>> cur;

    int R = 0;
    for (int n : nums) {
      int l, r;
      if (n & 1)
        l = n, r = n << 1;
      else {
        r = l = n;
        while ((l & 1) == 0) l >>= 1;
      }
      R = max(R, l);
      cur.insert({l, r});
    }

    int best = R - cur.begin()->first;
    while (!cur.empty()) {
      auto [l, r] = *cur.begin();
      cur.erase(cur.begin());
      best = min(best, R - l);
      if (l == r) break;
      R = max(R, l <<= 1);
      cur.insert({l, r});
    }
    return best;
  }
};
