#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-penalty-for-a-shop/

class Solution {
 public:
  int bestClosingTime(string s) {
    int ytot{}, n = s.size();
    for (char c : s)
      if (c == 'Y') ++ytot;
    int ret = 0, best = ytot;
    for (int i = 0, cur = ytot; i < n; ++i) {
      if (s[i] == 'N')
        ++cur;
      else
        --cur;
      if (cur < best) ret = i + 1, best = cur;
    }
    return ret;
  }
};
