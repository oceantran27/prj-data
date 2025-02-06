#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/most-frequent-even-element/

class Solution {
 public:
  int mostFrequentEven(vector<int>& nums) {
    int best = -1, bestcnt = 0;
    unordered_map<int, int> cnt;
    for (int x : nums) {
      if (x & 1) continue;
      ++cnt[x];
      if (cnt[x] > bestcnt or (cnt[x] == bestcnt and x < best))
        best = x, bestcnt = cnt[x];
    }
    return best;
  }
};
