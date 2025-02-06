#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-removable-characters

class Solution {
 public:
  bool issub(string s, const string& p, vector<int>& removable, int i) {
    while (i >= 0) s[removable[i--]] = 'A';
    for (int i = 0, j = 0; s[i]; ++i) {
      if (s[i] == p[j] and !p[++j]) return true;
    }
    return false;
  }

  int maximumRemovals(string s, string p, vector<int>& removable) {
    if (p.empty() or removable.empty()) return removable.size();

    int start = -1, end = removable.size();
    while (end - start > 1) {
      int mid = (start + end) >> 1;
      if (issub(s, p, removable, mid))
        start = mid;
      else
        end = mid;
    }
    return start + 1;
  }
};
