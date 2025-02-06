#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/consecutive-characters

class Solution {
 public:
  int maxPower(string s) {
    int best = 1, cur = 1, N = s.size();
    for (int i = 1; i < N; ++i) {
      if (s[i] == s[i - 1])
        ++cur;
      else
        cur = 1;
      best = max(best, cur);
    }
    return best;
  }
};
