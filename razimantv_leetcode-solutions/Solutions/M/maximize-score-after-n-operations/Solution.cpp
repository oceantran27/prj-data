#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximize-score-after-n-operations

class Solution {
 public:
  int maxScore(vector<int>& nums) {
    int N = nums.size();
    int mask = (1 << N);

    vector<int> best(mask, -1);
    best[0] = 0;
    for (int i = 1; i < mask; ++i) {
      int cur = __builtin_popcount(i) / 2;
      for (int j = 0; j < N; ++j) {
        if (!(i & (1 << j))) continue;
        for (int k = 0; k < j; ++k) {
          if (!(i & (1 << k))) continue;
          int child = i ^ (1 << j) ^ (1 << k);
          if (best[child] > -1)
            best[i] = max(best[i], best[child] + cur * __gcd(nums[j], nums[k]));
        }
      }
    }
    return best.back();
  }
};
