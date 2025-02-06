#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/backspace-string-compare

class Solution {
 public:
  char next(string &S, int &i) {
    int c = 0;
    while (1) {
      if (i < 0) return '#';
      if (S[i] == '#')
        c++;
      else if (c-- == 0)
        return S[i--];
      i--;
    }
  }
  bool backspaceCompare(string S, string T) {
    int i = S.size() - 1, j = T.size() - 1;
    while (i >= 0 or j >= 0) {
      if (next(S, i) != next(T, j)) return false;
    }
    return true;
  }
};
