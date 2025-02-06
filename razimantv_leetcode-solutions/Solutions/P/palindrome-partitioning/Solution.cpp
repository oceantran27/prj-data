#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/palindrome-partitioning

class Solution {
 public:
  unordered_map<int, char> cache;

  char ispali(const string& s, int l, int r) {
    if (r <= l)
      return 1;
    else if (cache.count((l << 4) | r))
      return cache[(l << 4) | r];
    else
      return cache[(l << 4) | r] = (s[l] == s[r]) && ispali(s, l + 1, r - 1);
  }

  vector<vector<string>> partition(string s) {
    int N = s.size();
    vector<vector<vector<string>>> ret(N + 1);
    ret[0].push_back({});
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j <= i; ++j) {
        if (!ispali(s, j, i)) continue;
        string cur = s.substr(j, i - j + 1);
        for (auto prev : ret[j]) {
          ret[i + 1].push_back(prev);
          ret[i + 1].back().push_back(cur);
        }
      }
    }
    return ret[N];
  }
};
