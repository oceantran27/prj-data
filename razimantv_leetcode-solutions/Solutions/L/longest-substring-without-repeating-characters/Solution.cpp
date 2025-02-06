#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    int best = 0;
    unordered_set<char> seen;
    for (int i = 0, j = 0, n = s.size(); i < n; ++i) {
      while (seen.count(s[i])) seen.erase(s[j++]);
      best = max(best, i - j + 1);
      seen.insert(s[i]);
    }
    return best;
  }
};
