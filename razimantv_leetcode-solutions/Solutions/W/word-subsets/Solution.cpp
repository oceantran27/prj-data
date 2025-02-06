#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/word-subsets

class Solution {
 public:
  vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
    char best[26] = {0}, cnt[26] = {0};
    for (const string& s : B) {
      for (char c : s) best[c - 'a'] = max(best[c - 'a'], ++cnt[c - 'a']);
      for (char c : s) --cnt[c - 'a'];
    }

    vector<pair<char, int>> exist;
    int tot = 0;
    for (int i = 0; i < 26; ++i) {
      if (best[i]) exist.push_back({i, best[i]}), tot += best[i];
    }
    if (tot > 10) return {};

    vector<string> ret;
    for (const string& s : A) {
      for (char c : s) ++cnt[c - 'a'];
      for (auto [c, cur] : exist) {
        if (cnt[c] < cur) goto BPP;
      }
      ret.push_back(s);
    BPP:;
      for (char c : s) --cnt[c - 'a'];
    }
    return ret;
  }
};
