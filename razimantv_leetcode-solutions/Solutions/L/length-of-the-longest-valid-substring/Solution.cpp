#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/length-of-the-longest-valid-substring/

struct trienode {
  unordered_map<char, trienode*> next;
  trienode() {}
};

class Solution {
 public:
  trienode head;

  void addWord(string word) {
    trienode* cur = &head;
    for (char c : word) {
      if (!cur->next.count(c)) cur->next[c] = new trienode();
      cur = cur->next[c];
    }
    cur->next['$'] = NULL;
  }

  int longestValidSubstring(string word, vector<string>& forbidden) {
    for (string s : forbidden) addWord(s);
    vector<pair<int, int>> bad;
    map<int, int> end;

    for (int i = 0; word[i]; ++i) {
      trienode* cur = &head;
      for (int j = i; word[j]; ++j) {
        if (!cur->next.count(word[j])) break;
        cur = cur->next[word[j]];
        if (cur->next.count('$')) {
          bad.push_back({i, j});
          ++end[j];
          break;
        }
      }
    }

    int best{};
    for (int i = 0, n = word.size(), j = 0, b = bad.size(); i < n; ++i) {
      int lim = end.empty() ? n - 1 : end.begin()->first - 1;
      best = max(best, lim - i + 1);
      while (j < bad.size() and bad[j].first == i) {
        if (--end[bad[j].second] == 0) end.erase(bad[j].second);
        ++j;
      }
    }
    return best;
  }
};
