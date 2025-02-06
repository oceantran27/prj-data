#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-binary-substrings

class Solution {
 public:
  int countBinarySubstrings(string s) {
    char prev = '0';
    int cur = 0;
    vector<int> cnt;
    for (char c : s) {
      if (c != prev) {
        cnt.push_back(cur);
        cur = 1;
        prev = c;
      } else
        ++cur;
    }
    cnt.push_back(cur);

    int N = cnt.size(), ret = 0;
    for (int i = 1; i < N; ++i) ret += min(cnt[i], cnt[i - 1]);
    return ret;
  }
};
