#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

class Solution {
 public:
  int minInsertions(string s) {
    int n = s.size();
    vector<int> prev(n), cur(n);
    for (int m = 2; m <= n; ++m) {
      vector<int> next(n - m + 1);
      for (int i = 0, j = m - 1; j < n; ++i, ++j)
        next[i] = (s[i] == s[j]) ? prev[i + 1] : (1 + min(cur[i], cur[i + 1]));
      prev = cur;
      cur = next;
    }
    return cur[0];
  }
};
