#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/repeated-substring-pattern

class Solution {
 public:
  bool repeatedSubstringPattern(string s) {
    int L = s.size();
    if (L < 2) return false;
    for (int i = 2; i <= L; ++i) {
      if (L % i) continue;
      for (int j = 2; j * j <= i; ++j)
        if (i % j == 0) goto BPP;
      for (int j = 0; j + (L / i) < L; ++j)
        if (s[j] != s[j + (L / i)]) goto BPP;
      return true;
    BPP:;
    }
    return false;
  }
};
