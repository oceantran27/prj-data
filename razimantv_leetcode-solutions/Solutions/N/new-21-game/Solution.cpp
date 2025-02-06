#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/new-21-game/

class Solution {
 public:
  double new21Game(int n, int k, int maxPts) {
    if (!k) return 1;
    // f(i) = sum_{j = i-k .. i-1} f(j) / maxPts
    vector<double> prob(n + 1), psum(n + 1);
    prob[0] = psum[0] = 1;
    for (int i = 1; i <= n; ++i) {
      int l = max(i - maxPts, 0), r = min(i - 1, k - 1);
      if (r >= l) prob[i] = (psum[r] - (l ? psum[l - 1] : 0)) / maxPts;
      psum[i] = psum[i - 1] + prob[i];
    }
    return psum[n] - psum[k - 1];
  }
};
