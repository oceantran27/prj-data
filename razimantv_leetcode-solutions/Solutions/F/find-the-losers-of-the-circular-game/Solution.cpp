#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-losers-of-the-circular-game/

class Solution {
 public:
  vector<int> circularGameLosers(int n, int k) {
    vector<int> ret, got(n);
    for (int i = 0, j = 0; !got[i]; got[i] = 1, i = (i + k * ++j) % n)
      ;
    for (int i = 0; i < n; ++i)
      if (!got[i]) ret.push_back(i + 1);
    return ret;
  }
};
