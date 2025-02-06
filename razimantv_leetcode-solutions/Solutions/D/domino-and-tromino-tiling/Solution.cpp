#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/domino-and-tromino-tiling

class Solution {
 public:
  int numTilings(int n) {
    const int mod = 1'000'000'007;
    if (n < 2) return 1;

    int f0 = 1, g0 = 0, f1 = 1, g1 = 0;
    for (int i = 2; i <= n; ++i) {
      int f2 = (f1 + f0 + 2ll * g1) % mod;
      int g2 = (f0 + g1) % mod;
      f0 = f1;
      g0 = g1;
      f1 = f2;
      g1 = g2;
    }
    return f1;
  }
};
