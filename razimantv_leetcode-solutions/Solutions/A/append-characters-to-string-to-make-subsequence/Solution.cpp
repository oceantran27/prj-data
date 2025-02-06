#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/

class Solution {
 public:
  int appendCharacters(string s, string t) {
    int i = 0, j = 0;
    while (s[i] and t[j])
      if (s[i++] == t[j]) ++j;
    return t.size() - j;
  }
};
