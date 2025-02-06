#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/bag-of-tokens

class Solution {
 public:
  int bagOfTokensScore(vector<int>& t, int P) {
    sort(t.begin(), t.end());
    int l = 0, r = t.size() - 1, s = 0;
    while (l <= r) {
      if (P >= t[l])
        P -= t[l++], ++s;
      else if (s and r > l)
        P += t[r--], --s;
      else
        break;
    }
    return s;
  }
};
