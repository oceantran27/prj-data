#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/move-pieces-to-obtain-a-string

class Solution {
 public:
  bool canChange(string s, string t) {
    for (int i = 0, j = 0, n = s.size(); i < n and j < n; ++i, ++j) {
      while (i < n and s[i] == '_') ++i;
      while (j < n and t[j] == '_') ++j;
      if (i == n or j == n) return i == n and j == n;
      if (s[i] != t[j])
        return false;
      else if (s[i] == 'L' and i < j)
        return false;
      else if (s[i] == 'R' and i > j)
        return false;
    }
    return true;
  }
};
