#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/

class Solution {
 public:
  bool canMakeSubsequence(string str1, string str2) {
    int pos{};
    for (int i = 0; str1[i] and str2[pos]; ++i)
      if (str2[pos] == str1[i] or (str2[pos] % 26) == ((str1[i] + 1) % 26))
        ++pos;
    return !str2[pos];
  }
};
