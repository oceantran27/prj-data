#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-pairs

class Solution {
 public:
  int reversePairs(vector<int>& nums) {
    set<int> s;
    for (int n : nums) s.insert(n);
    int N = 0;
    map<long long, int> cc;
    for (int n : s) cc[n] = N++;
    cc[LONG_LONG_MAX] = N++;

    int base = 1;
    while (base < N) base <<= 1;
    vector<int> seg(base << 1);

    int ret = 0;
    for (int n : nums) {
      int x = base + cc.upper_bound(n * 2ll)->second;
      ret += seg[x];
      for (; x; x >>= 1)
        if ((x & 1) == 0) ret += seg[x ^ 1];
      for (x = cc[n] + base; x; x >>= 1) ++seg[x];
    }
    return ret;
  }
};
