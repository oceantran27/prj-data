#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/word-pattern

class Solution {
 public:
  bool wordPattern(string pattern, string str) {
    string fw[26];
    unordered_map<string, char> bw;

    istringstream iss(str);
    string s;
    int p;
    char c;
    while (iss >> s) {
      if (p == pattern.size()) return false;
      c = pattern[p++] - 'a';
      if ((fw[c] != "" and fw[c] != s) or (bw.count(s) and bw[s] != c))
        return false;
      fw[c] = s;
      bw[s] = c;
    }
    return p == pattern.size();
  }
};
