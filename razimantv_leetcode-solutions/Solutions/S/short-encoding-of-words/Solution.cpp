#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/short-encoding-of-words

class Solution {
 public:
  bool issuffix(const string& s1, const string& s2) {
    for (int n1 = s1.size(), n2 = s2.size(), i = n1 - 1, j = n2 - 1; i >= 0;
         --i, --j)
      if (s1[i] != s2[j]) return false;
    return true;
  }
  int minimumLengthEncoding(vector<string>& words) {
    sort(words.begin(), words.end(), [](const string& s1, const string& s2) {
      return s1.size() < s2.size();
    });

    int ret = 0;
    for (int i = 0, n = words.size(); i < n; ++i) {
      bool flag = false;
      for (int j = i + 1; j < n; ++j) {
        if (issuffix(words[i], words[j])) {
          flag = true;
          break;
        }
      }
      if (!flag) ret += words[i].size() + 1;
    }
    return ret;
  }
};
