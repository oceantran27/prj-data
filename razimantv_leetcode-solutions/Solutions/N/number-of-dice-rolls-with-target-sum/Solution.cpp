#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/

class Solution {
  unordered_map<int, int> cache;

 public:
  int numRollsToTarget(int n, int k, int target) {
    if (n == 0 or target == 0) return n == target;
    int conv = (n << 10) | target;
    if (cache.count(conv)) return cache[conv];
    int& ret = cache[conv];

    const int MOD = 1'000'000'007;
    for (int i = 1; i <= k and i <= target; ++i) {
      ret += numRollsToTarget(n - 1, k, target - i);
      if (ret >= MOD) ret -= MOD;
    }
    return ret;
  }
};
