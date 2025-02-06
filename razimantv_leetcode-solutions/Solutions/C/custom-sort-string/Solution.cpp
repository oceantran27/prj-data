#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/custom-sort-string

class Solution {
 public:
  string customSortString(string order, string str) {
    vector<int> cnt(26, 26);
    for (int i = 0, n = order.size(); i < n; ++i) cnt[order[i] - 'a'] = i;
    sort(str.begin(), str.end(),
         [&](char a, char b) { return cnt[a - 'a'] < cnt[b - 'a']; });
    return str;
  }
};
