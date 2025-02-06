#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/zigzag-conversion/

class Solution {
 public:
  string convert(string s, int r) {
    if (r == 1) return s;
    vector<string> rows(r);
    for (int i = 0, j = 0, dj = -1; s[i]; ++i, j += dj) {
      rows[j] += s[i];
      if (j == 0 or j == r - 1) dj = -dj;
    }
    return accumulate(rows.begin(), rows.end(), string());
  }
};
