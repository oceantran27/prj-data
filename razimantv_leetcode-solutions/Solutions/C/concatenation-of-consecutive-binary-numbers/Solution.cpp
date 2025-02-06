#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers

class Solution {
 public:
  int concatenatedBinary(int n) {
    int ret = 0;
    const int mod = 1'000'000'007;
    for (int i = 1, j = 2; i <= n; ++i) {
      if (i == j) j <<= 1;
      ret = (ret * (long long)j + i) % mod;
    }
    return ret;
  }
};
