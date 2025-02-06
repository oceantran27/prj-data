#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/slowest-key

class Solution {
 public:
  char slowestKey(vector<int>& r, string k) {
    pair<int, char> best;
    for (int i = 0, t = 0, n = r.size(); i < n; ++i) {
      best = max(best, make_pair(r[i] - t, k[i]));
      t = r[i];
    }
    return best.second;
  }
};
