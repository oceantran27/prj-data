#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/verifying-an-alien-dictionary

class Solution {
 public:
  bool isAlienSorted(vector<string>& words, string order) {
    char inv[26];
    for (int i = 0; i < 26; ++i) inv[order[i] - 'a'] = i;

    for (int i = 1, N = words.size(); i < N; ++i) {
      for (int j = 0; words[i - 1][j] or words[i][j]; ++j) {
        char c1 = words[i - 1][j], c2 = words[i][j];
        if (!c2)
          return false;
        else if (!c1)
          break;
        else if (c1 == c2)
          continue;
        if (inv[c1 - 'a'] > inv[c2 - 'a']) return false;
        break;
      }
    }
    return true;
  }
};
