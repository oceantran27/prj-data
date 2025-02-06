#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/is-subsequence

class Solution {
 public:
  bool isSubsequence(string s, string t) {
    if (s.empty()) return true;
    for (int i = 0, j = 0; j < t.size(); j++)
      if (s[i] == t[j] and ++i == s.size()) return true;
    return false;
  }
};
