#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/lexicographically-smallest-string-after-substring-operation/

class Solution {
 public:
  string smallestString(string s) {
    for (int i = 0; s[i]; ++i) {
      if (s[i] == 'a') continue;
      for (int j = i; s[j] and s[j] != 'a'; --s[j++])
        ;
      return s;
    }
    s.back() = 'z';
    return s;
  }
};
