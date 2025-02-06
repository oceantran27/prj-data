#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

class Solution {
 public:
  int maxVowels(string s, int k) {
    int ret{};
    string vowels = "aeiou";
    unordered_set<char> vset(vowels.begin(), vowels.end());
    for (int i = 0, n = s.size(), v = 0; i < n; ++i) {
      if (i >= k) v -= vset.count(s[i - k]);
      ret = max(ret, v += vset.count(s[i]));
    }
    return ret;
  }
};
