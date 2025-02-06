#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-excellent-pairs

class Solution {
 public:
  long long countExcellentPairs(vector<int>& nums, int pp) {
    unordered_map<int, long long> cnt;
    unordered_set<int> seen;
    for (int x : nums)
      if (!seen.count(x)) seen.insert(x), ++cnt[__builtin_popcount(x)];

    long long ret{};
    for (auto [k, v] : cnt)
      for (auto [k2, v2] : cnt)
        if (k + k2 >= pp) ret += v * v2;
    return ret;
  }
};
