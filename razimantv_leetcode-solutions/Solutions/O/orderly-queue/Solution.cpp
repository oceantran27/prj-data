#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/orderly-queue

class Solution {
 public:
  string orderlyQueue(string s, int k) {
    if (k > 1) {
      sort(s.begin(), s.end());
      return s;
    }

    int N = s.size();
    string best = s;
    s += s;

    for (int i = 1; i < N; ++i) best = min(best, s.substr(i, N));
    return best;
  }
};
