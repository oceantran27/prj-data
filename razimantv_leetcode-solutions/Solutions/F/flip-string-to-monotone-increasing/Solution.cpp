#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/flip-string-to-monotone-increasing

class Solution {
 public:
  int minFlipsMonoIncr(string s) {
    int l = s.size(), z = 0;
    for (char c : s)
      if (c == '0') ++z;

    int best = min(z, l - z);
    for (int i = 0, c = 0; i < l; ++i) {
      if (s[i] == '1') ++c;
      best = min(best, 2 * c + z - i - 1);
    }
    return best;
  }
};
