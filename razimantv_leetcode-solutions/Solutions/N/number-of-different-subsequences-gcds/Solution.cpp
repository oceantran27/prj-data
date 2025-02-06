#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-different-subsequences-gcds

class Solution {
 public:
  int countDifferentSubsequenceGCDs(vector<int>& nums) {
    unordered_set<int> s;
    int c = nums[0], NMAX = 0;
    for (int n : nums) {
      c = gcd(c, n);
      NMAX = max(NMAX, n);
      s.insert(n);
    }
    NMAX = NMAX / c;

    vector<int> cnt(NMAX + 1);
    for (int n : s) ++cnt[n / c];

    int ret = 0;
    for (int i = 1; i <= NMAX; ++i) {
      int g = 0;
      for (int j = i; j <= NMAX; j += i)
        if (cnt[j] and (g = __gcd(g, j)) == i) {
          ++ret;
          break;
        }
    }
    return ret;
  }
};
